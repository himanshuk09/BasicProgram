
#include<iostream>
#include<string>
//#include<bits/c++.h>
using namespace std;

int main()
{  
    string  STR;
    //cin<<STR;
    //display online 1st word
    getline(cin, STR); 
    //display whole sentence 
    cout<<STR;
    STR.clear();
    cout<<"after clear()  "<<STR;
     return 0; 
}