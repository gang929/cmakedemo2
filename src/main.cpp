#include <stdio.h>
#include <string.h>

#include "demo.h"

int main()
{
    char *str1 = "1234567890";

    char *hexstr = memtohex2((const uint8_t *)str1, strlen(str1));
    char *str2 = (char*)hextomem2((const char *)hexstr, strlen(hexstr)/2);

    printf("str1: %s\n", str1);
    printf("hexstr: %s\n", hexstr);
    printf("str2: %s\n", str2);

    return 0;
}