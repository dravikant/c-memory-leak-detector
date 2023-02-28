#include <stdio.h>
#include <stdlib.h>

int main() {
    char* buffer = (char*)malloc(10);
    if(buffer == NULL) {
        printf("Failed to allocate memory.\n");
        return -1;
    }
    strcpy(buffer, "hello");
    printf("Buffer content: %s\n", buffer);
    free(buffer);
    strcpy(buffer, "world"); // Accessing freed memory
    printf("Buffer content: %s\n", buffer);
    return 0;
}
