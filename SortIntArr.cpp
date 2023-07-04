#include <iostream>
#include <algorithm>
 
int main()
{
    int arr[] = { 6, 4, 2, 8, 0 };
    int n = sizeof(arr)/sizeof(arr[0]);
 
    std::sort(arr, arr + n);
 
    for (int const &i: arr) {
        std::cout << i << ' ';
    }
 
    return 0;
}
