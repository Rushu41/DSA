#include<iostream>
using namespace std;
void insertionsort(int *arr,int sz)
{
    int key,j;
    for(int i=1 ; i<sz; i++)
    {
       key = arr[i];
       j = i-1;
       while( j>=0 && arr[j] > key)
       {
           arr[j+1] = arr[j];
           j--;
       }
     arr[j+1] = key;
    }
}
void print(int *arr ,int sz)
{
    for(int i=0 ;i<sz;i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
  int arr[] ={33,5,34,43,24,2,0,5,3,23};
  int sz = sizeof(arr)/ sizeof(arr[0]);
  insertionsort(arr,sz);
  print(arr,sz);
}
