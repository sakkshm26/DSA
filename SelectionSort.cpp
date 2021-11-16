#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void insertionSort(int arr[], int n)
{
    int indexOfMin,temp;
    for(int i=0;i<n-1;i++)
    {
        indexOfMin=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j] < arr[indexOfMin])
            {
                indexOfMin = j;
            }
        }
        temp = arr[indexOfMin];
        arr[indexOfMin] = arr[i];
        arr[i] = temp;
    }
}

int main()
{
    int arr[] = {3, 5, 2, 13, 12};
    int n = sizeof(arr)/sizeof(n);
    insertionSort(arr,n);
    printArray(arr,n);
    return 0;
}
