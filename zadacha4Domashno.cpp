#include <iostream>
using namespace std;

int main() {
    
    int number,count; // x = number;
    cout << "Enter your number: ";
    cin >> number;
    count = number /10;
    
    
    
    
    for (int i = 0; i <= count; i++) {
        cout<<"*";
    }
    cout << number << endl;
    while(number != 1)
    {
        if (number % 2 == 0)
        {
            number /= 2;
        }
        else
        {
            number = number * 3 + 1; // X is replaced with number(from the formula)
        }
        count = number / 10;
        for (int i = 0; i <= count; i++) {
            cout<<"*";
        }
        cout<< number<< endl;
    }
    if(number <= 0){
        cout << "must be positive";
    }
    
    
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    
    int number,count; // x = number;
    cout << "Enter your number: ";
    cin >> number;
    count = number /10;
    
    
    
    for (int i = 0; i <= count; i++) {
        cout<<"*";
    }
    cout << number << endl;
    while(number != 1)
    {
        if (number % 2 == 0)
        {
            number /= 2;
        }
        else
        {
            number = number * 3 + 1; // X is replaced with number(from the formula)
        }
        count = number / 10;
        for (int i = 0; i <= count; i++) {
            cout<<"*";
        }
        cout<< number<< endl;
    }
    if(number <= 0){
        cout << "must be positive";
    }
    
    
    return 0;
}
