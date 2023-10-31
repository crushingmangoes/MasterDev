#include <iostream>
#include <vector>

void printSubsequence(int ind, std::vector<int> &temp, int arr[], int n, int currSum, int sum)
{
    if(ind >= n)
    {
        if(currSum == sum)
        {
            for(auto i: temp) std::cout << i << " ";
            std::cout << std::endl;
        }
        return;
    }

    //Choose to select the element
    temp.emplace_back(arr[ind]);
    currSum += arr[ind];
    printSubsequence(ind+1, temp, arr, n, currSum, sum);

    //Choose to not select
    //Remove the previously selected elements
    temp.pop_back();
    currSum -= arr[ind];
    printSubsequence(ind+1, temp, arr, n, currSum, sum);
}

//Modified call for just printing the first occurence
bool printOneSubsequence(int ind, std::vector<int> &temp, int arr[], int n , int target, int sum){
    if(ind >= n)
    {
        if(sum == target)
        {
            //Print the subsequence
            for(auto i: temp) std::cout << i << " ";
            std::cout << std::endl;
            return true;
        }
        return false;
    }

    //Add the elment
    temp.emplace_back(arr[ind]);
    sum += arr[ind];

    if(printOneSubsequence(ind+1, temp, arr, n, target, sum)) return true;

    //Remove the element
    temp.pop_back();
    sum -= arr[ind];

    if(printOneSubsequence(ind+1, temp, arr, n, target, sum)) return true;

    return false;
}

//Count pattern for functional programming
int printCountSubsequence(int ind, int arr[], int n , int target, int sum){
    if(ind >= n)
    {
        if(sum == target) return 1;
        return 0;
    }

    return printCountSubsequence(ind+1, arr, n, target, sum + arr[ind]) + printCountSubsequence(ind+1, arr, n, target, sum);
}


int main()
{
    int arr[] = {1, 3, 1, 2};
    std::vector<int> temp;
    int n = sizeof(arr)/sizeof(int);
    printOneSubsequence(0, temp , arr, n, 2, 0);

    std::cout << printCountSubsequence(0, arr, n, 2, 0) << std::endl;
}