#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int abs(int a)
{
    return (a < 0) ? -a : a;
}

/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *findDisappearedNumbers(int *nums, int numsSize, int *returnSize) {
    int *result = malloc(sizeof(int) * (*returnSize));
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[abs(nums[i])-1] > 0)
        {
            nums[abs(nums[i])-1] *= -1;
        }
    }

    for (int i = 0, j = 0; i < numsSize; i++)
    {
        if (nums[i] > 0)
        {
            result[j++] = i+1;
        }
    }
    return result;
}

int main(int argc, char const *argv[])
{
    int numsSize = 8;
    int *returnSize = malloc(sizeof(int));
    *returnSize = 2;
    int nums[] = {4, 3, 2, 7, 8, 2, 3, 1};
    int *result = findDisappearedNumbers(nums, numsSize, returnSize);

    for (int i = 0; i < *returnSize; i++)
    {
        printf("%d ", result[i]);
    }
    free(returnSize);
    free(result);
    return 0;
}