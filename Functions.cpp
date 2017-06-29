//
//  main.cpp
//  Functions
//
//  Created by Swathi Parthibha on 1/18/16.
//  Copyright © 2016 Swathi Parthibha. All rights reserved.
//

#include <iostream>

using namespace std;

int absolute(int x);

int main()
{
    absolute(-13);
 
    return 0;
}

int absolute(int x)
{
    if (x>=0)
        cout << x << endl;
    else
        cout << -x << endl;
    return 0;
    
}