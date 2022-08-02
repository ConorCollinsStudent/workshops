#include <iostream>

using namespace std;

int transform(int decimal){
 
    int rem;
    int bin=0;
    int product=1;
    
    while(decimal != 0){
        rem = decimal % 2;
        bin = bin + (rem*product);
        decimal = decimal/2;
        product *= 10;
    }
    
    return bin;
    
}

int main(){
    
    int decimal = 7;
    
    cout << transform(decimal);
    
}