class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        int n = nums.size();

        sort(begin(nums),end(nums));

        int i = 0; 
        int j =1;

        while(j < n){
            swap(nums[i],nums[j]);
            i = i +2;
            j = j +2;
        }
        return nums;
    }
};