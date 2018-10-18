//
// Created by Nirajan on 2018-10-18.
//

#ifndef LAB05_MULTIPLICATION_OPERATION_HPP
#define LAB05_MULTIPLICATION_OPERATION_HPP

#include "abstract_operation.hpp"


class multiplication_operation : public abstract_operation {
public:
    static char const MULTIPLICATION_CODE = '*';
    multiplication_operation() : abstract_operation(MULTIPLICATION_CODE) {};
    int perform(int a, int b) { return a * b;}
    ~multiplication_operation() = default;
};


#endif //LAB05_MULTIPLICATION_OPERATION_HPP
