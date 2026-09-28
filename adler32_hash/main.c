#include <stdio.h>
#include <string.h>
#include <stdint.h>

// implementation of the Adler32 hashing algorithm invented by Mark Adler in 1995.

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
    uint32_t hash1 = udb_hash("Test123"), hash2 = udb_hash("Test123");
    printf("%u %u %d", hash1, hash2, hash1 == hash2);
    return 0;
}
