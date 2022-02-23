int findKthLargest(int* nums, int numsSize, int k){
    for(int i=0;i<numsSize;i++){
        for(int j=i+1;j<numsSize;j++){
            if(nums[i]<nums[j]){
                nums[i]^=nums[j];
                nums[j]^=nums[i];
                nums[i]^=nums[j];
            }
        }
    }
    return nums[k-1];
}
