#include<iostream>
using namespace std;
void func(){ 
    int x=10;
}

int main(){

    //Scope

    //Local Variable/Scope:

    //Scope of variable inside Block of code {} : if/else + loops
    if(true){
        int y=5;//defined inside { }
    }

    cout<<y;// can't be accessed since y is defined inside block { } so can't be accessed outside that block{}.

    {
        int m;
    }
    cout<<m;// m is defined inside block of code so can't be accessed outside

    for(int i=0; i<10; i++){
        cout<<i;                     //#1
        for(i=2; i<10; i++){
            cout<<i;                 //#2
        }
            cout<<i;                 //#3 All three i are same since they are inside a block {  }
    }
    cout<<i;    //Shows error 

    //Scope of variable inside function
    cout<<x;//Shows error since x var is created inside another function. So cannot be accessed from main() function
}


//Global Variable/Scope

#include<iostream>
using namespace std;
int x=7;
void funct(){
    cout<<x;//Can be accessed inside any function
}
int main(){
cout<<x;// can be accessed 
funct();
}

//Data type Modifiers

#include<iostream>
using namespace std;
int main(){
    cout<<sizeof(int)<<endl;
    cout<<sizeof(short int)<<endl;
    int x=5;
    long int y=7;
    cout<<sizeof(x)<<endl;
    cout<<sizeof(y)<<endl;
}
