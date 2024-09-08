#include <bits/stdc++.h>
using namespace std;
int main ()
{  
    char x;
    cin>>x;
 
  if( x <= 90 && 65 <= x) // CAP_alphabets
   {
    char After = x + 32;
    cout<< After <<endl;
 
   }
 
   else if(x <= 122 && 97<= x) // small_alphabets
   {
    char After = x - 32;
    cout<< After <<endl;
 
 
   }
}    
