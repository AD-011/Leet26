class Solution {
public:
    bool canJump(vector<int>& nums) {
        int finalPos = nums.size()-1;

        // starts with 2nd last index

        for(int i = nums.size()-2; i>= 0; i--){

            if(i+nums[i] >= finalPos){
            finalPos = i;
         }
      }
      // if we reach the first index, 
      // then we can make the jump possible 
      
      return finalPos == 0;
        
    }
};