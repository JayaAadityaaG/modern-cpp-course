#include "Integer_2.h"
#include <iostream>
Integer::Integer()
{
    std::cout<<"Integer()"<<std::endl;
    m_pInt = new int(0);

}

Integer::Integer(int value)
{
    std::cout<<"Integer(int)"<<std::endl;
    m_pInt = new int(value);
}

//Copy constructor 
Integer::Integer(const Integer &obj)
{
    std::cout<<"Integer(const Integer &)"<<std::endl;
    m_pInt = new int(*obj.m_pInt);
}

int Integer::GetValue() const
{
    return *m_pInt;
}

void Integer::SetValue(int value)
{
    *m_pInt = value;
}

Integer::~Integer()
{
    std::cout<<"~Integer()"<<std::endl;
    delete m_pInt;
    m_pInt = nullptr; 
}

Integer::Integer(Integer &&obj)
{
    std::cout<<"~Integer(&&)"<<std::endl;
    m_pInt  = obj.m_pInt;
    obj.m_pInt = nullptr;
}
