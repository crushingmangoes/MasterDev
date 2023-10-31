#include <iostream>


void reverse_array(int i, int arr [], int n )
{
    if(i >= n/2) return;

    //Swap
    std::swap(arr[i], arr[n - i - 1]);
}

void recursive_print(int i, int arr [], int n)
{
    if(i >= n)
    {
        return;
    }
    std::cout<< arr[i] << " ";
    recursive_print(i + 1, arr, n);
}

int main()
{
    //Print out the contents of the array

    int arr [] = {1, 2, 3, 4, 5, 7, 8};

    int n = sizeof(arr)/sizeof(int);

    //Reverse the array
    reverse_array(0, arr, n);

    recursive_print(0, arr, n);

}