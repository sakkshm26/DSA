#include <iostream>
using namespace std;

bool isPowerof2(int n){
    return (n && !(n & (n-1))); // if n is power of 2 then it has only 1 set bit
                                // n before and(&&) is for the case when n=0
}

void Subsets(int arr[], int n)
{
    for(int i=0;i<(1<<n);i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i & 1<<j)
            {
                cout<<arr[j]<<" ";
            }
        }
        cout<<endl;
    }
}

int numberOfOnes(int n){
    int count=0;
    while(n!=0)
    {
        n = n & (n-1);
        count++;
    }
    return count;
}

int main()
{
    int arr[4] = {1,2,3,4};
    Subsets(arr,4);
    //cout<<isPowerof2(0);
    //cout<<numberOfOnes(15)<<endl;
    return 0;
}