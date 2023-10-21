#include <bits/stdc++.h>
using namespace std;
 
int main(){
double numf1,numf2;
cin>>numf1>>numf2;
//numf1=x 
 
if (numf1>0 && numf2>0 ){
    cout<<"Q1";
}else if (numf1<0 && numf2>0){
    cout<<"Q2";
}else if (numf1<0 && numf2<0){
    cout<<"Q3";
}else if (numf1>0 && numf2<0){
    cout<<"Q4";
}else if(numf1==0 && numf2==0){
cout<<"Origem";
}else if(numf2==0){
cout<<"Eixo X";
}else if(numf1==0){
cout<<"Eixo Y";
 
}
}