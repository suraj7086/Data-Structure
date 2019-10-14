
#include<iostream>
using namespace std;
int main()
{   cout<<"This is the implementation of bubble sort"<<endl;
    cout<<"Enter the size of the array"<<endl;
    int size;
    cin>>size;
    cout<<"Enter the element of the array"<<endl;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"Entered array is :"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
    cout<<"Sorted list is : "<<endl;
    for(int i=0;i<=size-1;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<"\t";
    }
}
