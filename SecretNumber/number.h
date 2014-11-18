//
//  number.h
//  SecretNumber
//
//  Created by Wilson Koder on 18/11/14.
//  Copyright (c) 2014 WilsonKoder. All rights reserved.
//

class Number {
public:
    bool guess_num(int num);
    void generate_number(int max_num);
    bool is_running();
private:
    int secret_number;
    bool running;
};