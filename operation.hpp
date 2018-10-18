//
// Created by Nirajan on 2018-10-18.
//

#ifndef LAB05_OPERATION_HPP
#define LAB05_OPERATION_HPP

class operation{
public:
    virtual char get_code()=0;
    virtual int perform(int a, int b)=0;
    virtual ~operation(){};
};

#endif //LAB05_OPERATION_HPP
