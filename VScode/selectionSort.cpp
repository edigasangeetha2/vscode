#include<iostream>
using namespace std ;

void swap(int *a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void print(int* arr,int n){
    for (int i=0;i<n;i++){
        cout<<arr[i]<<"\n";
    }
}

int SelectionSort(int arr[],int n){
 for (int i=0 ;i<n-1; i++){
    int min=i;
    for(int j=i+1;j<n; j++){
     if (arr[j]<arr[min]){
        min=j;
     }
    }
    swap (&arr[i],&arr[min]);
 }
 print(arr,n);

return 0;
} 


int main(){
    int n;
     cout<<"Enter the size of the arry :";
     cin>>n;
     int arr[n];
     cout << "Enter the array elements :";
     for (int i=0 ;i<n;i++){
      cin>>arr[i] ;
         }
    SelectionSort(arr,n);
    return 0;
}