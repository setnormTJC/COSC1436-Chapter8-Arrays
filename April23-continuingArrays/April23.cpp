#include <iostream>
#include <vector>


using namespace std; 

int main()
{
    //{
    //    std::vector<std::string> list_of_names =
    //    {
    //        "Alice123",
    //        "Bob",
    //        "Carol",
    //        "Darth"
    //    }; //"readable"

    //    list_of_names[2] = "asdfasdfasdf"; //updates the value of the 3rd element in the list
    //    //element does not mean hydrogen, helium 
    //    string fourthName = list_of_names[3];

    //    cout << "Fourth name is: " << fourthName << endl;
    //    cout << "LENGTH of fourth name (number of characters): " << fourthName.length() << endl;


    //    cout << "alice123 has length = " << list_of_names[0].length() << endl;

    //    //list_of_names.push_back("Eve");
    //    //list_of_names.push_back("Frank");

    //    //list

    //    //list_of_names.pop_back();  //What does THIS do? 
    //    //cout << "After pushing two more names into the list, the contents are: \n";
    //    for (string name : list_of_names)
    //    {
    //        cout << name << endl;
    //    }

    //    ////the equivalent STATIC array of names: 
    //    ////dataType listName[fixedNumberOfElements];
    //    //string namesList[4] =
    //    //{
    //    //    "Seth",
    //    //    "Joe",
    //    //    "Candice",
    //    //    "Jill"
    //    //}; 

    //    //cout << "Names list at index 2 = " << namesList[2] << endl;




    //    //.size() << std::endl; 
    //}


    //int otherList[2];
    //int a = 2312; 

    cout << "How many cookies do you want to make? \n"; 
    int numberOfCookies; 
    cin >> numberOfCookies; 

    vector<string> cookiesList; 
    for (int i = 0; i < numberOfCookies; i++)
    {
        cout << "Enter the type (ex: oatmeal raisin) of cookie you made:\n"; 
        string currentCookieName; 
        cin >> currentCookieName; 

        cookiesList.push_back(currentCookieName);
    }
    //string cookiesList[numberOfCookies]; 


    //int fibonacci[5];
    //fibonacci[0] = 0;
    //fibonacci[1] = 1; //conventional starting values are 0 and 1
   
    //fibonacci[2] = fibonacci[0] + fibonacci[1]; //result is 1
    //cout << "Fibonacci at index 2 = " << fibonacci[2] << endl; 
    //fibonacci[3] = fibonacci[1] + fibonacci[2]; //result is 2

    //fibonacci[4] = fibonacci[2] + fibonacci[3]; //result is 3
    //cout << "Fib at i = 4: " << fibonacci[4] << endl; 

    //const int DOZEN = 12; 

    //string cookies[DOZEN] =
    //{
    //    "snickerdoodle",
    //    "Pizookie®",
    //    "oatmeal raisin", 
    //    //the "empty string" -> ""
    //    //NOTE that no error occurs if array initialization is incomplete
    //    //(there are less than 12 cookies here)
    //};

    //for (int i = 0; i < DOZEN; i++)
    //{
    //    cout << cookies[i] << endl; 
    //}

    //vector<int> nums = { 1, 2222, 3, 4 };
    //cout << sizeof(int) << endl; 
    //cout << sizeof(nums[0]) << endl; //4 Bytes
    //cout << &nums[0] << endl; //& means "address of" (recall pass by reference) 
    //cout << &nums[1] << endl;

    //int otherNums[5] = { 1, 3, 5, 7, 9 };
    //cout << nums[23] << endl; 

    //cout << otherNums[1.5] << endl; 

    //cout << (&nums[1] - &nums[0]) << endl;

    return 0;
}