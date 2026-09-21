class Solution {
public:
    void recur(vector<vector<int>> &temp, vector<bool>& filled, vector<int>&nums, vector<int> &curr){
        if(curr.size()==nums.size()){
            temp.push_back(curr);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(!filled[i]){
                curr.push_back(nums[i]);
                filled[i]=true;
                recur(temp,filled,nums,curr);
                filled[i]=false;        
                curr.pop_back();                
            }
        }

    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> temp;
        vector<bool> filled(nums.size(),false);
        vector<int> curr;
        recur(temp, filled, nums, curr);
        return temp;
    }
};