int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* arr=malloc(sizeof(int)*2);
    int i=0;
    for(i=0;i<numsSize;i++)
    {
        int j=0;
        for(j=i+1;j<numsSize;j++)
        {
            if(nums[i]+nums[j]==target)
            {
                arr[0]=i;
                arr[1]=j;
                *returnSize=2;
                return arr;
            }
        }
    }
    *returnSize=0;
    return returnSize;
}
