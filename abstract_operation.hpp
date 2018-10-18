//
// Created by Nirajan on 2018-10-18.
//

#ifndef LAB05_ABSTRACT_OPERATION_HPP
#define LAB05_ABSTRACT_OPERATION_HPP


#include "operation.hpp"

class abstract_operation : public operation{
private:
    char operation_type;
public:
    abstract_operation(char c):operation_type(c){}
    char get_code() override { return operation_type; }
    virtual ~abstract_operation(){};
};


#endif //LAB05_ABSTRACT_OPERATION_HPP
