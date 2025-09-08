//Practice code for C++ Primer
//Chapter: 1.4.1 The while Statement
/* Exercise 1.11: Write a program that prompts the user for 
two integers. Print each number in the range specified by
those two integers
*/
#include <iostream>

int main(){
    std::cout << "Enter two integers: \n";
    int i1;
    int i2;

    std::cin >> i1 >> i2;
    
    int lb, ub;
    lb = i1 < i2 ? i1 : i2;
    ub = i1 < i2 ? i2 : i1;

    while (lb <= ub){
        std::cout << lb <<std::endl;
        lb++;
    }
}

//TODO and Exercises
//Exercise 1.11 
//Exercise 1.3 DONE