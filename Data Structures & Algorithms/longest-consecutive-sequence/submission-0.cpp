class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set <int> set (nums.begin(), nums.end());

        int longest = 0;

        for(int i : nums){
            if(set.find(i-1) == set.end()){
                int cur = i;
                int len = 1;

                while(set.find(cur+1) != set.end()){
                    cur++;
                    len++;
                }

                longest = max(longest,len);
            }
        }
        return longest;
    }
};
