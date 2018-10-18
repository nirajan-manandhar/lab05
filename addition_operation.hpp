//
// Created by Nirajan on 2018-10-18.
//

#ifndef LAB05_ADDITION_OPERATION_HPP
#define LAB05_ADDITION_OPERATION_HPP

#include "abstract_operation.hpp"


class addition_operation : public abstract_operation {
public:
    static char const ADDITION_CODE = '+';
    addition_operation() : abstract_operation(ADDITION_CODE) {};
    int perform(int a, int b) override { return a + b;}
    ~addition_operation() = default;
};


#endif //LAB05_ADDITION_OPERATION_HPP
