#include <iostream>

// Learm OOP in C++

class Human{
    public:
        std::string name;
        std::string occupation;
        int age;

        void eat(){
            std::cout << "This person is eating\n";
        }

        void drink(){
            std::cout << "This person is drinking\n";
        }

        void sleep(){
            std::cout << "This person is sleep\n";
        }
};

class Wyll{
    public:
        std::string name = "Wyll";
        std::string occupation = "Blade of Frontiers";
        int age = 30;

        void eat(){
            std::cout << "This person is eating\n";
        }

        void drink(){
            std::cout << "This person is drinking\n";
        }

        void sleep(){
            std::cout << "This person is sleep\n";
        }
        void attack(){
            std::cout << "This person is attacking\n";
        }
        void cast(){
            std::cout << "This person is casting magic\n";
        }
        void eldritch(){
            std::cout << "This person is casting eldritch blast\n";
        }
};


class Car{
    public:
        std::string make;
        std::string model;
        int year;
        std::string color;

        void accelerate(){
            std::cout << "You step on the gas!\n";
        }
        
        void brake(){
            std::cout << "You step on the brakes!\n";
        }
};



int main(){

// Object = a collection of attributes and methods
//          They can have characteristics and could perform action
//          Can be used to mimic real wold items (ex. Phone, Book, Dog)
//          Created from a class which acts as a "blue-print"



    Car car1;

    car1.make = "Ford";
    car1.model = "Mustang";
    car1.color = "Silver";
    car1.year = 2023;

    std::cout << car1.make << '\n';
    std::cout << car1.model << '\n';
    std::cout << car1.color << '\n';
    std::cout << car1.year << '\n';

    car1.accelerate();
    car1.brake();


    Human NPC;

    NPC.name = "Andi";
    NPC.occupation = "Student";
    NPC.age = 25;

    std::cout << NPC.name << '\n';
    std::cout << NPC.occupation << '\n';
    std::cout << NPC.age << '\n';
     
    NPC.eat();
    NPC.drink();
    NPC.sleep();


    Human NPC1;

    NPC1.name = "Jafar";
    NPC1.occupation = "Scientist";
    NPC1.age = 20;

    std::cout << NPC1.name << '\n';
    std::cout << NPC1.occupation << '\n';
    std::cout << NPC1.age << '\n';
     
    NPC1.eat();
    NPC1.drink();
    NPC1.sleep();


    Wyll wyll;
  
    std::cout << wyll.name << '\n';
    std::cout << wyll.occupation << '\n';
    std::cout << wyll.age << '\n';

    wyll.attack();
    wyll.cast();
    wyll.eldritch();


    return 0;
}