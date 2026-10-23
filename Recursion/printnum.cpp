#include <iostream>
using namespace std;
void printNum(int n)
{
    if(n==10) return; //base case
    cout<<n<<endl;
    printNum(n+1);
}
int main()
{
    printNum(1);
}