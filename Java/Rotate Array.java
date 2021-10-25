class Solution {
    public void rotate(int[] nums, int k) {
        k %= nums.length;
        if (k == 0) return; // Rotated array will be same as original array
        reverse(0, nums.length-1, nums);
        reverse(0, k-1, nums);
        reverse(k, nums.length-1, nums);
    }
    
    private void reverse(int start, int end, int[] nums){        
        while(start < end){
            int temp = nums[start];
            nums[start++] = nums[end];
            nums[end--] = temp;
        }
    }
}
