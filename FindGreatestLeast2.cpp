//
//  main.cpp
//  Find Greatest Least 2
//
//  Created by Swathi Parthibha on 2/18/16.
//  Copyright © 2016 Swathi Parthibha. All rights reserved.
//

#include <iostream>

using namespace std;

int main()
{
    int num, N, max, min;
    
    cout << "Enter the amount of numbers: ";
    cin >> N;
    
    cin >> num;
    max = num;
    min = num;
    
    for (int counter = N; counter > 0; --counter)
    {
        cin >> num;
        
        if (num > max){
            
            max = num;
        }
        
        if (num < min){
            
            min = num;
        }
        
    }
    
    cout << "The greatest out of " << N << " numbers is " << max << "." << endl;
    cout << "The least out of " << N << " numbers is " << min << "." << endl;
}
