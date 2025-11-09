// stil work on it 
#include<iostream>
using namespace std;

void spiralMatrix(int matrix[][4],int n ,int m ){
int srow=0,scol=0,erow=n-1,ecol=m-1;
while(srow<=erow && scol<= ecol){
//top
for( int j=scol;j<=ecol;j++){
    cout<< matrix[srow][j]<<" "; 
}
//right

for(int i=srow+1;i<=erow;i++){
   
    cout<<matrix[i][ecol]<<" ";
}
//bottom
for( int j=ecol;j>=scol;j--){
    if (srow == erow)
    break;
    cout<< matrix[erow][j]<<" ";
}

//left
for (int i = erow + 1; i >= srow; i--)
{if (scol == ecol)
    break;
    cout<<matrix[i][srow]<<" ";
}

srow++,scol++,erow--,ecol--;
} cout<<endl;
}

 int main(){
    //  int matrix[5][5]={ { 1,2,3,4,5},
    //                     {6,7,8,9,10},                
    //                     {11,12,13,14,15},              
    //                     {16,17,18,19,20},            
    //                     {21,22,23,24,25} };
    //  int n,m;
    //  cout << "enter the no.of rows and no.of coloumns : ";
    //  cin>>n>>m;
    //   int matrix[m][n];
    //   cout<<"enter the elements of the array : ";
    //   for( int i=0;i<m;i++){
    //     for( int j=0;j<n;j++){
    //         cin>>matrix[i][j];
    //     }
    //   }
   // spiralMatrix(matrix,m,n);
    int matrix[4][4]={
                       { 1,2,3,4,},
                       { 12,13,14,5},
                       { 11,16,15,6},
                        { 10,9,8,7}};
   spiralMatrix(matrix,4,4);   
     return 0;
 }