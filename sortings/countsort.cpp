#include<iostream>
using namespace std;

void print(int *arr, int sz) {
    for (int i = 0; i < sz; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void countsort(int *arr, int sz) {
    int mx = 0;
    for (int i = 0; i < sz; i++) {
        if (arr[i] > mx) {
            mx = arr[i];
        }
    }

    int *cnt = new int[mx + 1];

    for (int i = 0; i <= mx; i++) {
        cnt[i] = 0;
    }

    for (int i = 0; i < sz; i++) {
        cnt[arr[i]]++;
    }

    int n = 0;
    for (int m = 0; m <= mx; m++) {
        while (cnt[m] > 0) {
            arr[n] = m;
            n++;
            cnt[m]--;
        }
    }

    delete[] cnt;
}

int main() {
    int arr[] = {33, 24, 0, 35, 99, 32, 2, 4, 6, 38};
    int sz = sizeof(arr) / sizeof(arr[0]);

    countsort(arr, sz);
    print(arr, sz);

    return 0;
}
