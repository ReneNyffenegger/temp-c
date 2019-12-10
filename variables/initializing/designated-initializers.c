//
//  This file's encoding is latin-1.
//  Thus, cmd.exe requires:
//     chcp 1252
//
#include <stdio.h>


typedef struct {
   const char* english;
   const char* french ;
   const char* german ;
} word;

int main() {

    const char* numbers[4] = {
      [2] = "two"  ,
      [0] = "zero" ,
      [3] = "three",
      [1] = "one"
    };

    for (int i=0; i<sizeof(numbers)/sizeof(const char*); i++) {
       printf("%d: %s\n", i, numbers[i]);
    }

    word words[4] = {
         { .german = "null", .french = "zéro" , .english = "zero" },
         { .german = "eins", .french = "un"   , .english = "one"  },
         { .german = "zwei", .french = "deux" , .english = "two"  },
         { .german = "drei", .french = "trois", .english = "three"},
    };

    for (int i=0; i<sizeof(words)/sizeof(word); i++) {
       printf("%d: %-6s %-6s %-6s\n", i, words[i].english, words[i].french, words[i].german);
    }

}
