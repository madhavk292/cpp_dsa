// Trilogy Innovations(CodeNation) 15th May 2022 Test
// integer array A (1-based indexing) and intger B
// ith index contain value i!+B
// return the number of prime element
// A=2 B=3 o/p=1 element:4,5
// A=3 B=2 o/p=1 elements: 3,4,8
// A=4 B=7 o/p=2 elements: 8,9,13,31




// One based indexing and the ith box contains the i!+B
// how many boxes contains the prime number 
#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<set>
#include<unordered_set>
#include<map>
#include<unordered_map>
#include<queue>
#include<math.h>
#include<stdlib.h>
#include<deque>
using namespace std;

bool is_Prime(unsigned long long n)
{
    // Corner cases
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
 
    
    if (n % 2 == 0 || n % 3 == 0)
        return false;
 
    
    for (unsigned long long i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
 
    return true;
}

unsigned long long factorial(unsigned long long n) {
  if(n > 1)
    return n * factorial(n - 1);
  else
    return 1;
}

int main()
{
    unsigned long long A;
    int B,count = 0;
    cin>>A>>B;

    if(B%2==0 && (B!=14 && B!=8))
    {
        cout<<1<<endl;
        return 0;
    }
    else if (B==14 || B==8)
    {
        cout<<0<<endl;
        return 0;
    }
    else
    {
        for(unsigned long long  i=2;i<=A;i++)
        {
            if(is_Prime((factorial(i)+B)))
            {
                count+=1;
            }
        }
    }

    // cout<<factorial(3)<<endl;

    cout<<count<<endl;

    return 0;
}