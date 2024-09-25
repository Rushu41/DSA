#include<iostream>
using namespace std;
void print(int *arr,int sz)
{
    for(int i=0 ;i<sz ;i++)
    {
        cout << arr[i] <<" ";
    }
}
void mergearray(int *arr,int mid, int l, int r)
{
    int m = mid-l+1;
    int n = r - mid;
    int a[m],b[n];
    for(int i=0; i<m; i++)
    {
        a[i] = arr[l+i];
    }
    for(int j=0; j<n; j++)
    {
        b[j] = arr[mid+1+j];
    }
    int i=0, j =0,k = l;
    while( i<m && j<n)
    {
        if(a[i] <b[j])
        {
            arr[k] = a[i];
            i++;
            k++;
        }
        else{
            arr[k] = b[j];
            j++;
            k++;
        }
    }
    while(i<m)
    {
        arr[k] = a[i];
        i++;
        k++;
    }
    while(j<n)
    {
        arr[k] =b[j];
        j++;
        k++;
    }
}
void mergesort(int *arr,int l,int r)
{
   if(l<r)
   {
       int mid =(l+r)/2;
       mergesort(arr,l,mid);
       mergesort(arr,mid+1,r);
       mergearray(arr,mid,l,r);

   }
}
int main()
{
    int arr[] = {5,22,30,3,49,32,27,44,63,8};
    int sz = sizeof(arr)/sizeof(arr[0]);
    mergesort(arr,0,sz-1);
    print(arr,sz);
}
