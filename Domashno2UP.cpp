
//zadacha 1 - Dzhem Shenolov 


#include <iostream>
using namespace std;


//Days Function
void dayCases(int dayOfYear, int monthOfYear, int year){
    bool isLeap = (year%4 == 0&& year %100 !=0 )|| year % 400 == 0;
    // Basically checking the date and if the year is leap or not, depending on //the output, numbers 0 to 6, it corresponds to the days Monday-Sunday.
    //starting indexes for the months:
    int arrForDays[] = { 0, 3, 2, 5, 0, 3,
        5, 1, 4, 6, 2, 4 };
    //calculate year for the formula we will use:
    year -= monthOfYear < 3;
    // formula:
    int actualDay = (year + year / 4 - year / 100 + year / 400 + arrForDays[monthOfYear - 1] + dayOfYear) % 7;
    //checking last day of the specific month and if we are at
    // the last day, just start with 1 and then we further up with the others
    if (dayOfYear == 28 && monthOfYear == 2 && !isLeap){
        cout << "1";
    }
    else if(dayOfYear == 29 && monthOfYear == 2 && isLeap){
        cout << "1";
    }
    else if(dayOfYear == 30 && (monthOfYear == 4 || monthOfYear == 6 || monthOfYear == 9 || monthOfYear == 11)){
        cout << "1";
    }
    else if(dayOfYear == 31 && (monthOfYear == 1 || monthOfYear == 3 || monthOfYear == 5 || monthOfYear == 7 || monthOfYear == 8 || monthOfYear == 10 || monthOfYear == 12)){
        cout << "1";
    }
    // Here is for +1 for the day
    else if(dayOfYear <= 28 && monthOfYear == 2 && isLeap){
        cout << dayOfYear + 1;
    }
    else if(dayOfYear < 30 && (monthOfYear == 4 || monthOfYear == 6 || monthOfYear == 9 || monthOfYear == 11)){
        cout << dayOfYear + 1;
    }
    else if(dayOfYear < 31 && (monthOfYear == 1 || monthOfYear == 3 || monthOfYear == 5 || monthOfYear == 7 || monthOfYear == 8 || monthOfYear == 10 || monthOfYear == 12)){
        cout << dayOfYear + 1;
    }
    else {
        cout << "invalid day";
    }
    //could have done all these functions(at the top) on one place but i thought
    // it is better to separate them in different segments
    cout << ",";
    
    //output of "actualDay" gives us the actual/specific date from
    //Monday to Sunday corresponding to numbers 0 to 6
        if(dayOfYear >= 1 && dayOfYear <= 31){
    switch(actualDay){
        case 0: cout << "Monday"; break;
        case 1: cout << "Tuesday"; break;
        case 2: cout << "Wednesday"; break;
        case 3: cout << "Thursday"; break;
        case 4: cout << "Friday"; break;
        case 5: cout << "Saturday"; break;
        case 6: cout << "Sunday"; break;
        default: cout << "Invalid day"; break;
    }
    }
        else {
            cout << "invalid day";
        }
    //sometimes it might output 2 times "invalid day" due to checking two stuff
    // one is leap year/February and the other one is the possible interval (day cant be
    // negative and cant be more than 28||29||30||31
}

//Months Function
void monthCases(int dayOfYear, int monthOfYear, int year){
    //again check if year is leap
    // didn't do a "const bool isLeap = -||-" just because I have to put on other constants
    // for the day, month, year and etc
    bool isLeap = (year%4 == 0 && year%100 != 0) || (year%400 == 0);
    
    // if we are at the last day of the month, month + 1
    // example 28 feb -> 1 March(non leap)
    if (dayOfYear == 28 && monthOfYear == 2&& !isLeap){
        monthOfYear++;
    }
    else if(dayOfYear == 29 && monthOfYear == 2 && isLeap){
        monthOfYear++;
    }
    else if(dayOfYear == 30 && (monthOfYear == 4 || monthOfYear == 6 || monthOfYear == 11 || monthOfYear == 9)){
        monthOfYear++;
    }
    else if(dayOfYear == 31 && (monthOfYear == 1 || monthOfYear == 3 || monthOfYear == 5 || monthOfYear == 7 || monthOfYear == 8 || monthOfYear == 10)){
        monthOfYear++;
    }
      
    //The months:
    if(monthOfYear >= 1 && monthOfYear <= 11 && dayOfYear <= 30 && monthOfYear !=2)
    switch(monthOfYear){
        case 4: cout << "April"; break;
        case 9: cout << "September"; break;
        case 11: cout << "November"; break;
            
    }
    if(monthOfYear == 12 && dayOfYear == 31){
            cout << "January";
    }
    else if(monthOfYear == 12 && dayOfYear < 31){
        cout << "December";
    }
    // 2 cases for February !leap and leap
    else if(monthOfYear == 2 && dayOfYear <= 28){
            cout << "February";
    }
    else if(dayOfYear == 29 && monthOfYear == 2 && isLeap){
        cout << "February";
    }
    else if(dayOfYear <= 31){
        switch(monthOfYear){
            case 1: cout << "January"; break;
            case 2: cout << "February"; break;
            case 3: cout << "March"; break;
            case 4: cout << "April"; break;
            case 5: cout << "May"; break;
            case 6: cout << "June"; break;
            case 7: cout << "July"; break;
            case 8: cout << "August"; break;
            case 9: cout << "September"; break;
            case 10: cout << "October"; break;
            case 11: cout << "November"; break;
            case 12: cout << "December"; break;
        }
    }
    else if(monthOfYear < 1 || monthOfYear > 12){
        cout << "Invalid month";
    }

}
//this is the year, which is basically the open interval between 1900 and 2100
void yearCount(int dayOfYear, int monthOfYear, int year){
    if(year >= 1900 && year <= 2100){
    if(dayOfYear == 31 && monthOfYear == 12){
        cout << year + 1;
    }
    else {
        cout << year;
    }
    }
    else {
        cout << "Invalid year, must be between 1900 and 2100";
    }
}

//main func
int main(){
    int dayOfYear;
    int monthOfYear;
    int year;
    cin >> dayOfYear >> monthOfYear  >> year;
    dayCases(dayOfYear, monthOfYear, year);
    cout << ",";
    monthCases(dayOfYear, monthOfYear, year);
    cout << ",";
    yearCount(dayOfYear, monthOfYear, year);
    
    
    return 0;
}


//-------------------------------------------exercise separation

//zadacha 2 - Dzhem Shenolov 

#include <iostream>
using namespace std;

bool evenDigit(long long num)
{
    //all the digits
    int digits = 0;
    //check if its an even number of digits
    while (num)
    {
        num = num / 10;
        digits++;
    }
    return digits % 2 == 0;
}

long reverseNumber(long long num){
    long secondNumber = 0;
    //if the number of digits are not even
    if (!evenDigit(num)){
       secondNumber += num % 10;
    num /= 10;
    }
    while (num){
        secondNumber = (secondNumber * 10 + (num % 100) / 10) * 10 + num % 10;
        num /= 100;
    }
    return secondNumber;
}

void outSymbols(long long input){
    long number = reverseNumber(input);
    int arr[2];
    
    while (number){
        //if the pair of numbers we get is less than 26, otherwise divide the pair of numbers
    if (number % 100 <= 26){
        cout << (char)('a' + (number % 100) - 1);
    }
    else{
       arr[0] = number % 100 / 10;
       arr[1] = number % 10;
            
     for (int i = 0; i < 2; i++){
          if (arr[i] == 0){
             cout << '.';
          }
          else
          {
        cout << (char)('a' + (arr[i]) - 1);
        }
      }
    }
        number /= 100;
  }
}

int main()
{
    long input;
    cout << "Please enter your number: ";
    cin >> input;
    if(input == 69){
        cout << "You filthy!" << endl;
        cout << "Here is your output anyway: ";
        outSymbols(input);
        cout << endl;
    }
    else if(input >= 0){
    outSymbols(input);
    }
    else if('z' >= input && input <= 'a'){
        cout << "why do you input a letter?";
    }
    else {
        cout << "must be positive or 0";
    }


    return 0;
}


//-------------------------------------------



//zadacha 3 - Dzhem Shenolov 


#include <iostream>
using namespace std;
void twitterMessage(char* str);
//I put the  twitter function on top and main function on top

int main()
{
    char tweet[1000];
    cout << "Please write your tweet:";
    cin.getline(tweet, 1000);
    cout << endl;
    twitterMessage(tweet);

    return 0;
}

void twitterMessage(char* tweet)
{
    int numberOfCharacters = 0;
    int num = 0;
    cout << "Traicho tweeted:";
    while (tweet[num] != '\0')
    {
    if(numberOfCharacters >= 280)
    {
        numberOfCharacters = 0;
            cout << "\n";
        for (int i = 0; i <= num / 280; i++){
            // i think the lines("-") must be 20?
                cout << "----------"; // here are 10
            //from the for loop they become 20 "-"
            //then 40 "-"
        }
            cout << "Traicho tweeted:";
    }
        //up to 999 characters
        if(num > 1000)
        {
        cout << "you got an error G";
        }
        cout << tweet[num];
        num++;
        numberOfCharacters++;
    }
}


//-------------------------------------------


//zadacha 3 with string - Dzhem Shenolov


#include <iostream>
#include <string>
using namespace std;

int main()
{
    //initialise the string
    string tweet;
    cout << "Please write your tweet:";
    getline (cin, tweet);
    if(tweet.length() <= 280){
        //280 words max
        int len = 280;
        cout << "Traicho tweeted:";
        string_view first(tweet);
        cout << first.substr(0, len);
        cout << endl;
    }
    
    // Disclaimer: ako se kopira teskta(ot zadachata i se postavi 2 pyti neshto ne stava)(ne moga da si go obqsnq)
    else if(tweet.length() > 280 && tweet.length() <= 560){
        //280 words
        int len = 280;
        cout << "Traicho tweeted:";
        string_view first(tweet);
        cout << first.substr(0, len);
        cout << endl;
        //560 words
        int secondlen = 280;
        cout << "---------Traicho tweeted:";
        string_view second(tweet);
        cout << second.substr(280, secondlen);
        cout << endl;
    }
    else if(tweet.length() > 560 && tweet.length() <= 1000){
        //280 words
        int len = 280;
        cout << "Traicho tweeted:";
        string_view first(tweet);
        cout << first.substr(0, len);
        cout << endl;
        //560 words
        int secondlen = 280;
        cout << "---------Traicho tweeted:";
        string_view second(tweet);
        cout << second.substr(280, secondlen);
        cout << endl;
        //840 words
        int thirdlen = 280;
        cout << "-------Traicho tweeted:";
        string_view third(tweet);
        cout << third.substr(560, thirdlen);
        cout << endl;
        //more than 840
        int fourthlen = 280;
        cout << "-------Traicho tweeted:";
        string_view fourth(tweet);
        cout << fourth.substr(840, fourthlen);
        cout << endl;
    }
    else if(tweet.length() > 1000){
        cout << "Must be less than 1000 characters!";
    }
    else {
        cout << "error";
    }

    
    return 0;
}

//-------------------------------------------


//zadacha 4 - Dzhem Shenolov 8MI0700009



#include <iostream>
using namespace std;
const int SIZE = 255;


//input the matrix function
void inputMatrix(int rows, int columns, int matrix[][SIZE]){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            cin >> matrix[i][j];
        }
    }
}
//output
void outputMatrix(int rows, int columns, int matrix[][SIZE]){
    int replaceMatrix[SIZE][SIZE];
    cout << endl;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            replaceMatrix[i][j] =  matrix[(rows - (j % rows + 1)+ i)%rows][j];
            cout << replaceMatrix[i][j] << ' ';
        }
        cout << endl;
    }
}
int main(){
    //initialise rows and columns
    int rows;
    int columns;
    cout << "Enter rows: ";
    cin >> rows;
    cout << endl;
    cout << "Enter columns: ";
    cin >> columns;
    
    //array for the matrix
    int matrix[SIZE][SIZE];
    //call the functions
    inputMatrix(rows, columns, matrix);
    outputMatrix(rows, columns, matrix);
    cout << "nice! ";


    return 0;
}



