#include <stdio.h>

#ifdef _WIN32
    #define OS "Windows"
#elif __linux__
    #define OS "Linux"
#elif __APPLE__
    #define OS "MacOS"
#else
    #define OS "Unknown OS"
#endif

int main() {
    printf("Running on %s\n", OS);
    return 0;
}