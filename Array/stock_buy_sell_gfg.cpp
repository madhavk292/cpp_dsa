// https://practice.geeksforgeeks.org/problems/stock-buy-and-sell2615/1/
// Here we are allowed to buy and sell multiple times. 
#include<bits/stdc++.h>
using namespace std;


void stockBuySell(int price[], int n) {
   vector<vector<int>> ans;
   for (int i=1; i<n; i++){
       vector<int> temp;
       if (price[i] > price[i-1]){
           temp.push_back(i-1);
           while (i<n&&price[i] >= price[i-1]) i++;
           temp. (i-1);
           ans.push_back(temp);
       }
   }
   if(ans.empty()){
       cout << "No Profit" << endl;
       return;
   }
   for (auto i:ans){
       cout << "("<< i[0] << " "<< i[1] << ") ";
   }
   cout << endl;
   return ;
}


int main(){
	int n;
	cin >> n;
	int price[n];
	for(int i=0; i<n; i++)
		cin>>price[i];
	stockBuySell(price, n);
	return 0;
}
