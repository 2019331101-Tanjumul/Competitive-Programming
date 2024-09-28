#include<bits/stdc++.h> 
using namespace std; 
int main () { 

int days; 
cin>>days;

int year = days/365;
days = year*30;

int month = days/30;

days = month*30 ;

cout<<year<<endl<<month<<days<<endl; 

return 0; 


}