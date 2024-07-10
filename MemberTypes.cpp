#include <iostream>
#include <vector>

int main() 
{
    std::vector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    std::cout << "Vector elements: ";
    for (std::size_t i = 0; i < vec.size(); ++i) { std::cout << vec[i] << " ";}
    
    std::cout << std::endl;

    vec.push_back(40);
    std::cout << "After adding 40: ";
    for (std::size_t i = 0; i < vec.size(); ++i) { std::cout << vec[i] << " ";}
    
    std::cout << std::endl;

    return 0;
}
