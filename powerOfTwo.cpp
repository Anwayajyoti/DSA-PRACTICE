#include<bits/stdc++.h>
#include<math.h>
using namespace std;

void powerOfTwo(int num)
{
    int ans;
    for (int i = 0; i <=30;i++)
    {
        ans = pow(2,i);
    if(ans==num)
    {
        cout << "True";
        
    }
    }
}

int main()
{
    int num;
    cout << "Enter the number" << endl;
    cin >> num;
    powerOfTwo(num);
}
