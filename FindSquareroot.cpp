//
//  main.cpp
//  Find Squareroot
//
//  Created by Swathi Parthibha on 2/17/16.
//  Copyright © 2016 Swathi Parthibha. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

// Print the square roots of the first 25 odd positive integers.

int main()
{
    int numbers;
    float answer;
    
    cout << "Enter the amount of numbers you would like to display"<<endl;
    cin >> numbers;
    
    for (int counter = 1; numbers >0; counter+=2, --numbers)
    {
        answer = sqrt(counter);
        cout << answer << endl;
    }
}
