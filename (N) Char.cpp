#include <bits/stdc++.h>
using namespace std;
 
int main(){
string equ;
cin>>equ;
int indexOpr;
char charOpr;
string num1,num2;
int num1Int,num2Int;
    
    for(int i=0; i<=equ.size()-1; i++)
    {
        if(equ[i] == '+' || equ[i] == '-' || equ[i] == '*' || equ[i] == '/')
        {
            indexOpr= i;
            charOpr= equ[i];
            break;
        }
    }    
    num1 =  equ.substr(0,indexOpr);
    num2 =  equ.substr(indexOpr+1);
 
    stringstream s1;
    s1<<num1;
    s1>>num1Int;
 
    stringstream s2;    
    s2<<num2;
    s2>>num2Int;
 
    if(charOpr == '+')
    {
        cout<< num1Int+num2Int;
    }   else if(charOpr == '-')
    {
        cout<< num1Int-num2Int;
    }       else if(charOpr == '*')
    {
        cout<< num1Int*num2Int;
    }           else if(charOpr == '/')
    {
        cout<< num1Int/num2Int;
    }               else{
     return 0;
}
 
}