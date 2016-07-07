//
//  main.cpp
//  EvenOdd
//
//  Created by Brent Perry on 7/7/16.
//  Copyright © 2016 Brent Perry. All rights reserved.
//

#include "../../../std_lib_facilities.h"

int main()
{
    int input;
    
    cout << "Please enter a whole number: ";
    cin >> input;
    
    if (input % 2 == 0)
        cout << "The number " << input << " is even.\n";
    else
        cout << "The number " << input << " is odd.\n";
    
    return 0;
}
