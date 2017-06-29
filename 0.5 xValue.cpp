//
//  main.cpp
//  0.5 xValue
//
//  Created by Swathi Parthibha on 2/17/16.
//  Copyright © 2016 Swathi Parthibha. All rights reserved.
//

#include <iostream>

using namespace std;

/*Repeatedly print the value of the variable xValue, decreasing it by 0.5 each time,
as long as xValue remains positive.*/

int main()
{
    
    float num;
    
    cout << "Enter your number" << endl;
    cin >> num;
    
    /*while (num > 0)
    {
        num = num - 0.5;
        cout << num <<endl;
    }*/
    
    for (;num > 0; )
    {
        num = num -0.5;
        cout << num << endl;
    }
    
}