#include<bits/stdc++.h>
using namespace std;

void reverseInteger(int num)
{
    int digit;
    int ans = 0;
    while(num!=0)
    {
    digit = num % 10;
    ans = (ans * 10) + digit;
    num = num / 10;
    }
    if((ans>INT_MAX) || (ans<INT_MIN))
    {
        cout << 0;
    }
    else
    {
    cout << "Reverse Integer is: "<<ans;
    }
}

    int main()
{
    int num;
    cout << "Enter the number: " << endl;
    cin >> num;
    reverseInteger(num);
}
