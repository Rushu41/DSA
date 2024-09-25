#include<iostream>
using namespace std;
void print(int *arr,int sz)
{
    for(int i=0 ;i<sz ;i++)
    {
        cout << arr[i] <<" ";
    }
}
void selectionsort(int *arr,int sz)
{
    int idx;
    for(int i=0 ;i<sz-1 ;i++)
    {
        idx = i;
        for(int j=i+1 ; j<sz ;j++)
        {
            if(arr[j]<arr[idx])
            {
                idx = j;
            }
        }
        swap(arr[i],arr[idx]);
    }
}
int main()
{
    int arr[] = {33,24,0,35,99,32,2,4,6,38};
    int sz = sizeof(arr)/sizeof(arr[0]);
    selectionsort(arr,sz);
    print(arr,sz);
}
