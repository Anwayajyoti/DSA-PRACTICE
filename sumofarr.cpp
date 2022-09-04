#include<bits/stdc++.h>
using namespace std;

void sumArray(int arr[],int size)
{
    int sum = 0;
    for (int i = 0; i < size;i++)
    {
        sum = sum + arr[i];
    }
    cout << "Sum is: " << sum;
}

int main()
{
    int arr[50], size, i;
    cout << "Enter size of the array" << endl;
    cin >> size;
    cout << "\nEnter array's element" << endl;
    for (i = 0; i < size;i++)
    {
        cin >> arr[i];
    }
    cout << "Arrays is:" << endl;
    for (i = 0; i < size;i++)
    {
        cout << arr[i] << " ";
    }
    sumArray(arr, size);
}