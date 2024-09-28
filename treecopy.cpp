#include<bits/stdc++.h>
using namespace std; 
int main(){ 

stack<double>numbs; 
cout<<"Dekho toh stack e kisu ase ki ??"<<endl; 

if(numbs.empty()){ 
    cout<<" Kisu nai re !"<<endl; 

}
else { 
    cout<<" Ase re vai ase !!"<<endl;

}
cout<<" Typing .... "<<endl; 

numbs.push(11); 
numbs.push(33); 
cout<<" Akhon o kisu nai ? "<<endl; 

if(numbs.empty()){ 
    cout<<"Nai reee !!";
}
else { 
    cout<<" Ache "<<endl; 
}

for(int i =0; i<numbs.size(); i++){ 
    cout<<i<<endl; 
}


}