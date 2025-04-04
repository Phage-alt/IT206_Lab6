class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> num_set(nums.begin(), nums.end());
        int maxlen = 0;

        for (int num : num_set) {
            if (num_set.find(num - 1) == num_set.end()) {
                int current_num = num;
                int current_length = 1;

                while (num_set.find(current_num + 1) != num_set.end()) {
                    current_num++;
                    current_length++;
                }

                maxlen = max(maxlen, current_length);
            }
        }

        return maxlen;
    }
};
