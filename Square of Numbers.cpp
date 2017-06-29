//
//  main.cpp
//  Square of Numbers
//
//  Created by Swathi Parthibha on 2/17/16.
//  Copyright © 2016 Swathi Parthibha. All rights reserved.
//

// Write a program that displays the squares of the numbers from 0 to 14

#include <iostream>

using namespace std;

int main()
{
    int numbers;
    
    cout << "Enter the amount of numbers" << endl;
    cin >> numbers;
    
    int answer = 0;
    
    for (int num = 0; numbers> 0; num++, --numbers)
    {
        cout << "The square of " << num;
        answer = num*num;
        cout << " is " << answer << endl;
    }
    
    
}