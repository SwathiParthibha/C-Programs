//
//  main.cpp
//  CircleArea
//
//  Created by Swathi Parthibha on 1/18/16.
//  Copyright © 2016 Swathi Parthibha. All rights reserved.
//

#include <iostream>

using namespace std;


float CircleArea(float r);

int main()
{
    CircleArea(2);
    
    
    return 0;
}

float CircleArea(float r)
{
    
    const float Pi = 3.14;
    cout << Pi * r * r << endl;
    
    return 0;
}