#include <iostream>
#include <vector>

#include<iomanip>

using namespace std;

void print2DArray(vector<vector<int>> table)
{
    //for (int row = 0; row < theGrid.size(); row++)
    //{
    //    vector<int> currentRow = theGrid[row];
    //    for (int column = 0; column < currentRow.size(); column++)
    //    {
    //        cout << currentRow[column] << " ";
    //    }
    //    cout << "\n";
    //}

    //easier-to-read alternative printing of grid (using the "range-based" for loop)
    for (vector<int> row : table)
    {
        for (int num : row)
        {
            cout << num << " ";
        }
        cout << "\n";
    }
}


void printBingoCard(vector<vector<string>> bingoCard)
{

    cout << left 
        << setw(8) << "B" 
        << setw(8) << "I"
        << setw(8) << "N"
        << setw(8) << "G"
        << setw(8) << "O" 
        << "\n"; 
        //"column headers"
    for (vector<string> row : bingoCard)
    {
        for (string bingoBall : row)
        {
            cout << left << setw(8) << bingoBall;
        }
        cout << "\n";
    }
}


int main()
{
    //vector<vector<int>> multiplicationTable; 


    //vector<int> row1 = { 1, 2, 3 }; 
    //vector<int> row2 = { 2, 4, 6 };
    //vector<int> row3 = { 3, 6, 9 };

    //multiplicationTable.push_back(row1); 
    //multiplicationTable.push_back(row2);
    //multiplicationTable.push_back(row3);

    //print2DArray(multiplicationTable); 

    //"B12", "I30"
    vector<vector<string>> bingoCard =
    {
        {"B12", "I25", "N41", "G51", "O63"},
        {"B3", "I30"},
        {"", ""},
        {},
        {"B10", "I17", "N45"}
    };

    cout << "the intial state of the card :\n"; 

    printBingoCard(bingoCard); 

    cout << "The ball with the value B12 rolled out of the ball dispenser!\n"; 
    bingoCard[0][0] = "*"; 

    cout << "\n\nAfter gettting one of our numbers called - card is: \n"; 
    printBingoCard(bingoCard); 

    //let's get into determination of "win conditions" next time ... 
    //checkIfColumnWin(bingoCard); 

























    return 0;
}