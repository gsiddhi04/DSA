#include <iostream>
#include <cstring>
using namespace std;

class Hero{
    //Access can be public, private, protected.
    public: //To make it private or protected write - private: or protected:
    //Properties
    int Health;
    
    char *name;
    char Level;
    static int timeToComplete;
    //Constructor
    Hero(){
        cout << "Constructor called" << endl;
        name = new char[100];
    }
    //Parametrised Constructor
    Hero(int health,char level){
        
        this -> Health = health;
        this -> Level = level;
    }
    // Copy Constructor
    Hero(Hero& temp){       //Always pass by reference
        char *ch = new char[strlen(temp.name)+1];    // deep copy
        strcpy(ch,temp.name);
        this -> name = ch;
        this -> Health = temp.Health;
        this -> Level = temp.Level;
    }
    //Behaviour
    void print(){
        cout << endl;
        cout << "[Name : " << this -> name << ", ";
        cout << "Health : " << this -> Health << ", ";
        cout << "Level : " << this -> Level << "]" << endl;
    }
    int getHealth(){
        return Health;
    }
    char getLevel(){
        return Level;
    }
    void setHealth(int h){
        Health = h;
    }
    void setLevel(char ch){
        Level = ch;
    }
    void setName(char name[]){
        strcpy(this -> name, name);
    }

    //Destructor
    // ~Hero(){
    //     cout << "Destructor called" << endl;
    // }

    static int random(){
        return timeToComplete;
    }

};

int Hero::timeToComplete =5;

int main(){

    cout << Hero::timeToComplete << endl;
    cout << Hero::random() << endl;

    Hero a;
    cout << a.timeToComplete << endl;

    Hero b;
    b.timeToComplete = 10;
    cout << Hero::timeToComplete << endl;
    cout << a.timeToComplete << endl;
    cout << b.timeToComplete << endl;

    // Hero a;

    // Hero (*b) = new Hero;
    // delete b;

    // Hero hero1;

    // hero1.setHealth(70);
    // hero1.setLevel('D');
    // char name[7] = "Siddhi";
    // hero1.setName(name);

    // hero1.print();

    // Hero hero2(hero1);
    // hero2.print();

    // hero1.name[0] = 'R';
    // hero1.print();

    // hero2.print();

    // hero1 = hero2; //Copy Assignment Operator

    // Hero Ayush;  //creation of object
    // Ayush.Health = 20;
    // Ayush.Level = 'B';

    // Hero temp(322,'C');  // statically
    // temp.print();

    // Hero (*check) = new Hero(45,'A');  // dynamically
    // check -> print();

    // //copy constructor
    // Hero Suresh(70,'C');
    // Hero Ritesh(Suresh);

    // cout<<"The health : " << Ayush.Health << endl;
    // cout<<"The level : " << Ayush.Level << endl;

    return 0;
}