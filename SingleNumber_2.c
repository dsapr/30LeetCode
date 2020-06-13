#include <stdio.h>

int singleNumber(int *nums, int numsSize)
{
    /*
        0 ^ 0 => 0  1 ^ 0 => 1  0 ^ 1 => 1  1 ^ 1 => 0; bitwise: XOR

        A^0=A
        A^A=0
        A^B=B^A
    */
    int i;
    int temp = nums[0];
    for (i = 1; i < numsSize; i++)
    {
        temp ^= nums[i];
    }
    return temp;
}