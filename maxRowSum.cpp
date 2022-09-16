#include<bits/stdc++.h>
using namespace std;

void maxRowSum(int arr[3][3])
{
    int max = INT_MIN;
    int row = -1;
    for (int i = 0; i < 3;i++)
    {
        int sum = 0;
        for (int j = 0; j < 3;j++)
        {
            sum += arr[i][j];
        }
        if(sum>max)
        {
            max = sum;
            row = i+1;
        }
    }
    cout << "Thus maximum sum is: " << max << " and it is at row " << row;
}

int main()
{
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    cout << "MARIX IS: " << endl;
    for (int i = 0; i < 3;i++)
    {
        for (int j = 0; j < 3;j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    maxRowSum(arr);
}
