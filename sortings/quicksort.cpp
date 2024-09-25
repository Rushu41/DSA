#include<iostream>
using namespace std;
void print(int *arr,int sz)
{
    for(int i=0 ;i<sz ;i++)
    {
        cout << arr[i] <<" ";
    }
}
int part(int *arr,int low,int high)
{
    int i = low+1;
    int j = high;
    int pivot = arr[low];

   do{
     while(arr[i] <= pivot)
    {
        i++;
    }
    while(arr[j] > pivot)
    {
        j--;
    }
    if(i<j)
    {
        swap(arr[i],arr[j]);
    }
   } while(i<j);
   swap(arr[low],arr[j]);
   return j;
}
void quicksort(int *arr,int low,int high)
{
   int idx;
   if(low<high)
   {
       idx = part(arr,low,high);
       quicksort(arr,low,idx-1);
       quicksort(arr,idx+1,high);
   }
}
int main()
{
    int arr[] = {2,4,3,9,1,4,8,7,5,6};
    int sz = sizeof(arr)/sizeof(arr[0]);
    quicksort(arr,0,sz-1);
    print(arr,sz);
}

