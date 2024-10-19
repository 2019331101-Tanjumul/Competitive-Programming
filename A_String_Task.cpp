#include<bits/stdc++.h> 
using namespace std; 

void solve (){ 

string s;
cin>>s;


for(int i =0 ; i<s.size(); i++){ 

if( s[i] == 'a' ||  s[i] == 'e' ||  s[i] == 'i' ||  s[i] == 'o' ||  s[i] == 'y' ||  s[i] == 'u' ||  s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || 
s[i] == 'U' || s[i] == 'Y') continue; 

            else
            {
                if(('A'<s[i])&&(s[i]<='Z'))
                    cout<<"."<<char(s[i]+32);
                else
                    cout<<"."<<s[i];
            }
        
 
        }

}
int main(){
    solve(); 
return 0; 
}

// ami ai khane continue use korle toh amar boro hat er char gulo o skip hoitese aita korar karon ta bujhlam na , ar  else er moddhe je first if condition ta ase oita bujhlam na , 
// ar cout a  rakhse . ar oi boro char er choto ta but , niche else er moddhe keno abar rakhse je cout<<" ."<<s[i]; 