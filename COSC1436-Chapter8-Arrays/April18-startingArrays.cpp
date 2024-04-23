#include <iostream>
#include <vector>

using namespace std;

int main()
{
    //to do list, grocery list 
    // 
    //vector <//"open angle bracket" < close angle bracket > 
    
    string cStyleArray[10] = { "thing 1", "thing 2", "Dr.Seuss" }; //"old-school" C++ 
    //"static" arrays are FIXED in their size (the array above cannot grow beyond 10 elements)
    //static arrays are more "conservative" (they use the MINIMAL amount of memory) 

    //in programming fundamentals 3 (Data Structures and Algorithms) 
    //we'll talk about something called a linked list 

    vector<string> groceryList =
    {
        "hard-boiled eggs",
        "coffee",
        "cheddar cheese",
        "almonds", 
        "something I forgot"
    }; 
    cout << "SIZE of grocery list is : " << groceryList.size() << endl; 
    cout << "and the CONTENTS of that list IN REVERSE are: \n";
    for (int i = groceryList.size(); i >=0; i--)
    {
        cout << groceryList[i] << endl; 
    }



    //"dynamic" array is a list whose size can shrink and grow
    //"STATIC" arrays are FIXED in their size 

    return 0;
}