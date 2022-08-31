#include<bits/stdc++.h>
using namespace std;

int merge(int arr[],int temp[],int left,int mid,int right)
{
    int i = left;
    int j = mid;
    int k = left;
    while((i <= mid-1) && (j <= right)){
        if(arr[i] <= arr[j]){
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];
        }
    }

    while(i <= mid - 1)
        temp[k++] = arr[i++];

    while(j <= right)
        temp[k++] = arr[j++];

    for(i = left ; i <= right ; i++)
        arr[i] = temp[i];
    
    return 0;
}

int merge_Sort(int arr[],int temp[],int left,int right)
{
    int mid;
    if(right > left)
    {
        mid = (left + right)/2;
        merge_Sort(arr,temp,left,mid);
        merge_Sort(arr,temp,mid+1,right);
        merge(arr,temp,left,mid+1,right);
    }
    return 0;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int temp[n];
    merge_Sort(arr,temp,0,n-1);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
