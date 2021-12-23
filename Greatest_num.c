#include <stdio.h>

int main()
{
    int nums[] = {99, 0, 2, 555, 23, 955, 10003};
    int arrLen = sizeof(nums) / sizeof(int);
    for (int i = 0; i < arrLen; i++)
    {
        for (int j = 0; j < arrLen; j++)
        {

            if (nums[i] < nums[j])
            {
                int small = nums[j];
                nums[j] = nums[i];
                nums[i] = small;
            }
            else
            {
                nums[i] = nums[i];
            }
        }
    }

    // printf("----------------------------------------------");

    printf("The greatest number is %d", nums[arrLen - 1]);

    return 0;
}