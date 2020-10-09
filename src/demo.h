#ifndef demo_H
#define demo_H

#include <stdint.h>
#include <stdlib.h>

void memtohex(char *buf, const uint8_t *mem, int len);
char* memtohex2(const uint8_t *mem, int len);
void hextomem(uint8_t *mem, const char *buf, int len);
uint8_t* hextomem2(const char *buf, int len);

#endif