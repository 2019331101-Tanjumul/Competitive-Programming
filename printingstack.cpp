#include<bits/stdc++.h> 
using namespace std; 

void printstack(stack<int>num){ 

    if( num.empty()){ 
        return; 
    }

int x;
x= num.top(); 

cout<<x<<" ";

num.push(x); 
}

int main () { 

stack <int > num; 

num.push(55); 
num.push(123); 
num.push(33); 

printstack(num); 
return 0; 
}