int searchInsert(int *nums, int numsSize, int target)
{
    int x = 0, y = numsSize - 1;
    while (x <= y)
    {
        int z = (x + y) / 2;
        if (nums[z] == target)
        {
            return z;
        }
        else if (nums[z] < target)
        {
            x = z + 1;
        }
        else
        {
            y = z - 1;
        }
    }
    return x;
}