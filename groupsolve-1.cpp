
#include<bits/stdc++.h> 
using namespace std; 

char randch(){ 

return 'a'+ rand() % 26;


}
int main (){ 
    srand(time(0)); 

int t; 
cin>>t; 
while (t--){ 

vector<pair<char,char > > p(4); 

for(int i =0 ; i < 4 ; i++){ 
cin>>p[i].first>> p[i].second; 
}

for (int i =0 ; i<4; i++){
if(p[i].first == p[i].second ){
    cout<<p[i].first<<randch()<<p[i].second<<endl;
    //p.first[i] == p[i].second + 1
}
else if (p.first[i] == p[i].second + 1){
  
p.first[i] == p[i].second + 1; 

cout<<p[i].first<<randch()<<p[i].second<<endl;

    }
    else { 
    cout<< p[i].first << p[i].second <<endl;
    }
}
}
}


/*  
#include <bits/stdc++.h> 
using namespace std; 

char randch() { 
   
    return 'a' + rand() % 26;  
}

int main() { 
    srand(time(0)); 

    int t; 
    cin >> t; 
    while (t--) { 
        vector<pair<char, char>> p(4); 

       
        for (int i = 0; i < 4; i++) { 
            cin >> p[i].first >> p[i].second; 
        }

        
        for (int i = 0; i < 4; i++) {
            if (p[i].first == p[i].second) {
                
                cout << p[i].first << randch() << p[i].second << endl;
            } 
            else if (p[i].first == p[i].second + 1) {
        
                cout << p[i].first << randch() << p[i].second << endl;
            } 
            else { 
                // If neither condition matches
                cout << p[i].first << p[i].second << endl;
            }
        }
    }


}
 */