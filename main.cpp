//
//  main.cpp
//  Natural Number sum
//
//  Created by ramadhar kumar on 06/02/18.
//  Copyright © 2018 ramadhar. All rights reserved.
//

#include <iostream>
using namespace std;

int addNumber(int n)
{
    if(n==1)
        return 1;
    return addNumber(n-1)+n;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    int sum=addNumber(n);
    cout<<"sum of  "<<n<<" number is: "<<sum<<endl;
    
    return 0;
}
