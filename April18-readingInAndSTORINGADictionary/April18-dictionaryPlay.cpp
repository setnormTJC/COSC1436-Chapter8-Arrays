#include <iostream>
#include <vector>

#include<fstream> 

#include<string> 

using namespace std;

int main()
{
    vector<string> dictionaryWords; 

    //array (data structure) -> synonymous with "list" (colloquial) 
                    //AKA: vector in C++ (dynamic array) 

    string filePath= "C:\\Users\\Work\\Downloads\\popularWords.txt"; 

    ifstream dictionaryFile{ filePath };

    if (!dictionaryFile.is_open())
    {
        cout << "We couldn't find a file named: " << filePath << endl; 
        return -3; 
    }
    
    string currentWord;
    //IF we find the file, read it in and STORE (hold onto) all of the words 
    while (!dictionaryFile.eof()) //recall: eof means end of file 
    {

        getline(dictionaryFile, currentWord); 
        //cout << currentWord << endl; 
        dictionaryWords.push_back(currentWord); //stores all 50K words in the vector (array)
    }
    //don't confuse physics vector (a, v, x) with C++ vector 
    
    for (string word : dictionaryWords)
    {
        if (word[0] == 'z' && word.length() < 5)
        {
            cout << word << endl; 
        }
    }


    //cout << "What is this? " << currentWord << endl;
    return 0;
}