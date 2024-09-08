#include "vec.h"
#include <iostream>
using namespace std; 


int main(){
    int a; 
    vec<int> vec;

    vec.push_back(2);
    
    vec.push_back(4);
    
    vec.push_back(6);
    
    vec.push_back(100);
    
    vec.show();  
    vec.pop_back(); 
    vec.show(); 
    std::cout << "my vector size: " << vec.isEmpty() << std::endl; 
    return 0;
}
