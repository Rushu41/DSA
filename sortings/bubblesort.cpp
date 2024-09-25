#include<iostream>
#include<algorithm>
using namespace std;

void bubblesort(int arr[], int sz)
{
    for(int i = 0; i < sz; i++)
    {
        for(int j = 0; j < sz - i - 1; j++)
        {
            if(arr[j+1] < arr[j])
            {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

void print(int arr[], int sz)
{
    for(int i = 0; i < sz; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {4, 22, 0, -34, -54, 34, 99, 4, 6, 43};
    int sz = sizeof(arr) / sizeof(arr[0]);
    bubblesort(arr, sz);
    print(arr, sz);
}
