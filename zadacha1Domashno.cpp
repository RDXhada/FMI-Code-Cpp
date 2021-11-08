#include <iostream>
using namespace std;
int main()
{
    int FirstTone, SecondTone, firstOct, secondOct;
    cout << "Insert first tone: ";
    cin >> FirstTone;
    cout << "Insert second tone: ";
    cin >> SecondTone;
    cout << "Insert the first interval/octave: ";
    cin >> firstOct; // first Octave
    cout << "Insert the second interval/octave: ";
    cin >> secondOct; //second Octave
    
    int difference;  // the difference is the interval
    
    int fistToneAlignment = FirstTone;
    int secondToneAlignment = SecondTone;

    
     
    for (int i = 1; i < firstOct; i++) fistToneAlignment += 7;
    for (int i = 1; i < secondOct; i++) secondToneAlignment += 7;
    
    if (fistToneAlignment >= secondToneAlignment) difference = fistToneAlignment - secondToneAlignment;
    else difference = secondToneAlignment - fistToneAlignment;
    
    if (difference > 8)
    {
        if (FirstTone > SecondTone) difference = FirstTone - SecondTone;
        else difference = SecondTone - FirstTone;
    }
    
    
    switch (difference)
    {
        case 0:
            cout << "Prima";
            break;
        case 1:
            cout << "Sekunda";
            break;
        case 2:
            cout << "Terca";
            break;
        case 3:
            cout << "Kvarta";
            break;
        case 4:
            cout << "Kvinta";
            break;
        case 5:
            cout << "Seksta";
            break;
        case 6:
            cout << "Septima";
            break;
        case 7:
            cout << "Oktava";
            break;
        default:
            cout << difference;
            break;
    }
    
    
    return 0;
}
