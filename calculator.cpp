#include<iostream>
using namespace std;
int sum(int a,int b){
    return a+b;
}
int mul(int a,int b){
    return a*b;
}
int divi(int a,int b){
    return a/b;
}
int sub(int a,int b){
    return a-b;
}
int mod(int a,int b){
    return a%b;
}

int main(){
    char op;
    int a,b ;
    cout<<"enter first number\t";
    cin>>a;
    cout<<"enter the operation"<<endl;
    cin>>op;
    cout<<"enter second number\t";
    cin>>b;
    
    switch (op){
    case'*':
        cout<<endl<<mul(a,b);
            break;
    
    case '-':
        cout<<endl<<sub(a,b);
            break;
    
     case'+':
        cout<<endl<<sum(a,b);;
         break;    
     case '/':
        cout<<endl<<divi(a,b);
         break;

     case '%':
        cout<<endl<<mod(a,b);
            break;
    default:
        cout<<"invalid output";
        }
    

return 0;
}