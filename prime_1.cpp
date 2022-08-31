#include <bits/stdc++.h>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    for (int t=0;t<n;t++){
        int number;
        cin>>number;
        int end= (int)sqrt(number);
        int flag=0;
        for ( int i=2;i<=end;i++){
            if (number%i==0){
                flag=1;
                break;
            }
        }
        if (flag==1){
            cout<<"no"<<endl;
        }
        else{
            cout<<"yes"<<endl;
        }
    }

	return 0;
}
