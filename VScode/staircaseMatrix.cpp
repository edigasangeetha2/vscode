#include<iostream>
using namespace std;

void staircaseMatrix( int matrix[][4],int n,int m,int key){
   int i=0,j=m-1,found=0;
    while( i<n&&j>=0){
         if ( matrix[i][j]==key){
             cout<< "("<<i<<","<<j<<")"<< endl;
             found++;
             break;
         }
         else if ( key<matrix[i][j]){
             j--;
         }
         else{
            i++;
         }
    }
    if ( found==0)
    cout<<"Element is not found !"<< endl;
 
}

 int main(){
     int matrix[4][4]={
                       { 1,2,3,4},
                       { 12,13,14,15},
                       { 13,16,25,36},
                        { 6,29,38,57}};
     int key;
     cout<<"Enter the key element : "<<endl;
     cin>>key;
     staircaseMatrix(matrix,4,4,key);
     return 0;
 }


 //g++ staircaseMatrix.cpp -o staircaseMatrix    ./staircaseMatrix