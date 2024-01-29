#include "toy.c"  
#include <stdio.h>

int main() {
    // Define parameters
    short A[TK_K * TK_K * TK_N];  // Matrix A for key generation
    short t[TK_K * TK_N];         // Vector t for key generation
    short v[TK_N];                // Vector v for encryption
    short s[TK_K * TK_N];         // Vector s for decryption
    short u[TK_K * TK_N];         // Vector u for encryption
    

    // Key generation
    toy_gen(A, t, s);

    // Encryption
    int plaintext = 15;  
    // Display plaintext
    printf("Original plaintext: %d\n", plaintext);
    toy_enc(A, t, plaintext, u, v);
    // Display encrypted text
    printf("Encrypted text: %d\n", toy_enc);

    // Decryption
    int decrypted = toy_dec(s, u, v);
    // Display decrypted text for verification
    printf("Decrypted text: %d\n", decrypted);
    return 0;
}
