#include<iostream>
#include<iomanip>
#include<bits/stdc++.h>
 
using namespace std;
int main ()
{  long long A,B,C,max,min;
     cin>>A>>B>>C;
 
if (A>=B && A>=C){
     max = A;
}else if(C>=A && C>=B){
         max = C;
}else if(B>=A && B>=C){
        max = B;
}
if (A<=B && A<=C){
     min = A;
}else if(C<=A && C<=B){
         min = C;
}else if(B<=A && B<=C){
        min = B;
}
cout<<min<<" "<<max;
}    