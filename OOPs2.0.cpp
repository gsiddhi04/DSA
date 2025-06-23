#include <iostream>
#include <cstring>
using namespace std;

//Inhertiance

class Human{
    public:
    int height;
    int weight;
    int age;

    int getAge(){
        return this -> age;
    }

    void setWeight(int w){
        this -> weight = w;
    }

};

class male::public Human{

    public:
    string color;

    void sleeping(){
        cout << "male is sleeping" << endl;
    }
};

class animal::public Human, public male{
    public:

    void bark(){
        cout << "Barking" << endl;
    }
};

int main(){
    animal obj1;
    obj1.sleeping();
}