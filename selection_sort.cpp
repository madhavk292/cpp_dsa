#include <bits/stdc++.h> 
using namespace std;

//Function to sort array
void selectionSort(int * arr, int size) {
    int imin;
    for (int i = 0; i < size - 1; i++) {
        imin = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[imin]) {
                imin = j;
            }
            swap(arr[i], arr[imin]);
        }
    }
}
//Function to display Array 
void display(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter number of elements: " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter elements: " << endl;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Array before Sorting: ";
    display(arr, n);
    selectionSort(arr, n);
    cout << "Array after Sorting: ";
    display(arr, n);

    return 0;
}