#include <iostream>

class Stove{
    private:
        int temperature = 25;
    public:

    // Getter
    int getTemperature(){
        return temperature;
    }

    // Setter
    void setTemperature(int suhu){
        if(suhu < 0){
            this->temperature = 0;
        }

        else if(suhu >= 100){
            this->temperature = 100;
        }
        else{
            this->temperature = suhu;
        }
    }



};


int main(){
    // Abstraction = hiding unnecessary data from outside a class
    // getter = function that makes a private attribute READABLE
    // setter = function that makes a private attribute WRITABLE
    Stove stove;

    // stove.temperature  = 1000;

    // std::cout << "The temperature setting is:  " << stove.temperature << '\n';
    std::cout << "The temperature setting is:  " << stove.getTemperature() << '\n';

    stove.setTemperature(50);
    std::cout << "The temperature now after setting it is:  " << stove.getTemperature() << '\n';

    stove.setTemperature(-10);
    std::cout << "The temperature now after setting it is:  " << stove.getTemperature() << '\n';

    stove.setTemperature(200);
    std::cout << "The temperature now after setting it is:  " << stove.getTemperature() << '\n';

    return 0;
}