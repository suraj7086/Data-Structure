#include<iostream>
using namespace std;
int main()
{   /*declare an array of size 10*/
    int arr[10];
    cout<<"Enter the elemens "<<endl;
    /*taking input from user*/
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
    }
   /*printing number entered by the user*/
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
    cout<<"Enter the value to search"<<endl;
    int num;
    cin>>num;
    int f=0;
    for(int i=0;i<10;i++)
    {
        int beg=0,last=9,mid;
        mid=(int)(beg+last)/2;
        if(num==arr[mid])
        {
            f=mid+1;
            cout<<"number is found at position "<<f<<endl;
            break;
        }
        else if(num<arr[mid])
        {
            last=mid-1;
        }
        else
        {
            beg=mid+1;
        }


    }
    /*we have initialised the f=0 in upper part here f==0 "is because if f will not change means element is not found*/
    if(f==0)
    {
        cout<<"element is not found"<<endl;
    }
    return 0;
}
