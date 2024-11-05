// There are 3 types of initializations: Direct, uniform and structure binding.
#include <iostream>
#include <map>
#include <vector>
#include <tuple>

//This is direct initialization and it doesn't throw an error
// int main(){
//     int number1 = 20.0;
//     int number2(2.0);

//     std::cout<<number1<<std::endl<<number2<<std::endl;
// }

//Uniform initialization is stricter and involve curly braces

int main(){
    /* The line `int number1 = {20.0};` is using uniform initialization to initialize an integer
    variable `number1` with the value 20.0. */
    float number1 = {20.2};
    std::map<std::string, int> dict1{{"sam", 6}, {"ved", 40}};
    std::vector<int> vector1{1, 3, 5, 56};
    std::tuple<std::string, int, std::string> tuple1{"sam", 40, "age"};
    auto [name, age, parameter] = tuple1;
    std::cout<<name<<"\t"<<parameter<<std::endl;
    for (int item: vector1){
        std::cout<<item<<std::endl;
}
}

