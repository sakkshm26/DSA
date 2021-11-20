#include <bits/stdc++.h>
using namespace std;

int unique(int arr[], int n)
{
    int xorsum=0;
    for(int i=0;i<n;i++)
    {
        xorsum = arr[i]^xorsum;
    }
    return xorsum;
}

int twounique(int arr[], int n)
{
    int xorsum=0;
    for(int i=0;i<n;i++)
    {
        xorsum = xorsum^arr[i];
    }
    
}

int main()
{
    int arr[7] = {2,4,6,3,4,6,2};
    int n = sizeof(arr)/sizeof(int);
    cout<<unique(arr,n);
    return 0;
}
