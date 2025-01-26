#include <iostream>

class Shape{
    public:
        double area;
        double volume;
};

class Cube : public Shape{
    public:
        double side; 
    Cube(double sisi){
        this->side  = sisi;
        this->area = sisi * sisi * 6;
        this->volume = sisi * sisi * sisi;
    }
};


class Sphere : public Shape{
    public:
        double radius;
    Sphere(double jari_jari){
        this->radius = jari_jari;
        this->area = 4 * 3.14159 * (radius * radius) ;
        this->volume = (4/3.0) * 3.1459 * (radius * radius * radius);
    }
};


int main(){
    Cube cube(10);
    Sphere sphere(4);
    

    std::cout << "Cube: \n";
    std::cout << "Area: " << cube.area << "cm\n";
    std::cout << "Volume: " << cube.volume << "cm\n";

    std::cout << "Sphere: \n";
    std::cout << "Area: " << sphere.area << "cm\n";
    std::cout << "Volume: " << sphere.volume << "cm\n";

    return 0;
}