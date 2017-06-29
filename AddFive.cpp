//
//  main.cpp
//  AddFive
//
//  Created by Swathi Parthibha on 1/24/16.
//  Copyright © 2016 Swathi Parthibha. All rights reserved.
//

#include <iostream>


using namespace std;

void addFive(int &z);

int main()
{
    int x = 4;
    int y = 10;
    
    addFive(x);
    cout << x << endl;
    addFive(y);
    cout << y << endl;
    
}

void addFive(int &z)
{
    cout << z << endl;
    z = z + 5;
    
}