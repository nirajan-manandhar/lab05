//
// Created by Nirajan on 2018-10-18.
//

#ifndef LAB05_RPN_CALCULATOR_HPP
#define LAB05_RPN_CALCULATOR_HPP

#include <iostream>
#include <stack>

using namespace std;

#include "addition_operation.hpp"
#include "subtraction_operation.hpp"
#include "multiplication_operation.hpp"
#include "division_operation.hpp"

class rpn_calculator {
private:
    int result;
    std::stack<int> my_stack;
    operation* operation_type(char operation);
    void perform(operation* operation);
public:
    int process_formula(string formula);
};


#endif //LAB05_RPN_CALCULATOR_HPP
