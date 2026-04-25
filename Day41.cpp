#include<iostream>
using namespace std;
int main()  {
    int n=7;
    int arr[]={3, -4, 5, 4, -1, 7, -8};
    for(int st=0; st<n; st++){
        for(int end=st; end<n; end++){
            for(int i=st; i<=end; i++){
                cout<<arr[i];
            }
            cout<<" ";
        }
        cout<<endl;

    }

//Maximum Subarray -> Brute Force Approach
// int max=INT_MIN;
// for(int st=0; st<n; st++){
//         for(int end=st; end<n; end++){
//             int currSum=0;
//             for(int i=st; i<=end; i++){
//                 currSum=currSum+arr[i];
//                 if(max<currSum){
//                     max=currSum;
//                 }
//             }
//         }

//     }
//     cout<<"Maximum subarray sum :"<<max;

//Maximum Subarray -> Brute Force Approach Again
// int max=INT_MIN;
// int currSum=0;
// for(int st=0; st<n; st++){
//     int currSum=0;
//         for(int end=st; end<n; end++){
//                 currSum=currSum+arr[end];
//                 if(max<currSum){
//                     max=currSum;
                
//             }
//         }

//     }
//     cout<<"Maximum subarray sum :"<<max;


//Kadane's Algorithm
int maxx=INT_MIN;
int currSum=0;
for(int i=0; i<n; i++){
    currSum=currSum+arr[i];
    maxx=max(maxx, currSum);
    if(currSum<0){
        currSum=0;
    }
}
cout<<"Max"<<maxx<<endl;
}

