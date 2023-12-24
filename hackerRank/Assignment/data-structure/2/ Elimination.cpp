// Problem Statement

// You will be given a binary string
// (A binary string is a string which contains only 0 and 1) in which every will eliminate its previously adjacent

// and itself. After an elimination, if another elimination is possible, it will continue until no further eliminations can be made.

// For example, if the sequence is
// , then the and elements, as well as the and elements, will be eliminated, resulting in the string

// (10 01 1 01 10 - Bold values are eliminated). After that, the 2nd and 3rd elements will be eliminated, resulting in the string 110 (1 01 10 - Bold values are eliminated). After that, no further eliminations can occur.

// You need to determine whether the string will be empty after all eliminations.

// Input Format

//     First line will contain 

// , the number of test cases.
// Each test case will contain the string

//     .

// Constraints

// Output Format

//     For each test case output YES if the string is empty after all eliminations, NO otherwise.

// Sample Input 0

// 7
// 01
// 10
// 0011
// 0101
// 01001110
// 000111010011
// 00011

// Sample Output 0

// YES
// NO
// YES
// YES
// NO
// YES
// NO



#include<bits/stdc++.h>
using namespace std;


int main()
{
    stack<char> s;
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        
        for(char c:str){
            if(c=='1'&& !s.empty() && s.top()=='0' ){
                s.pop();
            }else{
                s.push(c);
            }
        }
       
        if(s.empty()){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        while(!s.empty()){
            s.pop();
        }
    }

    return 0;
}