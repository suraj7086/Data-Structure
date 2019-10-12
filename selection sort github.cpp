#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the length of the array"<<endl;
    int length;
    cin>>length;
    cout<<"Enter the element of the array"<<endl;
    int arr[length];
    for(int i=0;i<length;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<length;i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
    cout<<"Sorted array is :"<<endl;
    for(int i=0;i<length;i++)
    {    int p=i;
        for(int j=i+1;j<length;j++)
        {
           if(arr[p]>arr[j])
           {    p = j;

           }
           int temp = arr[p];
                arr[p]=arr[i];
                arr[i]=temp;

        }
    }
    for(int i=0;i<length;i++)
    {
        cout<<arr[i]<<"\t";
    }
}
