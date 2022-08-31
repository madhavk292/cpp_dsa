// Running sum of 1D array
#include<iostream>
using namespace std;

int main() {
	int nums[] = {2, 2, 3, 4};
	//int arr[1000];
	int sum = 0;
	int length = sizeof(nums) / sizeof(nums[0]);
	//arr[0] = nums[0];
	for (int i=1; i<length; i++) {
		nums[i] += nums[i-1];
	}
/*	for (int i=0; i<length; i++) {
		for (int j=0; j<=i; j++) {
			sum += nums[j];	
		}
		arr[i] = sum;
		sum = 0;
	}*/
	for (int i=0; i<length; i++) {
	cout << nums[i] << endl;
	}
	return 0;
}
