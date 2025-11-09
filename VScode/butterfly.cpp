 // HAVE TO WORK ON IT 

// #include<iostream>
// using namespace std;

//  int main(){
//      int i=0,j=0,n;
//      cout<<"Enter the number : "<< endl;
//      cin>> n;
//     int k=0,s=n;
//      for ( ;i<n;i++){
//         for(;j<n;j++){
//             if ( j<=k||j>=s)
//             cout<<"*";
//             else
//             cout<<" ";
//            }
//         if(k==s||s==k+1)
//         k--,s++;
//         else
//         k++,s--;
//         cout<<endl;
//         }
//          return 0;
//  }


#include<iostream>
using namespace std;

int main(){
    int i=0,j=0,n;
    cout<<"Enter the number : "<< endl;
    cin>> n;

    int k=0, s=n;

    for (i=0; i<n; i++){
        for (j=0; j<n; j++){
            if (j <= k || j >= s)
                cout << "*";
            else
                cout << " ";
        }

        if (k == s || s == k + 1)
            k--, s++;
        else
            k++, s--;

        cout << endl;
    }

    return 0;
}
