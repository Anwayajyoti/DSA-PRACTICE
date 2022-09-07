#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(char name[],int length)
{
    int i = 0;
    int j = length-1;
    while(i<=j)
    {
        if(name[i]!=name[j])
            return 0;
        else
            i++;
            j--;
    }
    return 1;
}

int lengthString(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0';i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char name[50];
    int length;
    cout << "Enter your name" << endl;
    cin >> name;
    length = lengthString(name);
    cout<<"checking for palindrome: "<<checkPalindrome(name, length);
}