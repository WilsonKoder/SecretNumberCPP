//
//  number.cpp
//  SecretNumber
//
//  Created by Wilson Koder on 18/11/14.
//  Copyright (c) 2014 WilsonKoder. All rights reserved.
//

#include "number.h"
#include <random>
#include <iostream>

bool Number::guess_num(int num)
{
    if(num == secret_number)
    {
        std::cout << "You win! Awesome! Play again? (y/n)" << std::endl;
        std::string response;
        std::cin >> response;
        
        if(response == "y")
        {
            std::cout << "Good luck!" << std::endl;
            std::cout << "What would you like the max number to be?" << std::endl;
            int max_num;
            std::cin >> max_num;
            generate_number(max_num);
        }
        else
        {
            running = false;
        }
        
        return true;
    }
    else if(num > secret_number)
    {
        std::cout << "Too high! Guess again!" << std::endl;
    }
    else
    {
        std::cout << "Too low! Guess again!" << std::endl;
    }
    
    return false;
}

void Number::generate_number(int max_num)
{
    secret_number = rand() % max_num;
    running = true;
}

bool Number::is_running()
{
    return running;
}