//
// Created by Nirajan on 2018-10-18.
//

#include "rpn_calculator.hpp"
#include <sstream>

operation* rpn_calculator::operation_type(char operation) {
    switch (operation) {
        case addition_operation::ADDITION_CODE : {
            return new addition_operation;
        }

        case subtraction_operation::SUBTRACTION_CODE : {
            return new subtraction_operation;
        }

        case multiplication_operation::MULTIPLICATION_CODE : {
            return new multiplication_operation;
        }

        case division_operation::DIVISION_CODE : {
            return new division_operation;
        }
    }
}

void rpn_calculator::perform(operation* operation) {
    int first = my_stack.top();
    my_stack.pop();
    int second = my_stack.top();
    my_stack.pop();
    int result = operation->perform(first, second);
    my_stack.push(result);
}

int rpn_calculator::process_formula(string formula) {
    istringstream iss(formula);
    string operand;
    while(iss >> operand){
        istringstream iss2(operand);
        int curr_int;
        if(iss2 >> curr_int) {
            my_stack.push(curr_int);
        }
        perform(operation_type(operand[0]));
    }
}