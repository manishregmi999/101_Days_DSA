

//2D array
#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
int main(){
    int matrix[4][3]={{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}}; //4 rows
    int rows = 4;
    int column = 3;

    //To print matrix (2d array)
    for(int i=0; i<rows; i++){
        for(int j=0; j<column; j++){
            cout<< matrix [i][j]<<" ";
        }
        cout<<endl;
    }



    //To take input
    int matrix1[4][3];
    int row=4;
    int col=3;
    cout<<"Enter matrix";
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>matrix1[i][j];
        }
    }

    //To print output
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<matrix1[i][j]<<" ";
        }
        cout<<endl;
    }

    //To find element from matrix
    int ele=4;
    int matrix[4][3]={{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    int row=4;
    int coln=3;
    int ans;
    for(int i=0; i<row; i++){
        for(int j=0; j<coln; j++){
            if(matrix[i][j]==ele){
                ans=matrix[i][j];
                cout<<i<<" "<<j<<" "<<"= ";
                cout<<ans<<endl;
                break;
            }
        }
     }

    //Maximum Row Sum
    int matrix[3][3]={{1, 2, 3}, {4, 15, 6}, {7, 8, 9}};
    int maxSum=INT_MIN;
    int currSum=0;
    int row=3;
    int coln=3;
    for(int i=0; i<row; i++){
        currSum=0;
        for(int j=0; j<coln; j++){
            currSum=currSum+matrix[i][j];
        }
        maxSum=max(maxSum, currSum);
    }
    cout<<"Max Sum: "<<maxSum;

}
