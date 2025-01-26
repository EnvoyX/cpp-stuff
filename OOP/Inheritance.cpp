#include <iostream>


class Animal{
    public:
        bool alive = true;
    void eat(){
        std::cout << "This animal is eating\n";
    }
};

class Dog : public Animal{
    public:

    void bark(){
        std::cout << "the dog goes WOOF!\n";
    }
};

class Cat : public Animal{
    public:

    void meow(){
        std::cout << "The cat goes MEOWW!\n";
    }
};


int main(){

    Dog ScoobyDoo;
    Cat Garfield;


    std::cout << ScoobyDoo.alive << '\n';
    ScoobyDoo.eat();
    ScoobyDoo.bark();

    std::cout << Garfield.alive << '\n';
    Garfield.meow();


    return 0;
}