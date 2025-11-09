
//didn't get output......

#include<iostream>
#include<climits>
using namespace std;  

   int n ;
     
// void print(int*arr){
//     cout<<" Array elements are : ";
//     for (int i=0;i<n;i++){
//         cout<<arr[i]<<endl; 
// }
// }

void countSort(int*arr) {
    int count[1000000];
    int minValue= INT_MAX;
     int maxValue= INT_MIN;
    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }
    for (int i=minValue,j=0 ;i<=maxValue;i++){
        while (count[i]>0){
            arr[j++]=i;
            count[i]--;
        }
    }
    // print(arr);
}


 int main(){
    cout<<"Enter the array size : ";
     cin>>n;

    int arr[n];
    cout<<"Enter the array elements : ";
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    countSort(arr);
    cout<<" Array elements are : ";
    for (int i=0;i<n;i++){
         cout<<arr[i]<<endl;  
    }
    return 0;
 }

