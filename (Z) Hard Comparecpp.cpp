#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
   double num1,num2,num3,num4;
   cin>>num1>>num2>>num3>>num4;
   
   double powNum1,powNum2;
   powNum1 = num2*log(num1);
   powNum2 = num4*log(num3);
   if(powNum1>powNum2){
    cout<<"YES";
   }else{
    cout<<"NO";
   }
}