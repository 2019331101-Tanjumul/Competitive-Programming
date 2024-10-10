#include<bits/stdc++.h> 
using namespace std; 

void solve (){ 

int n; 
cin>>n; 
int ans = 1; 
vector <int> v(n); 

for(int i =0 ; i<n ; i++){ 

cin>>v[i];

}

sort(v.begin(), v.end()); 

v[0]++; 

for(int i =0; i<n; i++){ 

ans*=v[i];

}

cout<<ans<<endl;

}



int main(){

int t; 
cin>> t; 

while(t--){ 

    solve(); 
}
return 0; 
}