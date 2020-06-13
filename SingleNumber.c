#include <stdio.h>

int singleNumber(int *nums, int numsSize)
{
    int i, j;
    for (i = 0; i < numsSize; i++)
    {
        int count = 0;
        for (j = 0; j < numsSize; j++)
        {
            if (nums[i] == nums[j])
                count++;
        }
        if (count == 1)
            return nums[i];
    }
    return 0;
}