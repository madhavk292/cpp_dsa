#include <bits/stdc++.h> 
using namespace std; 

struct activity {
    int start, finish;
};

bool Compare(activity s1, activity s2) {
    return (s1.finish < s2.finish);
}

void print(activity arr[], int n) {
    sort(arr, arr + n, Compare);
    cout << "Following activities are selected - ";
    int i = 0;
    cout << "(" << arr[i].start << ", " << arr[i].finish << "), ";
    for (int j = 1; j < n; j++) {

        if (arr[j].start >= arr[i].finish){
            cout << "(" << arr[j].start << ", " << arr[j].finish << "), ";
            i = j;
        }

    }

}

int main() {
    activity arr[] = {
        {
            4,
            8
        },
        {
            2,
            5
        },
        {
            4,
            6
        },
        {
            1,
            4
        },
        {
            3,
            7
        },
        {
            8,
            9
        }
    };

    int n = sizeof(arr) / sizeof(arr[0]);
    print(arr, n);
    cout << endl;
    return 0;

}