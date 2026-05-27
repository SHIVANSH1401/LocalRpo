class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int j = 0;//inotializing j to 0

        // Move non-zero elements forward
        for(int i = 0; i < nums.size(); i++)//i checks every element one by one
         {
            if(nums[i] != 0)//if element is not zero, move it to the front.
             {
                swap(nums[i], nums[j]);//The non-zero element comes to position j.
                j++;
            }
        }
    }
};