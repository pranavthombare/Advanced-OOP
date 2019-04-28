//
//  main.cpp
//  Lab 8 Core 2
//
//  Created by Pranav Thombare on 13/03/2019.
//  Copyright © 2019 Pranav Thombare. All rights reserved.
//

#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

int binsearch(array<int,6> arr, int len, int key) {
    int left = 0;
    int right = len - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] > key)
            right = mid - 1;
        else if (arr[mid] < key)
            left = mid + 1;
        else
            return mid;
    }
    return -1; // indicate not found
}

int main()
{
    array<int,6> a = {2, 3, 5, 6, 8, 9};
    int result1 = binsearch(a, sizeof(a)/sizeof(int), 4);
    int result2 = binsearch(a, sizeof(a)/sizeof(int), 6);
    
    int search;
    cout<<endl<<"Enter the number you want to search: ";
    cin>>search;
    int result3 = binsearch(a, sizeof(a)/sizeof(int), search);

    if (result1 == -1) std::cout << "4 not found!" << std::endl;
    else std::cout << "4 found at position" << result1+1 << std::endl;
    if (result2 == -1) std::cout << "6 not found!" << std::endl;
    else std::cout << "6 found at position " << result2+1 << std::endl;
    if (result3 == -1) std::cout <<search<< " not found!" << std::endl;
    else std::cout <<search<< " found at position " << result3+1 << std::endl;

    return 0;
}
