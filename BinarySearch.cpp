#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int element)
{
    int low,mid,high;
    low=0;
    high=size-1;
    //Keep searching until low <= high
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==element)
        {
            return mid;
        }

        if(arr[mid]<element)
        {
            low=mid+1;
        }

        else
        {
            high=mid-1;
        }
    }
    return -1;
}

int main()
{
    // Binary search only capable for sorted array
    int arr[]={3,5,8,32,65,98,195,274,383,505,617,704,942};
    int size=sizeof(arr)/sizeof(int);
    int element=195; 
    int searchindex=binarySearch(arr,size,element);
    cout<<"The element "<<element<<" was found at index no. "<<searchindex<<endl;
    return 0;
}
