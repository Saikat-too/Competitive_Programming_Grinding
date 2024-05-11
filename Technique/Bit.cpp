/* On modern Computer Architecture , the smallest addressable unit of memory is a byte . Since all object need to have unique memory address
this means object must be one byte in size .For most varrible type it is fine except boolean.As boolean has ony
two states true(1) or false(0) require only one bit to store . And a byte has 8 bits so it waste 7 bits */

/* Left shift 0011 = 3 
              0011 << 1 = 0110 = 3 * 2^1
              0011 << 2 = 1100 = 3 * 2^2      */
            
/* Right Shift 1100 = 12
               1100 >> 1 = 0110 = 12 / 2
               1100 >> 2 = 0011 = 12 / (2 * 2)
               1100 >> 3 = 0001 = 12 / (2*2*2)  */

#include<bitset>
#include<iostream>

int main(){

    auto RL_Shift = [&] (){
        std::bitset<4> x {0b1100};
        unsigned int y {0b1100};
        std::cout << x << ' ' << y << '\n';
        std::cout << "Left Shift" << '\n';
        std::cout << (x << 2) << ' ' << (y << 2) << '\n';
        std::cout << "RightShift" << '\n';
        std::cout << (x >> 2) << ' ' << (y >> 2) <<  '\n';
    };

    auto Basic = [&](){
        std::bitset<4> x {0b0100};
        std::bitset<8> y {0b0100};
        std::bitset<4> z {0b0110};
        std::cout << ~x << ' ' << ~y << '\n';
        std::cout << (x|z) << '\n';
        std::cout << (x&z) << '\n';
        std::cout << (x^z) << '\n';
    };



    Basic();
    return 0 ;
}