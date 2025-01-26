#include <iostream>


class Pizza{
    public:
        std::string topping1;
        std::string topping2;

    // Constructor Overloading:
     // Multiple Constructor with same name but different parameters;

    Pizza(std::string topping1){
        this->topping1 = topping1;
    }

    Pizza(std::string topping1, std::string topping2){
        this->topping1 = topping1;
        this->topping2 = topping2;
    }
};

int main(){

    Pizza pizza1("Pepperoni");
    Pizza pizza2("Mushroom", "Peppers");

    std::cout << pizza1.topping1 << '\n';
    std::cout << pizza2.topping1 << '\n';
    std::cout << pizza2.topping2 << '\n';

    return 0;
}