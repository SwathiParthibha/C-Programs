//
//  main.cpp
//  Score
//
//  Created by Swathi Parthibha on 1/24/16.
//  Copyright © 2016 Swathi Parthibha. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

void askUser(int &newScore, string &newName);
void calculate(int score, string name);

int main()
{
    int score;
    string name;
    
    askUser(score, name);
    calculate(score, name);
 
    
    return 0;
}

void askUser(int &newScore, string &newName)
{
    cout << "Enter your name: " << endl;
    cin >> newName;
    
    cout << "Enter your score: " << endl;
    cin >> newScore;
}

void calculate(int score, string name)
{
    if(score > 50)
    {
        cout << name << " you have passed :)" << endl;
    }
    
    else
    {
        cout << name << " you have failed :(" << endl;
    }
}