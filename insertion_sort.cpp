#include <bits/stdc++.h> 
using namespace std;

//Function to Sort an Array using Insertion Sort 
void insertionSort(int *arr, int size) {
    int key, j;
    for (int i = 1; i < size; i++) {
        key = arr[i];
        j = i;
        while (j > 0 && arr[j - 1] > key) {
            arr[j] = arr[j - 1];
            j--;
        }
        arr[j] = key;
    }
}
//function to display array elements 
void display(int *arr, int size){
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() {
    int n;
    cout << "Enter the size of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Array before sorting: ";
    display(arr, n);

    insertionSort(arr, n);

    cout << "Array after sorting: ";
    display(arr, n);
    return 0;
}