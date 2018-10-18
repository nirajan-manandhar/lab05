//
// Created by Nirajan on 2018-10-18.
//

#ifndef LAB05_SUBTRACTION_OPERATOR_HPP
#define LAB05_SUBTRACTION_OPERATOR_HPP

#include "abstract_operation.hpp"


class subtraction_operation  : public abstract_operation{
public:
    static char const SUBTRACTION_CODE = '-';
    subtraction_operation() : abstract_operation(SUBTRACTION_CODE) {};
    int perform(int a, int b) { return a - b;}
    ~subtraction_operation()= default;
};


#endif //LAB05_SUBTRACTION_OPERATOR_HPP
