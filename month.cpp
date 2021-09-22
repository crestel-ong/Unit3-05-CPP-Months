// Copyright (c) 2021 Crestel Ong All rights reserved
//
// Created by: Crestel Ong
// Created on: September 2021
// This is the month program

#include <iostream>
#include <string>

int main() {
    // this function displays the month a number represents
    std::string monthNumberAsString;
    int monthAsInt;

    // input
    std::cout << "Enter the number of a month(ex: 3 for March): ";
    std::cin >> monthNumberAsString;

    monthAsInt = atoi(monthNumberAsString.c_str());

    // process and output
    switch (monthAsInt) {
        case 1 :
            std::cout << "January" << std::endl;
            break;
        case 2 :
            std::cout << "February" << std::endl;
            break;
        case 3 :
            std::cout << "March" << std::endl;
            break;
        case 4 :
            std::cout << "April" << std::endl;
            break;
        case 5 :
            std::cout << "May" << std::endl;
            break;
        case 6 :
            std::cout << "June" << std::endl;
            break;
        case 7 :
            std::cout << "July" << std::endl;
            break;
        case 8 :
            std::cout << "August" << std::endl;
            break;
        case 9 :
            std::cout << "September" << std::endl;
            break;
        case 10 :
            std::cout << "October" << std::endl;
            break;
        case 11 :
            std::cout << "November" << std::endl;
            break;
        case 12 :
            std::cout << "December" << std::endl;
            break;
        default :
            std::cout << "Invalid number" << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
