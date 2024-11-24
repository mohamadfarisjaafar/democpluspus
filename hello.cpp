#include <iostream>

class Car
{
public:
    std::string brand;
    int year;

    void honk()
    {
        std::cout << "Beep Beep!" << std::endl;
    }
};

class MyClass {
public:
    MyClass() {  // Constructor
        std::cout << "Object created!" << std::endl;
    }
    ~MyClass() {  // Destructor
        std::cout << "Object destroyed!" << std::endl;
    }
};

int main()
{
    std::cout << "Hello, World!" << std::endl;
    MyClass myClass;
    Car myCar;
    myCar.brand = "Toyota";
    myCar.year = 2020;
    myCar.honk();
    return 0;
}
