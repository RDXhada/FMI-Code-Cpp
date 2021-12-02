#include <iostream>
using namespace std;

const int SIZE = 100;

void findSubstring()
{
    char one[SIZE];
    char two[SIZE];
    
    cin >> one;
    cin >> two;
    
    int counter = 0;
    for (size_t i = 0; two[i] != '\0'; i++)
    {
        counter++;
    }
    
    bool isFound = true;
    int foundCount = 0;
    for (size_t i = 0; one[i] != '\0'; i++)
    {
        for (size_t j = 0; j < counter; j++)
        {
            if (one[i + j] != two[j])
            {
                isFound = false;
            }
        }
        if (isFound)
        {
            foundCount++;
        }
        isFound = true;
    }
    
    cout << "Second word is found " << foundCount << " times in the first." << endl;
}

int main(){
    findSubstring();
    return 0;
}
//input: ababab
//output: 3 1
