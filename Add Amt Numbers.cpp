//
//  main.cpp
//  Add Amt Numbers
//
//  Created by Swathi Parthibha on 2/17/16.
//  Copyright © 2016 Swathi Parthibha. All rights reserved.
//

#include <iostream>

using namespace std;

int main()
{
    
    int numbers, num, sum=0;
    
    cout << "Enter the number of numbers" << endl;
    cin >> numbers;
    
    for (int counter = numbers; counter > 0; --counter)
    {
        cout << "Enter a number to add" << endl;
        cin >> num;
        sum = sum + num;
    }
    cout << "The final sum is " << sum << endl;
}