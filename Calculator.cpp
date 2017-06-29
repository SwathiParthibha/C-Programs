//
//  main.cpp
//  Calculator
//
//  Created by Swathi Parthibha on 2/17/16.
//  Copyright © 2016 Swathi Parthibha. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b;
    char operation;
    
    cout << "Enter your operator" << endl;
    cin >> operation;
    
    if (operation == '^'){
        cout << "Enter base followed by exponent" << endl;
        cin >> a >> b;
        cout << pow(a,b) << endl;
    }
    if (operation == '+'){
        cout << "Enter two addents" << endl;
        cin >> a >> b;
        cout << a+b << endl;
    }
    if (operation == '-'){
        cout << "Enter the two numbers to subtract" << endl;
        cin >> a >> b;
        cout << a-b << endl;
    }
    
        return 0;
}