#include <iostream>
#include <math.h>

// void squareN(int& n){
//     n = std::pow(n, 2);
// }
// int main(){
//     int num = 2;
//     squareN(num);
//     std::cout<<num<<std::endl;

//     return 0;
// }

void shift(std::vector<std::pair<int, int>> &nums){
    for (auto &[num1, num2]: nums){
        num1++;
        num2++;
    }
}

int main(){
    std::vector<std::pair<int, int>> vectors{{2, 3}};
    shift(vectors);
    for (const auto &[num1, num2]: vectors){
        std::cout<<num1<<", "<<num2<<std::endl;
    }

}