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

    return 0;
}