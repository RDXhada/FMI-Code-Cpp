#include <iostream>
using namespace std;

int main(){
    
    long EGN;
    cin >> EGN;
    cout << "The date is: ";
    
    int month = (EGN/1000000)%100;
    int zeromonth = month - 40;
    //days
    int days = (EGN/10000)%100;
    cout << days;
    //month
    cout << " ";
        switch(zeromonth){
            case 1: cout << "january"; break;
            case 2: cout << "fabruary"; break;
            case 3: cout << "march"; break;
            case 4: cout << "april"; break;
            case 5: cout << "may"; break;
            case 6: cout << "june"; break;
            case 7: cout << "july"; break;
            case 8: cout << "august"; break;
            case 9: cout << "sept"; break;
            case 10: cout << "oct"; break;
            case 11: cout << "nov"; break;
            case 12: cout << "december"; break;
            default: break;
        }
        switch(month){
            case 1: cout << "january"; break;
            case 2: cout << "fabruary"; break;
            case 3: cout << "march"; break;
            case 4: cout << "april"; break;
            case 5: cout << "may"; break;
            case 6: cout << "june"; break;
            case 7: cout << "july"; break;
            case 8: cout << "august"; break;
            case 9: cout << "sept"; break;
            case 10: cout << "oct"; break;
            case 11: cout << "nov"; break;
            case 12: cout << "december"; break;
            default: break;
        }
    cout << " ";
    //year
    if(EGN/100000000 < 9){
        cout << 2000 + EGN/100000000;
    }
    else
        cout << 1900 + EGN/100000000;
    cout << endl;
    
    //Pol/sex
    cout << endl;
    int sex = (EGN/10)%10;
    if(sex%2 == 0){
        cout << "male";
    }
    else {
        cout << "female";
    }
    }



