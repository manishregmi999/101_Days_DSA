#include<iostream>
#include<vector>
using namespace std;
int main(){
    //Vector
    //1st method of vector declaration:
    vector<int> vect;            //size=0

    //2nd method of vector declaration
    vector<int> vec={1, 2, 3, 4, 5, 6, 7};  //size=3
    // cout<<vec[0]<<endl;

    //3rd method of vector declaration
    vector<int> vec1(9, 6); //This will make a vector of size 5 and each box will store value 6

    //for each loop
    // for(int val : vec1){
    //     cout<<val<<endl; //here i is the value inside that vector. This for each loop will print each of the values of vector one by one.
    // }


    //Functions

    //To print size
    // cout<<vec1.size()<<endl;//Function to print size of vector

    //To push elements
    vec.push_back(25);
    cout<<vec.size()<<endl;

    //To pop elements
    vec.pop_back();

    //To print front value of vector
    cout<<vec.front()<<endl;

    //To print last value of vector
    cout<<vec.back()<<endl;
    
    //To print value at ith index, use at() function
    cout<<vec.at(1)<<endl;

    //To find out capacity of vector use capacity() function
    cout<<vec.capacity();
    cout<<vec.size();


}