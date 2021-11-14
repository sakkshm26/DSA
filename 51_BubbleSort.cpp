#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

void bubbleSort(int arr[], int n)
{
    int temp;
    for(int i=0;i<n-1;i++)
    {
        int issorted = 1;
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                issorted = 0;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        if(issorted)
        {
        return;
        }
    }
}

int main()
{
    int arr[] = {1, 2, 5, 6, 12, 54, 625, 7, 23, 9, 987};
    int n = sizeof(arr)/sizeof(n);
    bubbleSort(arr,n);
    printArray(arr,n);
    return 0;
}