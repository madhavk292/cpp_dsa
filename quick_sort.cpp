#include <bits/stdc++.h> 
using namespace std;

 //Function to partition
int partition(int * arr, int start, int end) {
    int pivot = arr[end];
    int P_index = start;

    for (int i = start; i < end; i++) {
        if (arr[i] <= pivot) {
            swap(arr[i], arr[P_index]);
            P_index++;
        }
    }

    swap(arr[end], arr[P_index]);

    return P_index;
}
//Function to sort Array
void quickSort(int * arr, int start, int end) {
    if (start < end) {
        int P_index = partition(arr, start, end);
        quickSort(arr, start, P_index - 1);
        quickSort(arr, P_index + 1, end);
    }
}
//Function to display Array elements 
void display(int *arr, int size){
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
    quickSort(arr, 0, n - 1);
    cout << "Array after Sorting: ";
    display(arr, n);
    return 0;
}