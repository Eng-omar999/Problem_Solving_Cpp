#include <bits/stdc++.h>
using namespace std;
  
int main(){
int num1,years;
int months,days;
cin>>num1;
 
    years= num1/365;
    num1 -= 365 * years;
    months = num1 / 30;
    num1 -= 30 * months;
    days = num1;
 
 
cout<<years<<" years"<<endl;
cout<<months<<" months"<<endl;
cout<<days<<" days"<<endl;
 
}
