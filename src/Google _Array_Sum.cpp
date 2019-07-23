/******************************************************************************

Given a list of numbers and a number k, return whether any two numbers from the list add up to k.
For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17.
Bonus: Can you do this in one pass?

*******************************************************************************/

#include <iostream>
#include <array>
#include <algorithm>
#include <vector>

using namespace std;
int main()
{
    //input array
    int a[] = {10, 15, 3, 7};
    //sort array
    int n = sizeof(a) / sizeof(a[0]);
    sort(a, a + n);
    //set target
    int target = 17;
    //make bool to indicate if a match is found
    bool match = false;
    //create a vector to store compliments
    std::vector<int> compliments;
    //loop through array
    for (int i = 0; i < sizeof(a); i++)
    {
        //insert compliment into array
        compliments.emplace_back(target - a[i]);
        //search if the current index value of a[] is in the compliment vector
        auto x = std::find(compliments.begin(), compliments.end(), a[i]);
        //edge case to test if the iteration value is its own compliment
        if (x == compliments.end() && *x == *(x - 1))
        {
            match == true;
        }
        //found a match
        else if (*x == a[i])
        {
            match = true;
        }
    }
    //output
    if (match == true)
    {
        std::cout << "Found a match " << std::endl;
    }
    else
    {
        std::cout << "No matches" << std::endl;
    }

    return 0;
}
