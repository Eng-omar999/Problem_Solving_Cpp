#include <bits/stdc++.h>
using namespace std;
int main(){
 
   int num1,num2;
   char s;
   cin>>num1>>s>>num2;
   if(num1>num2 && s == '>')
   {
    cout<<"Right"<<endl;
   }else if(num1<num2 && s == '<'){
        cout<<"Right"<<endl;
   }else if(num1==num2 && s == '='){
        cout<<"Right"<<endl;
   }else{
        cout<<"Wrong"<<endl;
   }
}