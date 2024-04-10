#include<bits/stdc++.h>
using namespace std; 
int main (){

int m, n, i , j , k; 

cin>>n; 

vector<int > v ; 

for(int i =0; i<n; i++){ 

cin>>m;
v.push_back(m);  
}

cout<<v.size() << endl; 

for(int i =0 ; i<v.size(); i++){ 

cout<< v[i]<< " "; 
cout<<endl;

}


}