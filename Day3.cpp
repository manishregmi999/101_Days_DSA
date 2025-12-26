#include<iostream>
using namespace std;
int main(){
    int n=4;
    //Reverse triangle pattern
    for(int i=0; i<n; i++){
        for(int j=i+1; j>0; j--){
              cout<<j<<" ";
        }
        cout<<endl;
    }

    //Floyd's triangle pattern
    int val=1;
    for(int i=0; i<n; i++){
    for(int j=0; j<=i; j++){
        cout<<val<<" ";
        val++;
        }
        cout<<endl;
    }

    //Triangle pattern in alphabet
    char ch = 'A';
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<ch<<" ";
            ch++;
        }
       cout<< endl;
    }
//Inverted triangle pattern
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout<<" ";// Here in each line space is same as value of i; that is when i=0 there is no space when i=1 there is 1 space when i=2 there is 2 space so we have to make a loop which will run i imes, to do this int j=0 to start from 0, j<i so that first loop won't run, then j++. This way when i is 0 it won't run, when. i is 1 it will run once since i = 1 and j=0 and i<0 which means 0<1 so loop will run once, again when i = 2 j =0 it will run j = 1 it will run so total 2 times but same as value of i that is 0 1 2 3 spqces.
        }// when spaces are printed first we can just print other numbers and they will print after space which will make this opposite triangle look. But n-i is necessary since we want exactlt n-i numbers in each line.
        for(int j=0; j<n-i; j++){ //Here to run this code n-i times we start from i=0 and set it to n-i that is 4-0 so loop will start from i-0, then i=1 then 2 then 3 and stop so this way loop will run 4 times, then in next iteration i will be 1 so now loop will run n-i times which is 4-1 times which is 3 times, and so on it will get to the end by printing n-i times in each line,
            cout<<i+1;// This will print i+1 which means at first line it will print 1 at second 2 and so on.
        }
        cout<<endl;
    }

    //Pyramic pattern
    for(int i=0; i<n; i++){
        for(int j=0; j<(n-(i+1)); j++){ // here we first print spaces so space should be printed n-(i+1) times in each row so we put loop from 0 to less than n-(i+1)
            cout<<" ";
        }
        int val=1;
        for(int j=0; j<(i+1); j++){// here we print 1st half of pattern, here we print i and increment its value that is 1 in 1st line then 12 in second, 123 in thirs and so on, for this we create a variable called var and initialized it with 1 and we increment its value in each iteration so we get 1234 type of value and since in each line we restart from 1 so make value = 1 after this inner loop ends so when it goes to next line val will restart from 1 
            cout<<val;
            val++;
        }
        for(int j=i; j>0; j--){// Here we print last one number which is printed in reverse order. since it goes like this 4321 so the 1st digit will always change in each line so we make it dynamic by using j=i so when i equlls zero loop will run 0 times and when i=1 loop will run one time.  for eg if i=3 then j=3 so when we print j it will start from 3 then we decrement j sio j becomes 2 but i is still 3 so j will print twuce one for j=2 and 1 for j=1. it won't run for j =0, since we are printing j, anmd there is no 0 in the pattern so we avoud 0 by writing j>0.
            cout<<j;// here for i=3 this will print 321, for i=2 output is 21 for i=1 out[put is 1 and so on]
        }
        cout<<endl;//this will chanbge line after one row is completely printed

    }
    //Hollow triangle problem
    for(int i=0; i<n; i++){
        //space
        for(int j=0; j<(n-(i+1)); j++){
            cout<<" ";
        }
        //*
        cout<<"*";
        //space
        if(i!=0){
             for(int j=0; j<(2*i-1); j++){
                cout<<" ";
             }
             cout<<"*";
        }
         cout<<endl;
    }

}