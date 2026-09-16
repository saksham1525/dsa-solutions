class Solution {
public:
    vector<string> recur(vector<string> &vec, int n, int i){
        if(i == 2*n) return vec;
        vector<string> ans;
        for (string s:vec){
            int open = 0;
            int close = 0;
            for(char c:s){
                if(c=='(') open++;
                else close++;
            }
            if(open<n && open<=close){
                s.push_back('(');
                ans.push_back(s);
            }
            if(open>close){
                if(open<n){
                    s.push_back('(');
                    ans.push_back(s);
                    s.pop_back();
                }
                if(close<n){
                    s.push_back(')');
                    ans.push_back(s);
                    s.pop_back();
                }
            }
        }
        return recur(ans,n,i+1);

    }
    vector<string> generateParenthesis(int n) {
        if(n==0) return {};
        vector<string> ans = {"("};
        return recur(ans,n,1);
    }
};


/*
if recursion? n->n+1
[()(), (())] -> [((())), (()()), ()()(), (())(), ()(())]
valid? at each point parsing count of '(' > count of ')' 
but in recursion remove duplicate ones!
so a diff recursion? recur(vector<string>, int n, int i) 
-> n is constant but we parse i from 0 to 2n? and create the combinations?
*/