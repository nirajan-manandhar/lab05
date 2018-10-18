//
// Created by Nirajan on 2018-10-18.
//

#ifndef LAB05_DIVISION_OPERATION_HPP
#define LAB05_DIVISION_OPERATION_HPP

#include "abstract_operation.hpp"


class division_operation : public abstract_operation {
public:
    static char const DIVISION_CODE = '/';
    division_operation(): abstract_operation(DIVISION_CODE){};
    int perform(int a, int b) override { return a / b;}
    ~division_operation() = default;
};


#endif //LAB05_DIVISION_OPERATION_HPP
