#include <iostream>
using namespace std;

void Animal(string name, string breed, int age){
    cout << "his name is: " << name << endl;
    cout << "he is a:  " << breed << endl;
    cout << "his age is " << age << endl;
}

int main(){
    string name, breed;
    int age;
    cout << "What is his name?" << endl;
    cin >> name;
    cout << "What breed is the animal?" << endl;
    cin >> breed;
    cout << "How old is your animal?" << endl;
    cin >> age;
    
    
    Animal(name, breed, age);
    
    
}
