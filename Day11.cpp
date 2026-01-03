#include<iostream>
using namespace std;
int main(){
//Pair sum

//Brute force approach
int n=4;
int array[]={2, 7, 11, 15}; //sorted array
int target=13;
for(int i=0; i<n; i++){
    for(int j=i+1; j<n; j++){
        int ans=array[i]+array[j];
        if(ans==target){
            cout<<"ans = "<<i <<" and " << j;
        }
        ans=0;
    }
}
}

#include<iostream>
using namespace std;
int main(){

//Optimized
int n=4;
int array[]={2, 7, 11, 15}; //sorted array
int target=13;
int i=0;
int j=n-1;
    while(i<j){
    int pairsum=array[i]+array[j];
    if(pairsum==target){
        cout<<array[i]<<"+"<<array[j]<<"="<<array[i]+array[j];
        return 0;
    }
    else if(pairsum > target)
        {
            j--;
            
        }
        else{
            i++;  
        }
    }
    cout<<"Pair not found";
}

