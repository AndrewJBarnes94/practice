#include <iostream>

class Car {
private:
    std::string make;
    std::string model;
    int year;

public:
    Car(std::string make, std::string model, int year) {
        this->make = make;
        this->model = model;
        this->year = year;
    }

    void displayInfo() {
        std::cout << year << " " << make << " " << model << std::endl;
    }
};

int main() {
    Car car1("Toyota", "Prius", 2007);
    car1.displayInfo();
    
    return 0;
}