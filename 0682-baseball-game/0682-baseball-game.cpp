class Solution {
public:
    int calPoints(vector<string>& str) {
        stack <int> s;
        int res=0;
        int a=0,b=0;
        for(int i=0;i<str.size();i++){
            if(str[i]=="+"){
                a=s.top();
                s.pop();
                b=s.top();
                s.push(a);
                s.push(a+b);
            }
            else if(str[i]=="D"){
                a=s.top();
                s.push(a*2);
            }
            else if(str[i]=="C"){
                s.pop();
            }
            else{
                int a=stoi(str[i]);
                s.push(a);
            }
        }

        while(!s.empty())
        {
            res=res+s.top();
            s.pop();
        }
        return res;
    }
};