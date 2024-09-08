int main(){
 
   int num1,num2,res;
   char s,eqal;
   cin>>num1>>s>>num2>>eqal>>res;
   int sum = num1+num2;
   int min = num1-num2;
   int mlt = num1*num2;
 
   if(sum == res && s == '+')//=+
   {
    cout<<"Yes"<<endl;
   }else if(sum != res && s == '+'){//!+
        cout<<sum<<endl;
   }else if(min == res && s == '-'){//=-
        cout<<"Yes"<<endl;
 
    }else if(min != res && s == '-'){//!-
        cout<<min<<endl;
   }else if(mlt == res && s == '*'){
        cout<<"Yes"<<endl;
    }else if(mlt != res && s == '*'){
        cout<<mlt<<endl;
}
}
