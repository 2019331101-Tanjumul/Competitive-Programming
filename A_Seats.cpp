#include <bits/stdc++.h> 
using namespace std; 

void solve() { 
    int n; 
    cin >> n; 
    string s;
    cin >> s; 

    int cnt = 0; 
    for (int i = 0; i < n - 2; i++) {
       
        if (s[i] == '#' && s[i + 1] == '.' && s[i + 2] == '#') {
            cnt++; 
        }
    }
     cout<<cnt<<endl; 
}

int main() {
    solve(); 
    return 0; 
}


/** My previous code is :
 


#include<bits/stdc++.h> 
using namespace std; 

void solve (){ 

int n; 
cin>>n; 
string s ;
cin>>s; 
int count = 0; 
int count1 = 0;
int arr[] = { }; 

for( int i =0 ; i<s.size(); i++) { 

    if(s[i] == '.'){
      
       count++; 
       cout<<count;
       break; 

    }
    else if(s[i]=='#')  cout<<"0"; 

  
}

for( int j =0 ; j<s.size(); j++){ 

//arr[]

}

cout <<endl;
}



int main(){


    solve(); 

return 0; 
}


 */