#include <iostream>
using namespace std;

void print( int*arr,int n){
for (int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}

 void insersionSort(int *arr, int n){
 
     for(int i=1;i<n;i++){
         int current =arr[i];
         int j=i-1;
         while(j>=0 && arr[j]>current){
        
               arr[j+1]=arr[j];
               j--;
        }
         arr[j+1]=current ;
     }
     print(arr,n);
}

int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];   
    }
    insersionSort(arr,n);
}