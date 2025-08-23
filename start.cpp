#include <iostream>
using namespace std;

void greetStark();
void studentCalculator();

int main()
{
    cout << "How are you doing today?" << endl;
    cout << "I hope you are doing well." << endl;
    cout << "Have a great day!" << endl;
    cout << "Goodbye!" << endl;
    cout << "See you later!" << endl;
    cout << "Take care!" << endl;
    cout << "Stay safe!" << endl;
    cout << "Keep smiling!" << endl;
    cout << "Remember to be kind!" << endl;
    //   cout << "Spread positivity!" << endl;
    //   cout << "Enjoy your day!" << endl;
    //   cout << "Make the most of it!" << endl;
    //   cout << "Cherish every moment!" << endl;
    //   cout << "Live life to the fullest!" << endl;
    greetStark();
    studentCalculator();
    return 0;
}

void greetStark()
{
    cout << "Hello Stark, how are you doing today? \n";
    const int myNum = 15 + 40;
    // int myNum = 15 + 10;
    // myNum = myNum + 5;
    double myDoubleNum = 5.99;
    char myLetter = 'D';
    bool myBoolean = true;
    string myText = "Hello World";
    cout << myNum << endl
         << myDoubleNum << endl
         << myLetter << endl
         << myBoolean << endl
         << myText << endl;

    // Good
    int minutesPerHour = 60;

    // OK, but not so easy to understand what m actually is
    int m = 60;
    // cout << myDoubleNum << endl;
    // cout << myLetter << endl;
    // cout << myBoolean << endl;
    // cout << myText << endl;
}

void studentCalculator()
{   
    int mass, acceleration;
    cout << "What is the mass: ";
    cin >> mass;
    cout << "What is the acceleration: ";
    cin >> acceleration;
    int force = mass * acceleration;

    // cout << 'The mass is: ' << mass << endl << 'The acceleration is: ' << acceleration << endl << 'The force is: ' << force << endl;
    cout << "The mass is: " << mass << "\n";
    cout << "The acceleration is: " << acceleration << "\n";
    cout << "The force is: " << force << "\n";

    // Create integer variables
    int length = 4;
    int width = 6;

    // Calculate the area of a rectangle
    int area = length * width;

    // Print the variables
    cout << "Length is: " << length << "\n";
    cout << "Width is: " << width << "\n";
    cout << "Area of the rectangle is: " << area << "\n";
}