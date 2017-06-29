//
//  main.cpp
//  Average
//
//  Created by Swathi Parthibha on 2/17/16.
//  Copyright © 2016 Swathi Parthibha. All rights reserved.
//

#include <iostream>

using namespace std;

int main()
{
    int numbers, num;
    
    cout << "Enter the amount of numbers" << endl;
    cin >> numbers;
    
    int sum=0;
    
    for (int counter = numbers; counter > 0; --counter)
    {
        cout << "Enter the next number" << endl;
        cin >> num;
        
        sum = num + sum;
        
    }
    
    cout << "The average of these numbers is " << float(sum)/numbers <<endl;
}