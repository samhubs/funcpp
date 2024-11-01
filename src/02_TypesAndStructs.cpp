#include <iostream>
#include <utility>
#include <cmath>

// int main(){
//     std::cout << "Hello, World!" << std::endl;
//     for (char ch : "CS106L"){
//         std::cout << ch << std::endl;
//     }
// }
using zeros = std::pair<double, double>;
using solution = std::pair<bool, zeros>;

solution solveQuadratic(double a, double b, double c){
    double discriminant = b*b - 4*a*c;
    if (discriminant < 0){
        return {false, {0, 0}};
    }
    double root1 = (-b + std::sqrt(discriminant)) / (2*a);
    double root2 = (-b - std::sqrt(discriminant)) / (2*a);
    return {true, {root1, root2}};
}

int main(){
    auto s = solveQuadratic(1, 2, 3);
    if (s.first){
        std::cout << "Roots are: " << s.second.first << " and " << s.second.second << std::endl;
    } else {
        std::cout << "No real roots" << std::endl;
    }
    return 0;

}