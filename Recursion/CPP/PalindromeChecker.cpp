#include <iostream>
#include <string>

bool checkPalindrome(int i, std::string inputString, int n)
{
    //Base case
    if(i >= n/2) return true;
    if(inputString[i] != inputString[n - i - 1]) return false;
    return checkPalindrome(i + 1, inputString, n);
}


void recursive_print(int i = 0, std::string input = "")
{
    if(i >= input.size()) return;
    std::cout << input[i] << " ";
    recursive_print(i + 1, input);
}

void iter_print(std::string input)
{

}

int main()
{
    std::string inp = "tots";

    //Test recursive print
    recursive_print(0, inp);

    //Check pali and print
    std::cout << checkPalindrome(0, inp, inp.size()) << std::endl;

    return 0;
}