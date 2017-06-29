//
//  main.cpp
//  multiplyNumbers
//
//  Created by Swathi Parthibha on 1/25/16.
//  Copyright © 2016 Swathi Parthibha. All rights reserved.
//

#include <iostream>

using namespace std;

int multiply(int &c, int &d);


int main()
{
    int a = 0, b = 0;
    
    cout << "Enter your first number: " << endl;
    cin >> a;
    
    cout << "Enter your second number: " << endl;
    cin >> b;
    
    cout << "Your answer is " << multiply(a, b) << endl;
    return 0;
}

int multiply(int &c, int &d)
{
    int num = c * d;
    return num;
    
}