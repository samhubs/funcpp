#include <iostream>
#include <utility>
#include <cmath>

using StudentStruct = std::pair<std::string, std::pair<double, double>>;

void printStudent(StudentStruct Student){
    std::cout << "Name: " << Student.first << std::endl;
    std::cout << "midterm: " << Student.second.first << std::endl;
    std::cout << "final: " << Student.second.second << std::endl;
    std::cout << "average: " << (Student.second.first + Student.second.second) / 2 << std::endl;
}

StudentStruct createStudent(std::string name, double midterm, double final){
    return {name, {midterm, final}};
}

int main(){
    auto s1 = createStudent("Alice", 90, 80);
    auto s2 = createStudent("Bob", 70, 60);
    auto s3 = createStudent("Charlie", 80, 90);
    printStudent(s1);
    printStudent(s2);
    printStudent(s3);
}