//
//  main.cpp
//  UsefulProjects
//
//  Created by Илья on 08/02/2021.
//  Copyright © 2021 Илья. All rights reserved.
//

#include <iostream>


// USING A STRING FUNCTION find_last_not_of
// WE SPECIFY ONLY THE VARIABLES THAT WE WANT TO SEE IN THE INPUT STRING
#define a1 num.find_last_not_of("-0123456789")
#define a2 num.find_last_of("-")

using namespace std;


// INITIALIZE THE FUNCTION
int check_input_int();


int main()
{
    // INITIALIZE VARIABLE
    int n = check_input_int(); // VARIABLE = CALLING THE FUNTCION
    cout << "int = " << n << endl; // OUTPUT TO THE SCREEN
    return 0;
}

int check_input_int()
{
    // INITIALIZE VARIABLE
    string num;
    int n = 0;
    // LOOP do/while
    do
    {
        // THE FUNCTION BODY IS BEING EXECUTED
        do
        {
            // THE FUNCTION BODY IS BEING EXECUTED
            cout << " = "; // OUTPUT TO THE SCREEN
            getline(cin, num); // READING INPUT DATA TO THE NUM VARIABLE
        } while ((a1 != -1) or (a2 != -1 and a2 != 0)); //THIS REPEATEDLY THE LOOP S LONG AS THE CONDITION IS TRUE
        n = atoi(num.c_str()); // THE atoi FUNCTION IS APPILIED
    } while (n < 1);
    return n;
}
