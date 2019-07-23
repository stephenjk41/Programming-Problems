/******************************************************************************

Given an array of integers, return a new array such that each element at index i 
of the new array is the product of all the numbers in the original array except the one at i.

For example, if our input was [1, 2, 3, 4, 5], the expected output would be [120, 60, 40, 30, 24]. 
If our input was [3, 2, 1], the expected output would be [2, 3, 6].

*******************************************************************************/

#include <iostream>
#include <array>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> a = {1, 2, 3, 4, 5};

    std::vector<int> sum;
    for (int i = 0; i < a.size(); i++)
    {
        int mult = 1;
        for (int j = 0; j < a.size(); j++)
        {
            if (j != i)
            {
                mult = mult * a[j];
            }
        }
        sum.emplace_back(mult);
    }
    for (int i = 0; i < sum.size(); i++)
    {
        std::cout << sum.at(i) << std::endl;
    }
    return 0;
}