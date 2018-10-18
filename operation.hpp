//
// Created by Nirajan on 2018-10-18.
//

#ifndef LAB05_OPERATION_HPP
#define LAB05_OPERATION_HPP

class operation{
public:
    //Returns a char
    virtual char get_code()=0;

    //Returns an int
    virtual int perform(int a, int b)=0;

    //Destructor
    virtual ~operation(){};
};

#endif //LAB05_OPERATION_HPP
