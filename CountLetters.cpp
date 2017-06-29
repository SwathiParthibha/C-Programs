//
//  main.cpp
//  Count Letters
//
//  Created by Swathi Parthibha on 2/18/16.
//  Copyright © 2016 Swathi Parthibha. All rights reserved.
//

#include <iostream>

using namespace std;

int main()
{
    
    char letter;
    
    int counter = 0;
    
    while (letter != '.'){
        
        if (letter == 'a'){
            
            counter = counter + 1;
        }
        cin >> letter;
    }
    cout << "There are " << counter << " a's"<< endl;
}