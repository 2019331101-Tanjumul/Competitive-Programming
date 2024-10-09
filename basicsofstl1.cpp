#include<bits/stdc++.h>
using namespace std; 

void explainvector(){ 

vector <int>v; 
//v.push_back(1); 
v.emplace_back(33); 
v.emplace_back(333); 
for (int i =0 ; i<v.size(); i++) cout<<v[i]<<endl;
}

void makingpair(){ 

    pair <pair<int, int>, pair <int , int> > p = {{2,44} , {55, 11}}; 
    //pair<pair<int, int>, pair<int, int>> p = {{2, 44}, {55, 11}};

     cout<<"The first elemet of the first pair is: " << p.first.first<<endl; 
}

//ask peal what happend here ? i want to push any num any time in the pair in the vector how to see the output and if i want to see it 
//will i need any loops to do that ? , how to resolve the first.first output method will , if i make any suddden pushes in the vector for pairs
//will i have to memorize the first.second, second.first , third.first ? 
// void makingvector(){ 

// vector <pair<int,int>c; 


// c.emplace_back(33, 00);
// c.emplace_back(123, 44); 


// //for(int i =0 ; i<sizeof(c); i++)
// cout<<endl<<"pair+vector"<<endl;
// cout<<c.first.first;

// }

void makingiterator(){
vector<int> d = {10,51,22};
vector<int>::iterator it = d.begin(); 

for(it = d.begin(); it != d.end(); it++ ){ 
    cout<<*it<<endl; 
}

/* 
    vector<int> d = {10, 20, 30, 40}; 
    vector<int>::iterator it = d.begin(); 
    it++; 
    cout << *it << endl;*/

}


int main(){ 

explainvector(); 
makingpair(); 
makingiterator(); 

}