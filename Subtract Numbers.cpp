//
//  main.cpp
//  SubtractNumbers
//
//  Created by Swathi Parthibha on 1/19/16.
//  Copyright © 2016 Swathi Parthibha. All rights reserved.
//

#include <iostream>

using namespace std;


int subtractNumbers(int x, int y)
{
    int answer = x - y;
    return answer;
    
    
}


int main()
{
    cout << subtractNumbers(10, 7) << endl;
    return 0;
}