int singleNumber(int *nums, int numsSize)
{
    int x = 0, y;
    for (y = 0; y < numsSize; ++y)
    {
        x ^= nums[y];
    }
    return x;
}