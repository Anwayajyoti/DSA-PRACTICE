#include<bits/stdc++.h>
using namespace std;

int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i]!='\0';i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char name[50];
    cout << "Enter your name" << endl;
    cin >> name;
    cout << "Name is: " << name << endl;
    cout << "Length is: " << getLength(name);
}