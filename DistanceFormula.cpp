//
//  main.cpp
//  Distance Formula
//
//  Created by Swathi Parthibha on 2/10/16.
//  Copyright © 2016 Swathi Parthibha. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int distance, acceleration, time;
    
    acceleration = 32;
    
    cout << "Enter the time" << endl;
    cin >> time;
    
    distance = (acceleration * (time*time))/2;
    
    cout << "Your distance is equal to " << distance << endl;
    
    return 0;
}
