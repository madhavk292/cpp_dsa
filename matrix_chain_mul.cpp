#include <bits/stdc++.h> 
using namespace std;

int matrixChainMultiplication(vector < int >
    const & arr, int i, int j) {
    if (j <= i + 1) {
        return 0;
    }
    int min = INT_MAX;
    for (int k = i + 1; k <= j - 1; k++) {
        int cost = matrixChainMultiplication(arr, i, k);
        cost += matrixChainMultiplication(arr, k, j);

        cost += arr[i] * arr[k] * arr[j];
        if (cost < min) {
            min = cost;
        }
    }
    return min;
}

int main() {
    vector < int > arr = {
        12,
        30,
        5,
        60
    };
    int n = arr.size();
    cout << "The minimum cost is: " << matrixChainMultiplication(arr, 0, n - 1);
    cout << endl;
    return 0;
}