#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <bsd/string.h>

void vuln (char *arg)
{
        char buffer[500];

        strlcpy(buffer, arg, 500);
}

int main(int argc, char **argv){
        vuln(argv[1]);

        return 0;
}
