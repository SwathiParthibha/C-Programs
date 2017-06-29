//
//  main.cpp
//  Array Greater Than 10
//
//  Created by Swathi Parthibha on 2/22/16.
//  Copyright © 2016 Swathi Parthibha. All rights reserved.
//

#include <iostream>

using namespace std;

// Write a program that asks the user to type 10 integers of an array. The program must compute and write how many integers are greater than or equal to 10.

int main()
{
    int num;
    
    int array[10];
    
    for (int numbers = 0; numbers < 10 ; numbers++)
    {
        cout << "Enter a number: ";
        cin >> num;
        
        array[numbers] = num;
    }
    
    int max = array[0];
    
    for (int counter = 1; counter < 10 ;counter ++)
    {
        if (array[counter] > max){
            max = array[counter];
        }
    }
    
    cout << "The greatest value is " << max << endl;
    return 0;
}