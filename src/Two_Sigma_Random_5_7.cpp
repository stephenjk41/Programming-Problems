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
    //random_device uniformly-distributed integer random number generator that produces non-deterministic
    //random numbers.
    std::random_device dev5;
    //A Mersenne Twister pseudo-random generator of 32-bit numbers with a state size of 19937 bits.
    std::mt19937 rng(dev5());
    //This distribution produces random integers in a range [a,b] where each possible value has an equal likelihood of being produced.
    //This is the distribution function that appears on many trivial random processes (like the result of rolling a die).
    std::uniform_int_distribution<std::mt19937::result_type> dist5(1, 5); // distribution in range [1, 6]
    return dist5(rng);
}

int rand7()
{
    //random_device uniformly-distributed integer random number generator that produces non-deterministic
    //random numbers.
    std::random_device dev7;
    //A Mersenne Twister pseudo-random generator of 32-bit numbers with a state size of 19937 bits.
    std::mt19937 rng(dev7());
    //This distribution produces random integers in a range [a,b] where each possible value has an equal likelihood of being produced.
    //This is the distribution function that appears on many trivial random processes (like the result of rolling a die).
    std::uniform_int_distribution<std::mt19937::result_type> dist7(1, 7); // distribution in range [1, 7]
    return dist7(rng);
}
