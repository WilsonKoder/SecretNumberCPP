//
//  main.cpp
//  SecretNumber
//
//  Created by Wilson Koder on 18/11/14.
//  Copyright (c) 2014 WilsonKoder. All rights reserved.
//

#include <iostream>
#include "number.h"

using namespace std;
Number *number = 0;

int main(int argc, const char * argv[])
{
    number = new Number();
    cout << "Welcome to The Secret Number!" << endl;
    cout << "What would you like the max number to be?" << endl;
    int max_num;
    cin >> max_num;
    
    number->generate_number(max_num);

    while(number->is_running())
    {
        cout << "Guess a number!" << endl;
        
        int guessed;
        cin >> guessed;
        
        number->guess_num(guessed);
    }
    
    cout << "Thanks for playing!" << endl;
    
    return 0;
}
