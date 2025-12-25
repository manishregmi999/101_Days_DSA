//Patterns
#include<iostream>
using namespace std;
int main(){
    //Square Pattern
    int n=7;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<j<<" ";
        }
        cout<<endl; // This will change line when 1 row gets completely printed
    }

    //* Square Pattern
    
    for (int i = 1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<"*"<<" "; //Here when value of j is 1 inner loop will run and when inner loop runs it prints *  and then j is incremeneted and again it prints *  . This will run till n;
        }
        cout<<endl; //This will execute when inner loop completes so after 1 line is completed it will chnage 1 line.
    }
    //Alphabet Square Pattern
    for (int i=0; i<n; i++){
        char ch = 'A'; // Character is declared and initialized here because when we complte one line (that is inner loop is completed once ) then char value will not get chnaged to 'A' since it is initialized outside so the 2nd line will continue from D or E based on inner loop so to reset the value we initialized it inside the outer loop so it gets reset to A when next line starts to print.
        for (int j=0; j<n; j++){
            cout<<ch<<" ";
            ch= ch+1; // here character is incremented, which means ascii value of A is incremented by 1 and since it is stored in char datatype so again chnages to character so it becomes B
        }
        cout<<endl;
    }
    //Number pattern without reset
    int val=1;// here val is initialized outside since we donot want the value to reset to 1, so it will continue from each line.
    for (int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<val<<" ";
            val++;

        }
        cout<<endl;
    }

    //Triangle pattern for *
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){    // Here when i is 0 then j will run once since j<=i so 1 * will get printed then j will get incremented i.e. j=1 and i still equals 0, so loop will not run and then we head towards next line, now i will become 1; then when inner loop runs, j will start from 0 so 0 then 1 and then it stops since i is 1 so * will get printed twice so in this way we will form a pattern 
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

   // Triangle pattern for Numbers
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }

    //Triangle alphabet problems
    char ch='A';
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<ch<<" ";
            
        }
        cout<<endl;
        ch++;// it is incremented here because if we have incre,mented inside inner loop in next line it will print B C then B C D and so on, but here it will first print char value same in one line then only in next line char value gets incremented
    }

    // tbh I don't know what to write the name of this pattern, 
    for(int i=0; i<n; i++){
        int val=1;
        for(int j=0; j<=i; j++){
            cout<<val<<" ";
            val++;
        }
        cout<<endl;

    }


}

