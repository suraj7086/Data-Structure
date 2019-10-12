#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the size of the array"<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter the element of the array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
    for(int i=0;i<size;i++)
    {   int key = arr[i];
        int j=i-1;
        while(arr[j]>key && j>=0)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1] = key;
    }
    cout<<"Sorted array is :"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<"\t";
    }

}
