class Solution {
public:
    int recur(vector<int>& stones){
        if(stones.empty()) return 0;
        if(stones.size()==1) return stones[0];
        sort(stones.begin(),stones.end());
        int high = stones.back();
        stones.pop_back();
        int high2 = stones.back();
        stones.pop_back();
        if(high!=high2) stones.push_back(high-high2);
        return recur(stones);
    }
    int lastStoneWeight(vector<int>& stones) {
        return recur(stones);
    }
};