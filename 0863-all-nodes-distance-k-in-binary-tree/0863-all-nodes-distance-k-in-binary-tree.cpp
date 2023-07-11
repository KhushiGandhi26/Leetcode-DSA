/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void markParent(TreeNode* root,unordered_map<TreeNode*,TreeNode*> &parent,TreeNode* taget){
        queue <TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            TreeNode* temp=q.front();
            q.pop();
            if(temp->left){
                parent[temp->left]=temp;
                q.push(temp->left);
            }
            if(temp->right){
                parent[temp->right]=temp;
                q.push(temp->right);
            }
        }
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode*,TreeNode*> parent;
        markParent(root,parent,target);
        queue <TreeNode*> q;
        int marked=0;
        unordered_map <TreeNode*,bool> visited;
        q.push(target);
        visited[target]=true;
        while(!q.empty()){
            if(marked==k)break;
            marked++;
            int n=q.size();
            for(int i=0;i<n;i++){
                TreeNode* t=q.front();
                q.pop(); 
                if(parent[t] && !visited[parent[t]]){
                    visited[parent[t]]=true;
                    q.push(parent[t]);
                }
                if(t->left && !visited[t->left]){
                    visited[t->left]=true;
                    q.push(t->left);
                }
                if(t->right && !visited[t->right]){
                    visited[t->right]=true;
                    q.push(t->right);
                }
            }
        }
        vector <int> result;
        while(!q.empty()){
            TreeNode* t=q.front();
            q.pop();
            result.push_back(t->val);
        }
        return result;
        
    }
};