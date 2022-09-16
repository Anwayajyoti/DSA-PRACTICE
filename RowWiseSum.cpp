#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    cout << "The Matrix: " << endl;
    for (int i = 0; i < 3;i++)
    {
        for (int j = 0; j < 3;j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Sum is: " << endl;
    for (int i = 0; i < 3;i++)
    {
        int sum = 0;
        for (int j = 0; j<3; j++)
        {
            sum = sum + arr[i][j];
        }
        cout << endl;
        cout << sum;
    }

}