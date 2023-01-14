void Add(int a,int b, int &result)     //Add two numbers and return the result through a reference parameter
{
    result = a+b;
}

void Factorial(int a, int &result)    //Find factorial of a number and return that through a reference parameter
{
    result = 1;
    for(int i=1;i<=a;i++){
        result*=i;
    }
}
void Swap(int &a, int &b)            //Swap two numbers through reference arguments
{
    int temp = a;
    a = b;
    b = temp;
}