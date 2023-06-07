class LRUCache {
public:
    struct Node{
        int key;
        int value;
        Node* next;
        Node* prev;
        Node(int d,int c){
            key=d;
            value=c;
        }
    }; 
    int capacity;
    unordered_map <int, Node*> m;
    Node* head=new Node(-1,-1);
    Node* tail=new Node(-1,-1);
    LRUCache(int c) {
        capacity=c;
        head->next=tail;
        tail->prev=head;
    }
    void addNode(Node* newNode){
        Node* temp=head->next;
        newNode->next=temp;
        newNode->prev=head;
        head->next=newNode;
        temp->prev=newNode; 
    }
    void deleteNode(Node* delNode){
        Node* delPrev=delNode->prev;
        Node* delNext=delNode->next;
        delPrev->next=delNext;
        delNext->prev=delPrev;
    }
    int get(int key) {
        if(m.find(key)!=m.end()){
            Node* resNode=m[key];
            int res=resNode->value;
            m.erase(key);
            deleteNode(resNode);
            addNode(resNode);
            m[key]=head->next;
            return res;
        }
        return -1;
    }
    
    void put(int key, int value) {
        if(m.find(key)!=m.end()){
            Node* existingNode=m[key];
            m.erase(key);
            deleteNode(existingNode);
        }
        if(m.size()==capacity){
            m.erase(tail->prev->key);
            deleteNode(tail->prev);
        }
        addNode(new Node(key,value));
        m[key]=head->next;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */