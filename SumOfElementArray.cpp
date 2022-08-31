// Sum of elements in a given array
#include<iostream>
using namespace std;

int sum(int arr[], int n)
{
	int sum = 0;
	for(int i=0; i<n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
int main()
{
	int arr[] = {1, 3, 5};
	int n = sizeof(arr) / sizeof(arr[1]);
	cout << sum(arr, n) << endl;
	return 0;
}
