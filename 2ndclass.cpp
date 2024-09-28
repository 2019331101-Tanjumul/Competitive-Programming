#include<bits/stdc++.h> //header file 
using namespace std; 
int main (){ 

/* class 6 of cps family here ! */ 

// printf("IN the name of ALLAH"); 
int second ; 
cin>> second;
 second ; 
int hour = second/3600;
second = second - (hour*3600); 

int min = second/60; 
second = second-(min*60); 
cout<< hour << ":"<<min <<":"<<second<<endl;
return 0; 

}