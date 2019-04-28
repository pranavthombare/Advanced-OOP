//
//  main.cpp
//  Lab 7
//
//  Created by Pranav Thombare on 10/03/2019.
//  Copyright © 2019 Pranav Thombare. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <array>

using namespace std;

int main() {

    vector<int> a1;
comeback:
    int n;
    cout<<"Enter the number to push: ";
    cin>>n;
    a1.push_back(n);
    cout<<"\nEnter again(y/n)1: ";
    char c;
    cin>>c;
    if(c == 'y' || c == 'Y')
        goto comeback;
    
    for (auto i=a1.begin(); i!=a1.end();i++) {
        cout<<" "<<*i;
    }
    cout<<"The length of the vector is "<<a1.size()<<endl;
    cout<<"The capacity of the vector is "<<a1.capacity();
    
    return 0;
}
