// implementation of the Adler32 hashing algorithm invented by Mark Adler in 1995.
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <assert.h>

uint32_t udb_hash(const char* buf)
{
    const unsigned char* p = (const unsigned char*)buf;
    size_t length = strlen(buf);
    
    uint32_t s1 = 1;
    uint32_t s2 = 0;

    for (size_t n = 0; n < length; n++)
    {
        s1 = (s1 + p[n]) % 65521;
        s2 = (s2 + s1)   % 65521;
    }
    return (s2 << 16) | s1;
}

int main() {
    assert(udb_hash("Test123") == 166330935);
    return 0;
}
