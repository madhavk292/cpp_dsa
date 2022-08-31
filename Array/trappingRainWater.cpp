#include<bits/stdc++.h>
using namespace std;

int trap(vector<int>& height){
	int n = height.size();
	int left =0, right = n-1;
	int water =0;
	int left_max = height[left];
	int right_max = height[right];
	while(left<right){
		if(height[left] <= height[right]){
			left++;
			left_max = max(left_max, height[left]);
			water += (left_max - height[left]);
		}
		else{
			right--;
			right_max = max(right_max, height[right]);
			water += (right_max - height[right]);
		}
	}
	return water;
}

int main(){
	vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};
	cout << trap(height);
	return 0;
}