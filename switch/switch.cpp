// Simple example for Switch Statements
// Used to simply test my environment 

#include <iostream>

int main() {
    int greet = 2; 

// Here come sthe switch statement
    switch (greet) {
        case 1:
            std::cout << "Hellow World 1" << std::endl;
            break;
        case 2:
            std::cout << "Hello World 2" << std::endl;
            break;
        case 3:
            std::cout << "Hello World 3" << std::endl; 
            break;
        
        default: 
            std::cout << "Simple Hello World without greet indicator" << std::endl;
            break;
    }
    return 0;
}