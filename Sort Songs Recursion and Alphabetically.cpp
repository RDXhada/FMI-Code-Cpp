#include <iostream>
using namespace std;

const int SIZE = 255;

void recursive(char *songs);
char* longestSong(char* songs);
void extractLetters(char *songs);

//main func
int main(){
    char songs[] = "Zitti e buoni - Maneskin; Rock you like a hurricane - Scorpions; Ale ale - Skandau; Tova sam az - Atanas Kolev; Can't let you go - Rainbow; Dneven red - RDMK; Cvete moe - Ku ku band";
    
    
    char *song = longestSong(songs);
    cout << endl;
    recursive(songs);
    cout << endl;
    cout << "-This is the longest song: ";
    cout << song << endl;
    extractLetters(songs);
    
    return 0;
}
//recursive function to separate the songs on given ";"
void recursive(char *songs)
{
    if(*songs == '\0')
    {
        return;
    }
    cout << *songs;
    if(*songs == ';')
    {
        cout << endl;
    }
    
    
    return recursive(songs+1);
}
//function to find the longest song of all
char* longestSong(char* songs)
{
    char* songPtr = songs;
    int index = 0;
    int longest = 0;
    int currentLength = 0;
    int longestIndex = 0;
    while (*songs != '\0')
    {
        if (*songs == ';')
        {
            if (longest < currentLength)
            {
                longest = currentLength;
                longestIndex = index;
            }
            index++;
            currentLength = 0;
        }
        currentLength++;
        
        songs++;
    }
    char* longestSong = new char[longest + 1];
    index = 0;
    int songIndex = 0;
    songs = songPtr;
    while (*songs != '\0')
    {
        if (index == longestIndex)
        {
            longestSong[songIndex] = *songs;
            songIndex++;
        }
        if (*songs == ';')
        {
            index++;
        }
        
        songs++;
    }
    longestSong[songIndex] = '\0';
    return longestSong;
}
//function to sort the characters of the longest song alphabetically
void extractLetters(char *songs)
{
    char *maxSong = longestSong(songs);
    int charCount[SIZE] = {0};
    int i = 0;
    int ascii = 0;
    int check = 0;
    while(maxSong[i]!='\0')
    {
        if(maxSong[i]>='A' && maxSong[i]<='Z')
        {
            ascii = maxSong[i];
            ascii = ascii+32;
            maxSong[i] = ascii;
            check++;
        }
        else
            maxSong[i] = maxSong[i];
        i++;
    }
    for (int i=0; i <= strlen(maxSong); i++){
        charCount[maxSong[i]-'a']++;
    }
    for (int i=0;i<SIZE;i++){
        for (int j=0;j<charCount[i];j++){
            cout << (char)('a'+i);
        }
    }
}

