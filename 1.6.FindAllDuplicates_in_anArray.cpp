class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>res;
        for (int i=0; i<nums.size(); ++i) {
            int index = abs(nums[i])-1;
            if (nums[index] < 0)
                res.push_back(abs(nums[i]));
            nums[index] = -nums[index];
        }
        return res;
    }
};

/*
// tc:O(n), sc:O(n)
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int>freq;
        vector<int>res;
        for(auto x:nums) {
            freq[x]++;
            if(freq[x] == 2) {
                res.push_back(x);
            }
        }
        return res;
    }
};
*/