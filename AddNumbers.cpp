//
//  main.cpp
//  AddNumbers
//
//  Created by Swathi Parthibha on 1/19/16.
//  Copyright © 2016 Swathi Parthibha. All rights reserved.
//

#include <iostream>

using namespace std;

int addNumbers(int x, int y)
{
    int answer = x + y;
    return answer;
    
    
}

int main()
{
    cout << addNumbers(7, 8) << endl;
    return 0;
    
}