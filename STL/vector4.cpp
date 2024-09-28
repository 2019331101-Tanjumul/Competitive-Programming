#include<bits/stdc++.h>
using namespace std; 
int main(){ 

vector<int> v = { 2 ,4 ,5, 6,7 ,8 }; 

vector<int>::iterator it;

for(it = v.begin(); it != v.end(); it++ ){ 


    cout<<*it<< " "; 
}
cout<<endl; 
}