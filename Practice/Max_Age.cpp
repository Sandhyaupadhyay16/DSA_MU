#include<iostream>
using namespace std;

int main() {
    int n,max=0,count=0;
    cout<<"Enter the value of candles:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the height of candles:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==max)
        {
            count++;
        }
    }
    cout<<"The count of the tallest candles is:"<<count<<endl;

    return 0;
}