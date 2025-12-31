// #include<iostream>
// using namespace std;
// //Linear Search
// int linear_search(int arr[], int target, int size){
//     for(int i=0; i<size; i++){
//         if(arr[i]==target){
//             return i;
//         }
//     }
//         return -1; // We have not found target
// }

// //Reverse an array
// void reverse_array(int arr[], int size){
//     int s=0;    //Start 
//     int e= size-1;//End 

//     while(s<e){
//         swap(arr[s], arr[e]);
//         s++;
//         e--;
//     }
// }

// int main(){

//     //Linear Search
//     int array[]={2, 3, 4, 5, 6};
//     int size=5;
//     // cout<<linear_search(array, 66, size)<<endl;

//     //Reverse an array
//     cout<<"Array before reverse"<<endl;
//     for(int i=0; i<size; i++){
//         cout<<array[i]<<" ";
//     }
//     cout<<endl; 

//     reverse_array(array, size);

//     cout<<"After reverse"<<endl;
//     for(int i=0; i<size; i++){
//         cout<<array[i]<<" ";
//     }
// cout<<endl;
// }

//WAP to print all the unique values in an array.
#include<iostream>
using namespace std;
int main(){
    int arr[]={1, 2, 3, 3, 2, 1, 6, 7, 8, 4};
    int size=10;
    for(int i=0; i<size; i++){
        bool istrue=true;
        for(int j=0; j<size; j++){
            if(i!=j && arr[i]==arr[j]){
                istrue=false;
                break;
            }
        }
        if(istrue==true){
            cout<<"Unique Value: "<<arr[i]<<endl;
        }

    }
}