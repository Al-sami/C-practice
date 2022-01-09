#include <stddef.h>
#include <stdio.h>

int find_missing(const int *nums, size_t n)
{
    int missTerm, lSum = 0, aSum;

    aSum = ((n + 1) * (nums[0] + nums[n - 1]));
    aSum = aSum / 2;
    printf("asum:%d\n", aSum);

    for (size_t i = 0; i < n; i++)
    {
        lSum = lSum + nums[i];
    }

    missTerm = ((int)aSum - lSum);
    if (missTerm == 0)
    {
        missTerm = nums[n - 1];
    }

    return missTerm;
}

int main()
{
    int nums[] = {-11, -9, -7, -3, -1};
    int size = sizeof(nums) / sizeof(int);
    int findM = find_missing(nums, size);
    printf("%d", findM);
}