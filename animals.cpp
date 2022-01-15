#include <iostream>
#include <string>
using namespace std;

class Animal
{
    public:
    string name;
    int age;
    string food;
    string sound;

    void eat(){
        cin >> food;
        cout << "eating " << food << endl;
    }

    void playSound(){
        cin >> sound;
        cout << "playing " << sound << endl;
    }
};

class Dog extends Animal {
    override
    
};

int main(){
    Animal convat = new Dog();

    convat.eat();

    convat.playSound();

    return 0;
}