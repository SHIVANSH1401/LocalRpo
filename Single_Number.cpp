/*this approach uses the XOR operator to find the unique element in the array.
 As we go through the array, every number that appears twice cancels itself out when XORed with itself.
  In the end, only the number that appears once remains, which is returned as the answer.*/

  class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;

        for(int i = 0; i < nums.size(); i++) {
            ans = ans ^ nums[i];
        }

        return ans;
    }
};