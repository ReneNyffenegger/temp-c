//
//  gcc -O0 init-array.c && a
//
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


void f() {

   long i = 42;
   long j = 43;
   long k = 44;
   long l = 45;

}
void g() {

   for (int i=0; i<NUM_NUMBERS; i++) {
      printf("%x\n", translations[i]);
   }

   S *local[NUM_NUMBERS];
   for (int i=0; i<NUM_NUMBERS; i++) {
      printf("%x\n", local[i]);
   }

   S *another_local[NUM_NUMBERS] = {0};
   for (int i=0; i<NUM_NUMBERS; i++) {
      printf("%x\n", another_local[i]);
   }

}

int main() {


   printf("NUM_NUMBERS = %d\n", NUM_NUMBERS); // 4

   f();
   g();


}
