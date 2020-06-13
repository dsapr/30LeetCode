#include <stdbool.h>
#include <stdio.h>

/*
Find the contiguous subarray 
within an array (containing at least one number) which has the largest sum.For example, 
given the array [−2,1,−3,4,−1,2,1,−5,4],
the contiguous subarray [4,−1,2,1] has the largest sum = 6.
*/
int maxSubArray(int *nums, int numsSize)
{
    int i, j, k;
    int max = nums[0];
  //int max = INT_MIN;
    int data, data1;

    for (i = 0; i < numsSize; i++)
    {
        for (j = i; j < numsSize; j++)
        {
            int sum = 0;
            for (k = i; k <= j; k++)
            {
                sum += nums[k];
                if (sum > max)
                {
                    max = nums[j];
                    data = i;
                    data1 = j;
                }
            }
        }
    }
    return max;
}