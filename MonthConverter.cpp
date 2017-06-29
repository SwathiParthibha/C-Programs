//
//  main.cpp
//  Month Converter
//
//  Created by Swathi Parthibha on 2/22/16.
//  Copyright © 2016 Swathi Parthibha. All rights reserved.
//

#include <iostream>

using namespace std;

int main()
{
    int input, numbers;
    
    cout << "Enter how many numbers you will be entering" << endl;
    cin >> numbers;
    
    for (int counter = numbers; counter > 0; --counter)
    {
        cin >> input;
        
        if (input == 1){
            cout << input << " January" << endl;
        }
        else if (input == 2){
            cout << input << " February" << endl;
        }
        else if (input == 3){
            cout << input << " March" << endl;
        }
        else if (input == 4){
            cout << input << " April" << endl;
        }
        else if (input == 5){
            cout << input << " May" << endl;
        }
        else if (input == 6){
            cout << input << " June" << endl;
        }
        else if (input == 7){
            cout << input << " July" << endl;
        }
        else if (input == 8){
            cout << input << " August" << endl;
        }
        else if (input == 9){
            cout << input << " September" << endl;
        }
        else if (input == 10){
            cout << input << " October" << endl;
        }
        else if (input == 11){
            cout << input << " November" << endl;
        }
        else if (input == 12){
            cout << input << " December" << endl;
        }
        else{
            cout << input << " Invalid" << endl;
        }
        
    }
    return 0;
}
