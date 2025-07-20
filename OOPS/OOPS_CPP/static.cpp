#include <iostream>
using namespace std;

class Learn {
public:
    static void printHello(){
        cout<<"hello"<<endl;
    }; 
};

// Since printHello is a static method
// therefore to access static methods in c++
// we have to use :: operator
// . and -> are used for objects
// but here we does not require object
int main() {
    Learn::printHello();
    
    return 0;
}