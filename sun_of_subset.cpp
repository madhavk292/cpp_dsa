#include<iostream>

using namespace std;

bool flag = false;

void print_subset(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << "  ";

    cout << endl;
}

void subset_util(int arr[], int subset[], int n, int subset_size, int total, int count, int target) {
    if (total == target) {
        flag = true;
        print_subset(subset, subset_size);
        subset_util(arr, subset, n, subset_size - 1, total - arr[count], count + 1, target);
        return;
    } else {
        for (int i = count; i < n; i++) {
            subset[subset_size] = arr[i];
            subset_util(arr, subset, n, subset_size + 1, total + arr[i], i + 1, target);
        }
    }
}

void subset_sum(int arr[], int n, int target) {
    int * subset = new int[n];
    subset_util(arr, subset, n, 0, 0, 0, target);
    delete[] subset;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n + 1];
    cout << "Enter " << n << " elements: " << endl;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int target;
    cout << "Enter target value: ";
    cin >> target;

    subset_sum(arr, n, target);

    if (flag == false)
        cout << "No subset exists";

    return 0;
}