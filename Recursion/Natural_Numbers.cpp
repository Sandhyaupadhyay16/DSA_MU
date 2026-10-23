#include <iostream>
using namespace std;
void SumNatural(int n, int sum)
{
    if(n==0) //base case
    {
        cout<<"Sum of natural numbers is: "<<sum<<endl;
        return;
    }
    sum+=n;
    SumNatural(n-1, sum); ; 
}
int main()
{
    int n;
    cout<<"Enter a natural number: ";
    cin>>n;
    SumNatural(n,0);
}