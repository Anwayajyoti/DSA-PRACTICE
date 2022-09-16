#include<bits/stdc++.h>
using namespace std;

void findingElementArr(int arr[3][3], int target)
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j <3;j++)
        {   
            if(arr[i][j]==target)
                cout << "Number found at " << i <<"th row and "<<j<<"th coloumn";
        }
        break;
    }
    if(i==3 & j==3)
    {
        cout << "Number not found" << endl;
    }
}

int main()
{
    int arr[3][3],target;
    cout << "Enter the values for the MATRIX:" << endl;
    for (int i = 0; i <3;i++)
    {
        for (int j = 0; j <3;j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Matrix is: " << endl;
    for (int i = 0; i <3;i++)
    {
        for (int j = 0; j <3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout << endl;
    }
    cout << "Enter the value to be searched" << endl;
    cin >> target;
    findingElementArr(arr, target);
}