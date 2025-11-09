#include<iostream>
using namespace std;
void sum( int a,int b){
    cout<< "SUM :"<<a+b<< endl;
}
void sub ( int a,int b){
    cout<< "SUBTRACTION :"<< a-b<< endl;
}
void multiply( int a,int b){
    cout<< "MULTIPLY :"<<a*b<< endl;
}
void divide( double a,double b){
if ( b!=0)
    cout<<"DIVISION :"<< a/b<< endl;
else
cout<< "Division by zero is not possible "<< endl;
}
int max( int a,int b,int c)
{   
    if ( a>=0&&b>=0&&c>=0){ 
    return (a>b)?((a>c)?a:c):c;
      return (b>a)?((b>c)?b:c): c;
}
}
 int main(){
     int a,b,c;
     cout<< "Enter 3 elements :"<< endl;
     cin>>a>>b>>c;
    //   sum(a,b);
    //   sub(a,b);
    //   multiply(a,b);
    //   divide(a,b);
     int  Max=max( a,b,c);
      cout<<"MAX : "<< Max<< endl;
      return 0;
 }
  