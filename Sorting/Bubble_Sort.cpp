#include<iostream>
using namespace std;
void Bubble_Sort(int arr[],int n)
{
    int temp=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"Sorted array is: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
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
    Bubble_Sort(arr, n);
       return 0;
}
