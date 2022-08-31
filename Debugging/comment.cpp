#include <iostream>
using namespace std;

int  main()
{
     int i=10, j=5;
     int modResult=0;
     float divResult=0;
     modResult = i%j;
     cout<<modResult<<" ";
     divResult = (float)i/modResult;
     cout<<divResult;
}