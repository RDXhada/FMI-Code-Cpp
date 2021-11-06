
#include <iostream>
using namespace std;

int main()
{
   
    int number;
    cout << "Enter your number (must be less than 1000): ";
    cin >> number;
    
    if(number >=1 && number <= 1000)
{
    while (number == 1000){
        cout << "M";
        number -= 1000;
    }
    while (number >=900) {
            cout <<"CM";
            number -= 900;
    }
     while (number >=500) {
            cout <<"D";
            number -= 500;
    }
     while (number ==400) {
            cout <<"CD";
            number -= 400;
    }
     while (number >=100) {
            cout <<"C";
            number -= 100;
    }

     while (number >=90 && number<=99) {
            cout <<"XC";
            number -= 90;
    }
     while (number >=50) {
            cout <<"L";
            number -= 50;
    }
     while (number ==40) {
            cout <<"XL";
            number -= 40;
    }
     while (number >=10) {
            cout <<"X";
            number -= 10;
    }
      while (number ==9) {
            cout <<"IX";
            number -= 9;
    }
     while (number >=5) {
            cout <<"V";
            number -= 5;
    }
     while (number ==4) {
            cout <<"IV";
            number -= 4;
    }
     while (number >=1) {
            cout <<"I";
            number -=  1;
    }
    
    cout << endl; //line separation
}
    
else
{
    cout << "number is not between 1 and 1000!" << endl; // number is not between [1, 1000]
}
    return 0;
}
