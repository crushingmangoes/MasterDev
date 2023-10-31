#include <iostream>


//Parameterized Factorial implementation
void fact(int N, int currFact)
{
    if(N == 1)
    {
        std::cout << currFact << std::endl;
        return;
    }

    fact(N - 1, currFact * N);
}


//Functional recursive factorial implementation
int factFunc(int N)
{
    if(N == 1 || N == 0)
    {
        return 1;
    }
    return N * factFunc(N - 1);
}


int main()
{
    fact(3, 1);
    std::cout << factFunc(3) << std::endl;
    return 0;
}