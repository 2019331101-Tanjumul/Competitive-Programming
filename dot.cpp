#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   int a , b; 
 cin >>  a >> b; 
    int sum = a +b; 
    int sub = a-b; 
    int mul = a*b; 
    
       std::cout << a << " + " << b << " = " << sum << std::endl;
    std::cout << a << " - " << b << " = " << sub << std::endl;
    std::cout << a << " x " << b << " = " << mul << std::endl;
}
