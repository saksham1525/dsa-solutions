class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int l = s1.size();
        int n = s2.size();

        for(int i=0;i<=n-l;i++){
            string sub = s2.substr(i,l);
            string a = s1;
            string b = sub;
            sort(a.begin(),a.end());
            sort(b.begin(),b.end());

            if(a==b){
                return true;
            }
        }
        return false;
    }
};