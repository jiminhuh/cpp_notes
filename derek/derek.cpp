//
// Created by Jimin Huh on 6/30/20.
//

#include <cstdlib>
#include <iostream>
#include <string>
#include <limits>
#include <vector>
#include <numeric>
#include <sstream>
#include <ctime>
#include <cmath>

using namespace std;


double addNumbers(double num1, double num2);

void AssignAge3(int* pAge);

//int imGlobal = 0;
//const double PI = 3.141;
int main () {
//    cout << "Hello World." << endl;
//    printf("Sum = %.5f\n", PI);
//    printf("%c %d %5d %.3f %s\n", 'A', 5, 51201, 0.16125127, "Hello!");
//    bool married = false;
//    char myGrade = 'A';

//    string q1 = "Enter a Number : ";
//    string num1, num2;
//    cout << q1;
//    cin >> num1;
//    cout << "Enter another number : ";
//    cin >> num2;
//    int nNum1 = stoi(num1);
//    int nNum2 = stoi(num2);
//    printf("%d + %d = %d\n", nNum1, nNum2, (nNum1 + nNum2));

//    string sAge;
//    cout << "Enter your Birthday:  ";
//    cin >> sAge;
//    int nAge = stoi(sAge);
//
//    if ((nAge >= 1) && (nAge <= 18)) {
//        cout << "Important birthday!" << endl;
//    } else {
//        cout << "You are too old to celebrate your birthday!" << endl;
//    }

//    vectors <int> vNums(2);
//    vNums[0] = 1;
//    vNums[1] = 2;
//    vNums.push_back(3);

//    vector<string> words;
//    words.push_back("Hello");
//    words.push_back("World");
//
//    for (int i = 0; i < words.size(); ++i) {
//        cout << words[i] << endl;
//    }
//
//    for (auto i: words) {
//        cout << i << endl;
//    }

//    srand(time(NULL));
//    int secretNumber = rand() % 11;
//    int guess = 0;
//
//    do {
//        cout << "Guess the Number : " << endl;
//        cin >> guess;
//        if (guess > secretNumber) {
//            cout << "Too Big." << endl;
//        } else if (guess < secretNumber) {
//            cout << "Too Small." << endl;
//        }
//    } while (secretNumber != guess);
//    cout << "You Guessed it!" << endl;

//    string str1 = "I am a string!";
//
//    cout << str1[0] << endl;
//    cout << str1.back() << endl;
//    cout << str1.length() << endl;
//    string str4 = str1 + " Hello";
//    str4.append("!");
//    str4.erase(5, str4.length()-1);
//    cout << str4.find("string");

    printf("%.1f + %.1f = %.1f\n", 5.0, 4.0, addNumbers(5.0,4.0));

    int age2 = 43;
    AssignAge3(&age2);
    cout << age2 << endl;


    return 0;
}

double addNumbers (double num1 = 0, double num2 = 0) {
    return num1, num2;
}

//void AssignName() {
//    string name = "Jimin";
//}

void AssignAge3(int* pAge) {
    *pAge = 24;
}