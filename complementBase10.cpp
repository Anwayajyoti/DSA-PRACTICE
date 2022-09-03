#include<bits/stdc++.h>
using namespace std;

void complementBase10(int num)
{
    int m = num;
    int mask = 0;
    while(m!=0)
    {
        mask = (mask << 1) | 1;
        m = m >> 1;
    }
    int ans = (~num) & mask;
    cout<< ans;
}

int main()
{
    int num;
    cout << "Enter the number" << endl;
    cin >> num;
    complementBase10(num);
}
