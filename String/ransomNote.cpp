#include<bits/stdc++.h>
using namespace std;

bool canConstruct(string ransomNote, string magazine) {
    int n = ransomNote.length();
    int m = magazine.length();
    if(m < n) return false;
    vector<int> count(128);
    for(char c: magazine){
        ++count[c];
    }
    for(char c: ransomNote){
        if(--count[c] < 0)
            return false;
    }
    return true;
}

int main(){
    string a, b;
    cin >> a >> b;
    cout << canConstruct(a, b); 
    return 0;
}
