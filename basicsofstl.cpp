#include<bits/stdc++.h>
using namespace std; 

void pairss(){ 


pair <int , int> p  = {2 , 4}; 

cout<<p.first << " " << p.second << endl; 



}

void threeparis(){ 


pair < int , pair <int , int > > pp = {5 , {6, 7}};

cout<< pp.first <<" "<< pp.second.first <<" " << pp.second.second << endl; 




}

void arraypair(){ 

 pair <int , int> arr[] = {{55, 99}, {4 , 0}, {5 , 2}, {22, 104}};

 //printing out every integers in the arry will be :

int sum = sizeof(arr) / sizeof(arr[0]) ; 

for (int i = 0 ; i<sum; i++){ 

cout<<arr[i].first<< " "<< arr[i].second <<endl;


}


}


int main(){ 

pairss(); 

threeparis();


cout<<"####################################"<<endl; 

//declaring a pair array 

arraypair(); 

return 0;

}