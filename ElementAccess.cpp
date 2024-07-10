#include <iostream>
#include <vector>
#include <stdexcept> //std::out_of_range

class MyVector {
private:
    std::vector<int> data;
    
public:
    MyVector() {
        std::cout << "Constructor called" << std::endl;
    }

    ~MyVector() {
        std::cout << "Destructor called" << std::endl;
    }

    int& at(std::size_t index) {
        if (index >= data.size()) {
            throw std::out_of_range("Index out of range");
        }
        return data.at(index);
    }

    int& operator[](std::size_t index) {
        return data[index];
    }

    int& front() {
        return data.front();
    }

    int& back() {
        return data.back();
    }

    int* get_data() noexcept {
        return data.data();
    }

    void print() const {
        std::cout << "Vector elements: ";
        for (int num : data) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

    std::size_t size() const noexcept {
        return data.size(); 
    }

    void push_back(const int& value) {
        data.push_back(value);
    }


};

int main() {
    MyVector vec;
    vec.push_back(10); 
    vec.push_back(20); 
    vec.push_back(30); 

    std::cout << "Vector elements using operator[]: ";
    for (std::size_t i = 0; i < vec.size(); ++i) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "First element using front(): " << vec.front() << std::endl;
    std::cout << "Last element using back(): " << vec.back() << std::endl;

    std::cout << "Direct access to data: ";
    int* pData = vec.get_data();
    for (std::size_t i = 0; i < vec.size(); ++i) {
        std::cout << pData[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
