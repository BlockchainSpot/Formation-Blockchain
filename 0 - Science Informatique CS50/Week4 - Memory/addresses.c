// #include <stdio.h>

// int main(void)
// {
//     int n = 50;
//     printf("%i\n", n);
// }

// #include <secp256k1.h>
// #include <stdio.h>
// static secp256k1_context *ctx = NULL;

// int main() {
//     ctx = secp256k1_context_create(
// 	SECP256K1_CONTEXT_SIGN | SECP256K1_CONTEXT_VERIFY);
//     /* Declare the private variable as a 32 byte unsigned char */
//     unsigned char seckey[32];

//     /* Load private key (seckey) from random bytes */
//     FILE *frand = fopen("/dev/urandom", "r");

//     /* Read 32 bytes from frand */
//     fread(seckey, 32, 1, frand);

//     /* Close the file */
//     fclose(frand);

//     /* Loop through and print each byte of the private key, */
//     printf("Private Key: ");
//     for(int i=0; i<32; i++) {
//             printf("%02X", seckey[i]);
//     }
//     printf("\n");
// }

  #include <cs50.h>
  #include <ctype.h>
  #include <stdio.h>
  #include <stdlib.h>
  #include <string.h>

  int main(void)
  {
      // Get a string
      char *s = get_string("s: ");

      // Allocate memory for another string
      char *t = malloc(strlen(s) + 1);

      // Copy string into memory, including '\0'
      for (int i = 0; i <= strlen(s); i++)
      {
          t[i] = s[i];
      }

      // Capitalize copy
      t[0] = toupper(t[0]);

      // Print strings
      printf("s: %s\n", s);
      printf("t: %s\n", t);
  }