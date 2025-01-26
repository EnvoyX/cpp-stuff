#include <iostream>


class Student{
    public:
        std::string name;
        int age;
        double gpa;
    // Constructor 👇
    Student(std::string name, int age, double gpa){
        this->name = name;
        this->age = age;
        this->gpa = gpa;
    }
};

class Mahasiswa{
    public:
        std::string name;
        int age;
        double gpa;
    // Constructor 👇 can have different name
    Mahasiswa(std::string nama, int umur, double ip){
        name = nama;
        age = umur;
        gpa = ip;
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
    Car(std::string make, std::string model, int year, std::string color){
        this->make = make;
        this->model = model;
        this->year = year;
        this->color = color;
    }
};




int main(){

    // Constructor = special method that is automatically called when an object is instantiated
    //               useful for assigning values to attributes as arguments.


    Student Siswa1("Andi Jafar", 20, 3.5);

    std::cout << Siswa1.name << "\n";
    std::cout << Siswa1.age << "\n";
    std::cout << Siswa1.gpa<< "\n";

    Mahasiswa mahasiswa1("Momo Ayase", 18, 3.9);

    std::cout << mahasiswa1.name << "\n";
    std::cout << mahasiswa1.age << "\n";
    std::cout << mahasiswa1.gpa<< "\n";

    Car car1("Chevy", "Corvette", 2022, "blue");
    Car car2("Ford", "Mustang", 2023, "red");

    std::cout << car1.make << '\n';
    std::cout << car1.model << '\n';
    std::cout << car1.year << '\n';
    std::cout << car1.color << '\n';

    std::cout << car2.make << '\n';
    std::cout << car2.model << '\n';
    std::cout << car2.year << '\n';
    std::cout << car2.color << '\n';

    return 0;
}