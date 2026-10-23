#include<iostream>
using namespace std;
int main()
{
    char ch='s';
    ch=char(ch-('a'-'A'));
    cout<<"Uppercase:"<<ch;
    return 0;
}