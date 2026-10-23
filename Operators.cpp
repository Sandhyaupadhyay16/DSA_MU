#include<iostream>
using namespace std;
int main()
{
// int a,b;
// cout<<"Enter the values of a and b"<<endl;
// cin>>a;
// cin>>b;
// cout<<"Sum is:"<<a+b<<endl;
// cout<<"Subtract is:"<<a-b<<endl;
// cout<<"Product is:"<<a*b<<endl;
// cout<<"Divide is:"<<a/b<<endl;
// cout<<"Modulus is:"<<a%b<<endl;
// return 0;
// }
char choice;
cout<<"Choose the operator from"<<endl;
cout<<"A for Addition"<<endl;
cout<<"S for Subtraction"<<endl;
cout<<"M for Multiplication"<<endl;
cout<<"D for Division"<<endl;
cout<<"R for Remainder"<<endl;
cin>>choice;
int a,b;
cout<<"Enter a and b"<<endl;
cin>>a;
cin>>b;
switch(choice){
    case 'A':
    cout<<"Sum of the numbers is"<<a+b<<endl;
    break;
    case 'S':
    cout<<"Subtraction of the numbers is"<<a-b<<endl;
    break;
    case 'M':
    cout<<"Multiplication of the numbers is"<<a*b<<endl;
    break;
    case 'D':
    cout<<"Division of the numbers is"<<a/b<<endl;
    break;
    case 'R':
    cout<<"Remainder of the numbers is"<<a%b<<endl;
    break;
    default:
    cout<<"Invalid choice";
}
return 0;
}