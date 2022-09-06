#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size;i++)
    {
        cout << arr[i] << " ";
    }
    int ans = 0;
    for (int i = 0; i < size;i++)
    {
        ans = ans ^ arr[i];
    }
    for (int i = 1; i < size;i++)
    {
        ans = ans ^i;
    }
    cout << "\nDuplicate is:"<<ans;
}