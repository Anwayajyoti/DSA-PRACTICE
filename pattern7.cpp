#include<bits/stdc++.h>
using namespace std;
int main()
{
    for (int i = 0; i <= 4;i++)
    {
        int temp =i;
        for (int j = 1; j <= i;j++)
        {
            cout << temp;
            temp++;
        }
        cout << endl;
    }
}