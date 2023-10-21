#include <bits/stdc++.h>
using namespace std;
int main(){
 
    double num;
    cin>>num;
    int numInt = num;
    double numFloat = num - numInt;
    if(numFloat>0){
        cout<<"float "<<numInt<<" "<<numFloat<<endl;
    }else{
        cout<<"int "<<numInt<<endl;
    }
}