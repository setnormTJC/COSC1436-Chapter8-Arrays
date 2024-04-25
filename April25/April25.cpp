#include <iostream>
#include <vector>

using namespace std;

/*this is our first algorithm*/
int findMax(vector<int> dynamicListOfNumbers)
{
    int largestNumberSoFar = dynamicListOfNumbers[0]; 
    //cout << "Largest number so far: " << largestNumberSoFar << endl; 

    //insert loop ....

    for (int i = 1; i < dynamicListOfNumbers.size(); i++)
    {
        if (dynamicListOfNumbers[i] > largestNumberSoFar) // > and < are "comparators"
        {
            largestNumberSoFar = dynamicListOfNumbers[i];
            cout << "UPDATED the value of the largest number!\n";
        }
    }

    return largestNumberSoFar; 

}

/*this is our first algorithm*/
int findMin(vector<int> dynamicListOfNumbers)
{
    int smallestNumberSoFar = dynamicListOfNumbers[0];
    //cout << "Largest number so far: " << largestNumberSoFar << endl; 

    //insert loop ....

    for (int i = 1; i < dynamicListOfNumbers.size(); i++)
    {
        if (dynamicListOfNumbers[i] < smallestNumberSoFar)
        {
            cout << "UPDATED the value of the SMALLEST number from " << smallestNumberSoFar
                << " to " << dynamicListOfNumbers[i] << endl;
            smallestNumberSoFar = dynamicListOfNumbers[i];

        }
    }

    return smallestNumberSoFar;

}


vector<int> returnListOfNRandomNums(int N)
{
    vector<int> randomNums; 

    for (int i = 0; i < N; i++)
    {
        randomNums.push_back(rand() % N);
    }

    return randomNums; 
}

void printVectorOfNums(vector<int> listOfNums)
{
    for (int num : listOfNums)
    {
        cout << num << " ";
    }
    cout << "\n";

}

int main()
{
    vector<int> randomNums = returnListOfNRandomNums(100); 
    printVectorOfNums(randomNums); 


    //int staticListOfNumbers[4] = {11, 2223, 39464, 4}; //memory-conservative 

    //vector<int> dynamicListOfNumbers = { 8, 6, 5, 7, -88, 9, 10, 64846 }; //convenient 
    //                                //(but it requires more space (in RAM))

    //int SMALLestNumber = findMin(dynamicListOfNumbers); 
    //cout << "The SMALLEST number is: " << SMALLestNumber << endl; 

                                   //cout << findMax(dynamicListOfNumbers) << endl; 
    //std::min_element()

    //char testAnswers =
    //{
    //    'B',
    //    'B',
    //    'C',
    //    'A',
    //    'D'
    //}; //"C-style" arrays

    ////ArrayList is a dynamic array in Java -> vector in C++

    //char copyOfTestAnswers[5];
    ////don't want to retype - just assign value of testAnswers to copy?
    ////copyOfTestAnswers = testAnswers;

    //for (int i = 0; i < 5; i++)
    //{
    //    copyOfTestAnswers[i] = testAnswers[i]; 
    //}

    //vector<char> dynamicTestAnswers = { 'a', 'b', 'c' };
    //vector<char> copy = dynamicTestAnswers; 


    //char testAnswers[5]; 

    //cout << "Enter the 5 test answers ...\n";
    //
    ////cin >> testAnswers; //NO!

    //for (int i = 0; i < 5; i++)
    //{
    //    cin >> testAnswers[i];
    //    cout << "Answer number " << i << " is " << testAnswers[i] << endl;
    //}


    return 0;
}