//
//  main.cpp
//  Change Counter
//
//  Created by Swathi Parthibha on 2/10/16.
//  Copyright © 2016 Swathi Parthibha. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int q,d,n,total;
    
    cout << "Enter how many quarters you have: " << endl;
    cin >> q;
    
    cout << "Enter how many dimes you have: " << endl;
    cin >> d;
    
    cout << "Enter how many nickels you have: " << endl;
    cin >> n;
    
    total = (25*q) + (10*d) + (5*n);
    
    cout << "Your total is " << total << endl;
    
    return 0;
}