#include<bits/stdc++.h>
using namespace std;

int main(){
	map<int, int> mp;
	mp.insert({ 2, 30 });
	mp.insert(pair<int, int>(1, 40));
	mp.insert(make_pair(3, 20));

	for (auto itr = mp.begin(); itr != mp.end(); ++itr) {
        cout << '\t' << itr->first << '\t' << itr->second
             << '\n';
    }

	// for(auto charr: s){
	// 	mp[charr]++;
	// }
	// auto it = mp.find('a');
	// if(it != mp.end())
	// 	cout << "found" << it->first <<endl;
	// else
	// 	cout << "Not forund" << endl;
	// int n = mp['a'];
	// cout << n << endl;								
	// map<char, int> :: iterator itr;
	// for(itr = mp.begin(); itr!= mp.end(); itr++){
	// 	cout << itr->first << '\t' << itr->second <<'\n';
	// }
    cout << endl;

    cout << mp[3];
	return 0;
}