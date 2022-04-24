#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{

    printf("int or signed int %d to %d\n", INT_MIN, INT_MAX);
    printf("float %le to %le\n\n", FLT_MIN, FLT_MAX);

    printf("char %d to %d\n", CHAR_MIN, CHAR_MAX);
    printf("signed char %d to %d\n", SCHAR_MIN, SCHAR_MAX);
    printf("unsigned char %d to %d\n\n", 0, UCHAR_MAX);

    printf("double %le to %le\n", DBL_MIN, DBL_MAX);

    printf("unsigned int %d to %u\n", 0, UINT_MAX);

    printf("short int or short signed int or short %hd - %hd\n", SHRT_MIN, SHRT_MAX);
    printf("long int or signed long int or long %ld - %ld\n", LONG_MIN, LONG_MAX);

    printf("unsigned short int %d - %d\n", 0, USHRT_MAX);

    printf("unsigned long int %d - %lu\n", 0, ULONG_MAX);


    return 0;
}
