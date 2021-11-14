#include<iostream>
using namespace std;

int linearSearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==element)
        {
        return i;
        }
    }
    return -1;
}

int main()
{
    int arr[]={5,76,4,73,25,3,55,3,6,89};
    int size=sizeof(arr)/sizeof(int);
    int element=73;
    int searchindex = linearSearch(arr, size, element);
    cout<<"The element "<<element<<" was found at index no. "<<searchindex<<endl;
    return 0;
}
