#include <bits/stdc++.h> 
using namespace std;

 //Function to Merge
int merge(int * arr, int start, int mid, int end) {
    int l_arr, r_arr, i, j, k;
    l_arr = mid - start + 1;
    r_arr = end - mid;

    int L[l_arr], R[r_arr];
    for (i = 0; i < l_arr; i++) {
        L[i] = arr[start + i];
    }

    for (j = 0; j < r_arr; j++) {
        R[j] = arr[mid + j + 1];
    }

    i = 0, j = 0;

    for (k = start; i < l_arr && j < r_arr; k++) {
        if (L[i] < R[j]) {
            arr[k] = L[i++];
        } else {
            arr[k] = R[j++];
        }
    }
    while (i < l_arr) {
        arr[k++] = L[i++];
    }
    while (j < r_arr) {
        arr[k++] = R[j++];
    }
    return 0;
}
//Function to sort Array
void mergeSort(int * arr, int start, int end) {
    int mid;
    if (start < end) {
        mid = (start + end) / 2;
        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);
        merge(arr, start, mid, end);
    }
}
//Function to display Array elements 
void display(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Array before Sorting: ";
    display(arr, n);
    mergeSort(arr, 0, n - 1);
    cout << "Array after Sorting: ";
    display(arr, n);

    return 0;
}