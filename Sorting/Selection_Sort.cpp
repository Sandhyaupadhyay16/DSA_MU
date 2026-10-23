#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array one by one:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    };
    int temp=0;
    for(int i=0;i<n;i++)
    {
        int min=arr[i];
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<min)
            {
                min=arr[j];
                temp=arr[i];
                arr[i]=min;
                arr[j]=temp;
            }
        }

    }
    cout<<"Sorted array is: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
