#include <stdio.h>
#include <cmath>
#include <iostream>

int squareN(int &num){
    return std::pow(num, 2);
}

int main(){
    int lValue = 2;
    auto four = squareN(lValue);
    std::cout<<four<<std::endl<<lValue<<std::endl;
    return 0;
}