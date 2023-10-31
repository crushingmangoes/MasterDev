#include <iostream>
#include <vector>
//Generates all possible subsequences from an array


void printSubsequence(int ind, std::vector<int> &temp, std::vector<int> inp, int n)
{
    if(ind >= n)
    {
        for(auto i : temp)
        {
            std::cout << i << " ";
        }
        std::cout << std::endl;
        return;
    }

    //Choose to not select
    printSubsequence(ind + 1, temp, inp, n);

    //Choose to select
    temp.emplace_back(inp[ind]);
    
    printSubsequence(ind + 1, temp, inp, n);

    temp.pop_back();

}

void permuations(int ind, std::vector<int> &temp, int arr[], int n)
{
    if(ind >= n)
    {
        for(auto it: temp)
        {
            std::cout << it << " ";
        }
        std::cout << std::endl;
    }
    
}

int main()
{
    std::vector<int> temp;
    std::vector<int> inp = {4, 1, 2};
    int n = inp.size();
    printSubsequence(0, temp, inp, n);
}