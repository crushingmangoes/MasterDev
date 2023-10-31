#include <iostream>

//Parameterized recursion for sum of N numbers
void sum(int N, int currSum)
{
    if(N < 1)
    {
        std::cout << currSum << std::endl;
        return;
    }
    sum(N - 1, currSum + N);
}

//Functional recursion for the sum of N numbers
int functionalSum(int N)
{
    //Base case
    if(N == 0)
    {
        return 0;
    }

    return N + functionalSum(N - 1);

}

int main ()
{
    sum(4, 0);
    std::cout << functionalSum(4) <<  std::endl;
}