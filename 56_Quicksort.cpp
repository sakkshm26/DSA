#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[low],temp;
    int i = low+1, j = high;
    do
    {
        while(arr[i]<=pivot)
        {
            i++;
        }
        while(arr[j]>pivot)
        {
            j--;
        }
        if(i<j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }while(i<j);

    temp = arr[j];
    arr[j] = arr[low];
    arr[low] = temp;
    return j;
}

void quickSort(int arr[], int low, int high)
{
    int partitionindex;
    if(low<high)
    {
    partitionindex = partition(arr, low, high);
    quickSort(arr,low,partitionindex-1);
    quickSort(arr,partitionindex+1,high);
    }
}

int main()
{
    int arr[] = {3, 5, 2, 13, 12, 3, 2, 13, 45};
    int n = sizeof(arr)/sizeof(n);
    quickSort(arr,0,n-1);
    printArray(arr,n);
    return 0;
}