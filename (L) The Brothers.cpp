#include<iostream>
#include<iomanip>
#include<bits/stdc++.h>
 
using namespace std;
int main ()
{  
    char x;
    cin>>x;
 
   if( x <= 57 &&  48<= x) // digits
   {
    cout<<"IS DIGIT"<<endl;
   }
   
  else if( x <= 90 && 65 <= x) // CAP_alphabets
   {
    cout<<"ALPHA"<<endl;
    cout<<"IS CAPITAL"<<endl;
 
   }
 
   else if(x <= 122 && 97<= x) // small_alphabets
   {
    cout<<"ALPHA"<<endl;
    cout<<"IS SMALL"<<endl;
 
   }
}    