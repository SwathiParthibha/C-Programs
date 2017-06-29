//
//  main.cpp
//  Find Greatest
//
//  Created by Swathi Parthibha on 2/16/16.
//  Copyright © 2016 Swathi Parthibha. All rights reserved.
//

#include <iostream>

using namespace std;

int main()
{
    int N, L = -1000, S = 1000, num;
    
    cout << "Enter the amount of numbers: ";
    cin >> N;
    
    for (int counter = N; counter > 0; --counter)
    {
        cin >> num;
        
        if (num > L)
            L = num;
        if (num < S)
            S = num;
    }
    
    cout << "The greatest of " << N << " numbers is " << L << "."<<endl;
    cout << "The least of " << N << " numbers is " << S << "." << endl;
}