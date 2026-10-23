#include<iostream>
using namespace std;
int main()
{
    int arr1[]={1,2,3,4,5};
    int arr2[]={1,2,3,4,5};
    if(arr1.size()!=arr2.size())
    {
        return false;
    }
    for(int i=0;i<arr1.size();i++)
    {
        if(arr1[i]!=arr2[i])
        {
            return false;
        }
    }
    return true;
    return 0;
}