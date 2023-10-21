#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
   int num1,num2,num3,num4;
   cin>>num1>>num2>>num3>>num4;
   
   int multi = (num1%100)*(num2%100)*(num3%100)*(num4%100);
 
    multi = multi%100;
    
    if(multi<=9){
    cout<<"0"<<multi;
    }else{
    cout<<multi;
    }
}