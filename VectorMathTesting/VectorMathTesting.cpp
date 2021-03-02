// VectorMathTesting.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <VectorMath.h>

int main()
{
    vm::Vector2d<int> vector0(10, 20);
    vm::Vector2d<int> vector1(5, 10);
    std::cout << (vector0 + vector1)->element_one << std::endl;
    std::cout << (vector0 / vector1)->element_one << std::endl;
    std::cout << (vector0 * vector1)->element_one << std::endl;
    //(vector0 + vector1);
    //std::cout << vector2->element_one << ", " << vector2->element_two << std::endl;



}