#include <bits/stdc++.h> 
using namespace std;

int CreatePartition(int arr[], int l, int h) {
    int pivot, index, i;
    index = l;
    pivot = h;
    //Getting index of pivot 
    for (i = l; i < h; i++){
        if (arr[i] < arr[pivot]) {
            swap(arr[i], arr[index]);
            index++;
        }
    }
    swap(arr[pivot], arr[index]);
    return index;
}

int Partition(int arr[], int low, int high, int k) {
    int pindex;
    if (low < high) {
        pindex = CreatePartition(arr, low, high);
        if (pindex == k - 1) {
            return k - 1;
        } else if (pindex > k - 1) {
            Partition(arr, low, pindex - 1, k);
        } else {
            Partition(arr, pindex + 1, high, k);
        }
    }
    return 0;
}
int main() {
    int n, i, k, sm;
    cout << "\nEnter the number of elements: ";
    cin >> n;

    int arr[n];
    for (i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "\nEnter the k for the kth smallest element: ";
    cin >> k;

    sm = Partition(arr, 0, n - 1, k);

    // Printing the result.
    cout << "\nThe kth smallest element: " << arr[sm];
    cout << endl;
    return 0;
}