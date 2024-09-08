#include<iostream>
#include<iomanip>
#include<bits/stdc++.h>
 
using namespace std;
int main ()
{   
 double x,y;
 cin >> x >>y;
 double originalNumber = x / y ; 
 
 
cout << "floor " << x << " / " << y << " = " << floor(originalNumber)<<endl;
cout << "ceil " << x << " / " << y << " = " << ceil(originalNumber)<<endl;
cout << "round " << x << " / " << y << " = " << round(originalNumber)<<endl;
 
}
