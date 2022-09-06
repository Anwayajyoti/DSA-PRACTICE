#include<bits/stdc++.h>
using namespace std;

void uniqueInArr(int arr[],int size)
{
    int ans = 0;
    for (int i = 0; i < size;i++)
    {
        ans = ans ^ arr[i];
    }
    cout << "\nUnique number is: " << ans;
}

int main()
{
    int arr[] = {2, 3, 1, 6, 3, 6, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Array is: " << endl;
    for (int i = 0; i < size;i++)
    {
        cout << arr[i] << " ";
    }
        uniqueInArr(arr, size);
}