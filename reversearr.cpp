#include<bits/stdc++.h>
using namespace std;

void reverseArray(int arr[],int size)
{
    int i, j;
    for (i = 0,j=size-1; i < j;i++,j--)
    {
       
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        
    }
    cout << "Reversed array is: " << endl;
    for (i = 0; i < size;i++)
    {
        cout  << arr[i] << " ";
    }
}

int main()
{
    int arr[50];
    int size,i;
    cout << "Enter size of array" << endl;
    cin >> size;
    cout << "Enter elements of the array: " << endl;
    for (i = 0; i < size;i++)
    {
        cin >> arr[i];
    }
    cout << "Array is: " << endl;
    for (i = 0; i < size;i++)
    {
        cout << arr[i] << " ";
    }
    reverseArray(arr, size);
}