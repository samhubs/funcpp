#include <iostream>
#include <fstream>

int main(){
    std::string userline;
    std::ofstream file("example.txt", std::ios::app);
    std::getline(std::cin, userline);
    if (file.is_open()) {
        file << userline;
        file.close();
    }

}