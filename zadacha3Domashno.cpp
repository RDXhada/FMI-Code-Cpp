#include <iostream>
using namespace std;


int main()
{
    int number;
    cout << "Enter a number(must be between 100 and 999): ";
    cin >> number;
    
    int firstDigit = number/100;
    int secondDigit = (number /10) %10;
    int thirdDigit = number % 10;
    
    int Rows = firstDigit + secondDigit; // N
    int Columns = firstDigit + thirdDigit; // M
    
    
    if (number>=100  && number <=999) // the interval [100,999]
    {
    for (int i = 0; i < Rows; i++)
    {
        for (int i = 0; i < Columns; i++)
        {
            if (number % 5 == 0)
            {
                number -= firstDigit;
            }
            else if (number% 3 == 0)
            {
                number -= secondDigit;
            }
            else
            {
                number += thirdDigit;
            }
            
            cout << number << " ";
        }
        
        cout << endl;
    }
    }
    else {
        cout << "Number is not between the open interval of 100 and 999" << endl;
        //number is not between the open interval [100, 999]
    }
    
    return 0;
}


