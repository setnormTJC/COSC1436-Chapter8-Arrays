#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> firstTenEvens;  //how many numbers are in here at the moment? 

    cout << "The INITIAL size (AKA: number of elements in the vector (array): "
        << firstTenEvens.size() << endl; 

    for (int i = 1; i <= 5; i++)
    {
        firstTenEvens.push_back(2 * i); 
    }

    cout << "The newly-updated contents of the vector are: \n"; 
    for (int number : firstTenEvens) //"range-based" for loop
    {
        cout << number << endl; 
    }
    //adsfasdfasdf
    return 0;
}