class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int size=nums.size(),i,single=0;
        for (i=0;i<size;i++){
            single^=nums[i];
        }
        return single;
    }
};
