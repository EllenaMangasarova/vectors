#include <iostream>
#include <vector>
#include <algorithm> //std::copy

class MyVector {
public:
    MyVector() {
        std::cout << "Constructor called" << std::endl;
    }

    ~MyVector() {
        std::cout << "Destructor called" << std::endl;
    }

    MyVector& operator=(const MyVector& other) {
        std::cout << "Copy assignment operator called" << std::endl;
        if (this != &other) {
            data = other.data;
        }
        return *this;
    }

    MyVector& operator=(MyVector&& other) noexcept {
        std::cout << "Move assignment operator called" << std::endl;
        if (this != &other) {
            data = std::move(other.data);
            other.data.clear(); 
        }
        return *this;
    }

    void assign(const std::vector<int>& values) {
        std::cout << "Assign function called" << std::endl;
        data = values;
    }

    void print() const {
        std::cout << "Vector elements: ";
        for (int num : data) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

private:
    std::vector<int> data;
};

int main() {
    MyVector vec1; // Constructor

    std::vector<int> values = {10, 20, 30};
    vec1.assign(values); // Assign function 

    MyVector vec2;
    vec2 = vec1; // Copy assignment operator

    MyVector vec3;
    vec3 = std::move(vec1); // Move assignment operator

    std::cout << "Vector vec1: ";
    vec1.print(); // empty vector

    std::cout << "Vector vec2: ";
    vec2.print(); 

    std::cout << "Vector vec3: ";
    vec3.print(); 

    return 0;
}
