#include<bits/stdc++.h>
using namespace std;

/*  
    Time Complexity : O(M)
    Space Complexity : O(M)
    
    Where 'M' is the length of the Decrypted String of Encrypted String 'S'.
*/

char kThCharaterOfDecryptedString(string s, long long k)
{
    long long i, j;

    //  Length of the Encrypted String.
    long long n = s.length();

    //  To store the substring.
    string substring;

    //  To store the frequency of the substring.
    long long freqOfSubstring;

    //  Decrypted String
    string decryptedString = "";

    i = 0;

    while (i < n)
    {
        j = i;
        substring = "";
        freqOfSubstring = 0;

        //  Find the substring by traversing the string until no digit is found.
        while (j < n && islower(s[j]))
        {
            substring.push_back(s[j]);
            j++;
        }

        //  Find the frequency of preceding substring.
        while (j < n && isdigit(s[j]))
        {
            freqOfSubstring = freqOfSubstring * 10 + (s[j] - '0');
            j++;
        }

        i = j;

        // Append the subtring freqOfSubstring times
        while (freqOfSubstring--)
        {
            decryptedString.append(substring);
        }
    }

    //  Return 'k'Th character of Decrypted String
    return decryptedString[k-1];
}

int main(){
    string str;
    cin >> str;
    long long k;
    cin >> k;
    cout << kThCharaterOfDecryptedString(str, k) << endl;    
    return 0;
}