#include<bits/stdc++.h>
using namespace std;

void swapAlternateArray(int arr[],int size)
{
    int i;
    for (i = 0; i<size;i+2)
    {
        if(i+1 < size)
          {
              int temp = arr[i];
              arr[i] = arr[i + 1];
              arr[i + 1] = temp;
          } 
    }
    cout << "New array is: " << endl;
    for (int i = 0; i < size;i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[50], size, i;
    cout << "Enter the size of array" << endl;
    cin >> size;
    cout << "Enter the elements of array: " << endl;
    for(i=0;i<size;i++)
    {
    cin >> arr[i];
    }
    cout << "Array is: " << endl;
    for (int i = 0; i < size;i++)
    {
        cout << arr[i] << " ";
    }
    swapAlternateArray(arr, size);
}