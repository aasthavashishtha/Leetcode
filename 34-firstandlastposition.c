int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
    int* ans = (int*)malloc(2 * sizeof(int));
    ans[0] = -1;
    ans[1] = -1;

    int low = 0, high = numsSize - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            ans[0] = mid;
            high = mid - 1; 
        } else if (nums[mid] > target) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    low = 0;
    high = numsSize - 1;

    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            ans[1] = mid;
            low = mid + 1; 
        } else if (nums[mid] > target) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    *returnSize = 2;
    return ans;
}