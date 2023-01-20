#pragma once

class Integer{
    private:
        int *m_pInt;
    public:
        Integer();
        // Integer() =default;
        Integer(int value);
        Integer(const Integer &obj);
        Integer(Integer &&obj);
        int  GetValue() const;
        void SetValue(int value);
        // void SetValue(float) = delete; //C++11 to prevent compiler from allowing this 
        ~Integer();
};