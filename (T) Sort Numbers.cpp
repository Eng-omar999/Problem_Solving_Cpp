#include <bits/stdc++.h>
using namespace std;
 
int main(){
int x,y,z;
int fi,sec,th;
 
cin>>x>>y>>z;
    if(x>=y && x>=z)
    {
        th=x;
        if(y>=z)
        {
            sec=y;
            fi=z;
        }else if(z>=y)
        {
            sec=z;
            fi=y;
        }
    }else if(y>=x && y>=z)
    {
       th=y;
        if(x>=z)
        {
            sec=x;
            fi=z;
        }else if(z>=x)
        {
            sec=z;
            fi=x;
        } 
    }else if(z>=x && z>=y)
    {
      th=z;
        if(y>=x)
        {
            sec=y;
            fi=x;
        }else if(x>=y)
        {
            sec=x;
            fi=y;
        }
    }
cout<<fi<<"\n"<<sec<<"\n"<<th<<endl;
cout<<endl;
cout<<x<<"\n"<<y<<"\n"<<z<<endl;
}
