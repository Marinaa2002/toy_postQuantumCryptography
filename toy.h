#ifndef TOY_H
#define TOY_H

// Constants for Toy encryption parameters
#define TK_K 3          // Parameter k
#define TK_N 4          // Parameter n
#define TK_Q 97         // Modulus q
#define TK_SQRT_W 33    // Square root of w
#define TK_W 22         // Parameter w

// Function prototypes

// Generates random elements for Toy encryption
void toy_gen(short *A, short *t, short *s);

// Encrypts plaintext using Toy encryption scheme
void toy_enc(const short *A, const short *t, int plain, short *u, short *v);

// Decrypts Toy ciphertext and checks against secret key
int toy_dec(const short *s, const short *u, const short *v);

#endif  // TOY_H
