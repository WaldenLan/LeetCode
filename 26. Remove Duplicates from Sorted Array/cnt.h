#ifndef CNT_H
#define CNT_H

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size = nums.size();
        if (size <= 0)
        {
            return 0;
        }
        else if (size == 1)
        {
            return 1;
        }
        else
        {
            int k = 0, flag = 0;
            int first = nums[0];
            for (int i = 0; i < size-1; i++)
            {
                if (flag == 0)
                {
                    nums[k++] = first;
                    flag = 1;
                }
                if (nums[i] != nums[i+1])
                {
                    nums[k++] = nums[i+1];
                }
            }
            return k;
        }
    }
};

#endif