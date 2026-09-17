class Solution {
public:
    string multiply(string num1, string num2) {
        int n = num1.size();
        int m = num2.size();
        vector<int> ans(n+m,0);
        for(int i=n-1;i>=0;i--){
            for(int j=m-1;j>=0;j--){
                int digit1 = num1[i] - '0';
                int digit2 = num2[j] - '0';
                int pos = i+j+1;
                int temp = digit1*digit2;
                ans[pos] += temp;
                ans[pos-1] += ans[pos]/10;
                ans[pos] = ans[pos]%10;
            }
        }
        string result = "";
        bool firstvalid = false;
        for(int x:ans){
            if(x==0 && !firstvalid) continue;
            if(x!=0) firstvalid = true;
            result += x + '0';
        }
        if(result.empty()) return "0";
        return result;
        
    }
};