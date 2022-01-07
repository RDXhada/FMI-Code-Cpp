#include <iostream>
using namespace std;

int factorial(int number){
    if(number < 0){
        return -1;
    }
    else if(number == 0){
        return 1;
    }
    else {
        return number*factorial(number -1);
    }
}

int main(){
    int number;
    cin >> number;
    
    cout << factorial(number);
    
    return 0;
}
