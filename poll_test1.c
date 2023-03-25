#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <poll.h>

int main() {

    char name[255];

    printf("Type in your name:\n");
    read(0, name, sizeof(name));
    printf("Hello, %s\n", name);

    return 0;
}
