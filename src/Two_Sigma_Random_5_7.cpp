/******************************************************************************

Using a function rand5() that returns an integer from 1 to 5 (inclusive) with uniform probability, 
implement a function rand7() that returns an integer from 1 to 7 (inclusive)

*******************************************************************************/

#include <iostream>
#include <stdlib.h>
#include <random>

int rand5();
int rand7();

int main()
{

    std::cout << "Random number 1 - 5: " << rand5() << ". Random number 1 - 7: " << rand7();

    return 0;
}

int rand5()
{
    std::random_device dev5;
    std::mt19937 rng(dev5());
    std::uniform_int_distribution<std::mt19937::result_type> dist5(1, 5); // distribution in range [1, 6]
    return dist5(rng);
}

int rand7()
{
    std::random_device dev7;
    std::mt19937 rng(dev7());
    std::uniform_int_distribution<std::mt19937::result_type> dist7(1, 7); // distribution in range [1, 7]
    return dist7(rng);
}
