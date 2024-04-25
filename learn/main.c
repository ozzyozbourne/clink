#include <stdio.h>
#include <stdlib.h>
#include <TargetConditionals.h>
#include <mylib.h>
#include <sharedlib.h>

int main(void)
{
    #ifdef __clang__
        printf("Complied with clang\n");
    #else
        printf("No Specific complier detected\n");
    #endif

    #if defined(TARGET_OS_IOS)
        printf("Running on iOS\n");
    #else 
        printf("Back in the water\n");
    #endif

    #if defined(TARGET_OS_MAC)
        printf("Running on macOS\n");
    #else
        printf("Running on an unknown Apple platform\n")
    #endif /* if defined(TARGET_OS_IOS) */    
    fun();
    printf("11 = %d\n", add(4, 7));
    return EXIT_SUCCESS;
}
