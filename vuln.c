#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

void vuln (char *arg)
{
        char buffer[500];

        strcpy(buffer, arg);
}

int main(int argc, char **argv){
        vuln(argv[1]);

        return 0;
}