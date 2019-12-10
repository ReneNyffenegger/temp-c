#include <stdio.h>

enum E {
   ONE = 0,
   TWO    ,
   THREE  ,
   FOUR   ,
   NUM_NUMBERS
};

typedef struct S {
  const char* english;
  const char* german ;
  const char* french ;
} S;

static S *translations[NUM_NUMBERS] = {NULL, NULL};

int main() {

   printf("NUM_NUMBERS = %d\n", NUM_NUMBERS); // 4

   for (int i=0; i<NUM_NUMBERS; i++) {

      printf("%x\n", translations[i]);

   }

}
