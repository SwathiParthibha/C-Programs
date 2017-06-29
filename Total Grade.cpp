//
//  main.cpp
//  Total Grade
//
//  Created by Swathi Parthibha on 2/17/16.
//  Copyright © 2016 Swathi Parthibha. All rights reserved.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int numbers, score , total, score1, total1;
    
    cout << "How many exercises to input? ";
    cin >> numbers;
    
    for (int counter = 1; numbers >= counter; counter++)
    {
        cout << "Score received for exercise " << counter << " : ";
        cin >> score1;
        score = score + score1;
        
        cout << "Total points possible for exercise " << counter << " : ";
        cin >> total1;
        total = total + total1;
    }
    
    float answer = (float(score)/total) * 100;
    cout << "Your total is " << score << " out of " << total << ", or "<< answer << "%"<< endl;
}
