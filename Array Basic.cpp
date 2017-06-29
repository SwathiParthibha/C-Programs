//
//  main.cpp
//  Array Basic
//
//  Created by Swathi Parthibha on 2/22/16.
//  Copyright © 2016 Swathi Parthibha. All rights reserved.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int num;
    
    int array1[3][3];
    
    cout << "Array #1" << endl;
    
    for(int row = 0; row < 3; row++)
    {
        for(int column = 0; column < 3; column++)
        {
            cout << "Enter a value: " << endl;
            cin >> num;
            array1[row][column] = num;
        }
    }
    
    int array2[3][3];
    
    cout << "Array #2" << endl;
    
    for(int row = 0; row < 3; row++)
    {
        for(int column = 0; column < 3; column++)
        {
            cout << "Enter a value: " << endl;
            cin >> num;
            array2[row][column] = num;
        }
    }
    
    for (int row = 0; row < 3; row++)
    {
        for (int column = 0; column < 3; column++)
        {
            cout << setw(2) << array1[row][column] * array2[row][column] << " ";
        }
        cout << endl;
    }
    
    

    return 0;
}