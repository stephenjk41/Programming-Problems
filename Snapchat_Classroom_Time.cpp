/******************************************************************************

Given an array of time intervals (start, end) for classroom lectures (possibly overlapping), 
find the minimum number of rooms required.

For example, given [(30, 75), (0, 50), (60, 150)], you should return 2.

*******************************************************************************/

#include <iostream>
#include <vector>
#include <algorithm>

int compareTimes(std::vector<std::vector<int>> times);

int main()
{
    std::vector<std::vector<int>> times = {{30, 75}, {0, 50}, {60, 150}}; //input time

    std::cout << compareTimes(times) << std::endl;
    return 0;
}

int compareTimes(std::vector<std::vector<int>> times)
{
    int roomCount = 0; //classroom count
    for (int i = 0; i < times.size(); i++)
    {
        int checkedTime = times[i][0];

        auto it = std::find_if(times.begin(), times.end(),
                               [checkedTime](std::vector<int> &classTimes) { return (checkedTime > classTimes[0] && checkedTime < classTimes[1]); }); //check if class times have a conflict

        if (it != times.end())
        {
            roomCount++;
        }
    }
    return roomCount;
}
