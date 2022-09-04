#include<bits/stdc++.h>
using namespace std;

void arrayMinMax(int arr[],int size)
{
    int min = arr[0];
    int max = arr[0];
    for (int i = 0; i < size;i++)
    {
        if(min>arr[i])
            min = arr[i];
        else if(max<arr[i])
            max = arr[i];
    }
    cout << "\nMinimum value is: " << min << " and Maximum value is: " << max;
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
    arrayMinMax(arr, size);
}