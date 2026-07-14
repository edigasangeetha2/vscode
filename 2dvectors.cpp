// 2d vectors 
#include<iostream>
#include<vector>
using namespace std;
 
int main(){
//  vector<vector<int>> matrix={{3,34,5,32},{8 ,7 ,6 ,67},{5 ,4},{100}};

//   cout<< "Entered vector  : \n";
//   for ( int i=0;i<matrix.size();i++){
//     for( int j=0;j<matrix[i].size();j++){
//         cout<<matrix[i][j]<<" ";
//     }
//     cout<<"\n";
//   }

 vector<char>v;

 for(int i=65,j=0;i<91;i++,j++){
  v.push_back(i);
  cout<< v[j]<<"\n";
//   cout<<v.size()<< endl;
//   cout<<v.capacity()<<endl;
  cout<<" ------"<<endl;
  }
  return 0;
}





