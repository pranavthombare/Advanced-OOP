//
//  main.cpp
//  Lab 8 Core 3
//
//  Created by Pranav Thombare on 13/03/2019.
//  Copyright © 2019 Pranav Thombare. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int binsearch(vector<int> V, int len, int key) {
    int low = 0;
    int high = len-1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (V.at(mid) > key)
            high = mid - 1;
        else if (V.at(mid) < key)
            low = mid + 1;
        else
            return mid;
    }
    return -1; // indicate not found
}

int main()
{
    vector<int> vec = {1, 2, 3, 5, 6, 8, 9, 10, 15, 20};
    int search;
    cout<<endl<<"Enter the number you want to search: ";
    cin>>search;
    int result1 = binsearch(vec, vec.size(), 4);
    int result2 = binsearch(vec, vec.size(), 8);
    int result3 = binsearch(vec, vec.size(), search);
    
    if (result1 == -1) std::cout << "4 not found!" << std::endl;
    else std::cout << "4 found at position " << result1 + 1 << std::endl;
    
    if (result2 == -1) std::cout << "8 not found!" << std::endl;
    else std::cout << "8 found at position " << result2 + 1<< std::endl;

    if (result3 == -1) std::cout <<search<< " not found!" << std::endl;
    else std::cout <<search<< " found at position " << result3 + 1<< std::endl;

    return 0;
}
