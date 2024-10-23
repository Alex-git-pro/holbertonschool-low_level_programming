#include <unistd.h>
#include <stdio.h>

int main() {
    int result = write(1, "_putchar", 8);
    if (result == -1) {
        
    }
    return 0;
}
