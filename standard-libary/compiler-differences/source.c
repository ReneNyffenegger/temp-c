#include <stdio.h>
#include <string.h>
#include <wchar.h>

int main() {


#ifdef _MSC_VER
    printf("defined: _MSC_VER\n");
 //
 //    Visual Studio compiler (cl) has stricmp rather than strcasecmp
 //
    #define strcasecmp stricmp
    #define wcscasecmp wcsicmp

#endif


#ifdef __MINGW32__
    printf("defined: __MINGW32__\n");

    #define wcscasecmp wcsicmp // or _wcsicmp ?

#endif


#ifdef __GNUC__
    printf("defined: __GNUC__\n");
#endif


    printf("strcasecmp = %d\n", strcasecmp( "foo",  "FOO"));
    printf("wcscasecmp = %d\n", wcscasecmp(L"foo", L"FOO"));

}
