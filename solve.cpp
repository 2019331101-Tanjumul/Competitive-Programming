#include<bits/stdc++.h>
using namespace std; 
void addingit (){ 

string st;
cin>>st; 

for (int i =1; i<st.size(); i++){ 
    if(st[i]==st[i-1]){
        for(int j =0 ; j<i; j++){
if(st[i]=='a'){ 
            cout<<'b'; 
        }
 else { 
            cout<<'a'; 
        }
        }
        for(int j=i ; j<st.size(); j++){ 
            cout<<st[i]<<endl; 
        }
       return ; 
    }
}

if (st[0]=='a'){
    st = 'b' + st;
} else { 
    st = 'a' + st; 
}
cout<<st<<endl; 

}

int main (){ 

int t; 
cin>>t; 
while (t--){ 
    addingit(); 
}
return 0; 
}