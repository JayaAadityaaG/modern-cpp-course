#pragma once

class Integer{
    private:
        int *m_pInt;
    public:
        //Default Constructor 
        Integer();
        // Integer() =default;
        //Parameterized construcotr
        Integer(int value);
        //Copy constructor 
        Integer(const Integer &obj);
        //Move constructor 
        Integer(Integer &&obj);
        int  GetValue() const;
        void SetValue(int value);
        // void SetValue(float) = delete; //C++11 to prevent compiler from allowing this 
        ~Integer();
};