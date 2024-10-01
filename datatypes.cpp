#include<bits/stdc++.h>

using namespace std;
int main(){ 

//memory c/c++ 

/*basic data types : integer , double and char

data type significance integer : 4byte , 8 bit = 1 byte ; 

data type secures the spaces in the memory for the significant type to address in the memory ! 
variable : 
int = integer , 
int x ; // it will secure the space x in the memory ! 

there is a concept of Lvalue and R value 

by assignment operator when we use a new value by assigning " = "
in int we can store 4 digits to 1 byte and roughly we can say in 1000kb it makes 1 mb , 
if we address 4MB then it will take 4*10^6 digits. 

*/
int total_students; 
total_students = 20;
total_students = 30; 

total_students = total_students/6; 
total_students = total_students + 5 ; 

int present_students = 6 ; 
int absent_students = total_students - present_students; 

double cgpa = 3.34; 


 //printf("Total number of students : %d\n", total_students);
// printf("NAN");

/* here the result will be 10 if we cout this : because the code will run the first 20 then it will claculate then it will also run for the 30 when it
 calculates then it shows the result because there will be no another declarations 
 total_students = total_students + 5; */


cout << total_students<<endl;

cout<<"absent students :"<<absent_students; 

 /* double takes 8 byte that means it takes the 2*integer_space (4bytes) = 8 bytes
 now = when we use fraction then we need the use of double or float okay? */

printf("My cgpa is : %lf\n", cgpa); 


int num = 1000000000; 
//if we  put any long number than 10^9 then it will not able to use int 

int num_num = 10000000000; 
//see it will show overflow that means it will not able to use the int we need to use long long int here ;
cout<<num<<endl; 

cout<<num_num<<endl;


long long int tanju; 

tanju  = 10000000000; 
//see now it is showing the extra '0's so , long long int is 2^64 
cout<< tanju; 



/* Instructor Tanjumul ; 
 Program class record number : 08 */
} 