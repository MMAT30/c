#include <stdlib.h>
#include <stdio.h>


int main() {



    int a = 5;
    int b = 5;
    a++;
    b--;

    printf("ARITHMETIC OPERATORS\n");
    printf("5 + 3 = %d\n", 5 + 2);
    printf("5 - 3 = %d\n", 5 - 2);
    printf("5 * 3 = %d\n", 5 * 2);
    printf("5 / 3 = %d\n", 5 / 2);
    printf("5 %% 3 = %d\n", 5 % 2);
    printf("5++ = %d\n", a);
    printf("5-- = %d\n\n", b);



    printf("RELATIONAL OPERATORS\n");
    printf("a=%d , b=%d\n", a , b);
    printf("a == b = %d\n", a == b);
    printf("a != b = %d\n", a != b);
    printf("a > b = %d\n", a > b);
    printf("a < b = %d\n", a < b);
    printf("a >= b = %d\n", a >= b);
    printf("a <= b = %d\n\n", a <= b);



    printf("LOGICAL OPERATORS\n");
    printf("a=%d , b=%d\n", a , b);
    printf("a && b = %d\n", a && b);
    printf("a || b = %d\n", a || b);
    printf("!a = %d\n\n", !a);

    printf("TERNERARY OPERATOR\n");
    printf("a=%d , b=%d\n", a, b);
    printf("(a == 6) ? 1 : 0 = %d\n\n", (a == 6) ? 1 : 0);

    printf("BITWISE OPERATORS\n");
    printf("a=%#b ,b=%#b\n", a, b);
    printf("%#b & %#b = %#b\n", a, b, a & b);
    printf("%#b | %#b = %#b\n", a, b, a | b);
    printf("%#b ^ %#b = %#b\n", a, b, a ^ b);
    printf("~%#b = %#b\n", a, ~a);
    printf("%#b << 1 = %#b\n", a, b, a << 1);
    printf("%#b << 2 = %#b\n", a, b, a << 2);
    printf("%#b >> 1 = %#b\n\n", a, b, a >> 1);



    printf("BIT CLEARING\n");
    // primative version
    int data = 0b10101010;
    int mask = 0b11011111;
    printf("data = %#b\nmask = %#b\n", data, mask);
    printf("data & mask = %#b\n\n", data & mask);

    // optimal version
    printf("data = %#b\nmask = %#b\n", data, mask);
    printf("data & ~(1 << 5) = %#b\n\n", data & ~(1 << 5));



    printf("BIT WIPING\n");
    // most optimal version
    data = 0b10101010;
    printf("data = %#b\n", data);
    printf("data ^ data = %#b\n\n", data ^ data);



    printf("BIT SETTING\n");
    // primative version
    data = 0b10101010;
    mask = 0b01000000;
    printf("data = %#b\nmask = %#b\n", data, mask);
    printf("data | mask = %#b\n\n", data | mask);

    // optimal version
    printf("data = %#b\nmask = %#b\n", data, mask);
    printf("data | (1 << 6) = %#b\n\n", data | (1 << 6));



    printf("BIT SELECTION\n");
    data = 0b11101001;
    // bits[3:5]
    printf("data = %#b\n", data);
    printf("data[3:5] = %#b\n", data >> 3 & 0b111);



    printf("ASSIGNMENT OPERATORS\n");
    int x = 0;



    // += (Add and assign) 

    // -= (Subtract and assign) 
    // *= (Multiply and assign) 
    // /= (Divide and assign) 
    // %= (Modulo and assign) 
    // <<= (Left shift and assign) 
    // >>= (Right shift and assign) 
    // &= (Bitwise AND and assign) 
    // |= (Bitwise OR and assign) 
    // ^= (Bitwise XOR and assign)
}
