#include <iostream>

namespace Avg{
    float Calculate(float x, float y){
        return (x+y)/2;
    }
}

namespace Basic{
    float Calculate(float x, float y){
        return x+y;
    }
}

namespace Sort{
    namespace Comparison{
        void Less(){

        }
        void Greater(){

        }
    }
}

//Namespace without name, only visible inside the file it is declared in 
namespace {
    void internalFunction(){

    }
}

int main(){
    using namespace Avg;
    using Avg::Calculate;
    Basic::Calculate(1.1f,5.4f);
    // Calculate(1.1f,2.3f);
    
    //Nested namespace 
    Sort::Comparison::Greater();
    internalFunction(); //Can be accessed directly without the scope operator 
    return 0;
}