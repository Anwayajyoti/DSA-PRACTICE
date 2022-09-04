#include<bits/stdc++.h>
using namespace std;

void linearSearch(int arr[],int size,int num)
{
    int i = 0;
    for (i = 0; i < size;i++)
    {
        if(num==arr[i])
        {
            cout << "Number found in index " << i;
            break;
        }
    }
        if(i==size)
        {
            cout << "Not found";
        }
}

int main()
{
    int arr[50], size, i,num;
    cout << "Enter size of array" << endl;
    cin >> size;
    cout << "Enter element for the array" << endl;
    for (i = 0; i < size;i++)
    {
        cin >> arr[i];
    }
    cout << "Arrays is:" << endl;
    {
        for (i = 0; i < size;i++)
        {
            cout << arr[i] << " ";
        }
    }
    cout << "\nEnter number to search" << endl;
    cin >> num;
    linearSearch(arr, size, num);
}