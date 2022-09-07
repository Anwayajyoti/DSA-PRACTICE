#include<bits/stdc++.h>
using namespace std;

int lengthString(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0';i++)
    {
        count++;
    }
    return count;
}

void reverseString(char name[],int length)
{
    for (int i = 0,j=length; i <j;i++,j--)
    {
        int temp = name[i];
        name[i] = name[j];
        name[j] = temp;
    }
    cout << "Reversed string is: ";
    for (int i = 0; i <= length;i++)
    {
        cout << name[i];
    }
}


int main()
{
    char name[50];
    int length;
    cout << "Enter your name" << endl;
    cin >> name;
    cout << "Hello " << name <<endl;
    length = lengthString(name);
    reverseString(name, length);
}