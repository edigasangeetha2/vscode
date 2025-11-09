#include<iostream>
using namespace std;
void diagonalSum( int matrix[][4],int n,int m);   



void diagonalSum( int matrix[][4],int n,int m){
     int sum=0,i;
 for ( i=0;i<n;i++){
     sum=sum+ matrix[i][i];
        if(i!=n-i-1){
            sum= sum+matrix[i][n-1-i];
        
     }
 }
cout<<sum<<endl;
}

 int main(){
     int matrix[4][4]={
                       { 1,2,3,4},
                       { 12,13,14,5},
                       { 11,16,15,6},
                        { 10,9,8,7}};
     diagonalSum(matrix,4,4);
     return 0;
 }


 //g++ diagonalSum.cpp -o diagonalSum
 //./diagonalSum