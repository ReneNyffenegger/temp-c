#include <stdio.h>
#include <string.h>

int main() {

#ifdef _MSC_VER
  //
  //    Visual Studio compiler (cl) has strcmp rather than strcasecmp
  //
#define strcasecmp stricmp
#endif

    printf("strcasecmp = %d\n", strcasecmp("foo", "FOO"));

}
