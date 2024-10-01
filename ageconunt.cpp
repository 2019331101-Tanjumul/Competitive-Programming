#include<bits/stdc++.h> 
using namespace std; 
int main(){ 

/* 1st solution:  
int t; 

cin>>t; 

int mon , days, year , tot , tut ; 

tot = t/365;
cout<<tot << "ano(s)"<<endl; 

mon = tot/12; 
cout<< mon << "mes(es)"<<endl;

days = mon/30; 
cout<<days<< "dia(s)"<<endl; 

cout << tot << mon << days << endl; 

 */



//2nd solution : 

int years, months, days;
   
 cin>>days;
   
 years = days / 365;
   
 months = days % 365 / 30;
   
 days = days % 365 % 30;
   
 cout<<years<<" ano(s)"<<endl;
 cout<<months<<" mes(es)"<<endl;
 cout<<days<<" dia(s)"<<endl;




}



