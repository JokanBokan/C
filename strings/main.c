#include <ctype.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdbool.h> 

typedef int8_t   i8;
typedef int16_t  i16;
typedef int32_t  i32;
typedef int64_t  i64;
typedef uint8_t  u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;
typedef float    f32;
typedef double   f64;

typedef struct {
    char* data;
    i32 size;
} string;

#define STRING_PRINT_FMT(s) (int)s.size, (char*)s.data

string str(const char* buf); 
void str_trim_left(string* s);   // ("      Hey" -> "Hey")
void str_trim_right(string* s);  // ("Hey      " -> "Hey")
void str_trim(string* s);        // these two functions above called in one
void str_cut_left(string* s, i32 n);
void str_cut_right(string* s, i32 n);
bool str_compare(string* s1, string* s2);
i32 str_find_char(string* s, char c);
bool str_char_exists(string*s, char c);

int main() {
    string a = str("    Hello world    ");
    str_trim(&a);
    printf("%.*s\n", STRING_PRINT_FMT(a));
    return 0;
}

string str(const char* buf) {
    return (string) {
        .data = (char*)buf,
        .size = strlen(buf)
    };
}

void str_trim_left(string* s) {
    while(s->size > 0 && isspace(s->data[0])) {
        s->data++;
        s->size--;
    }
}

void str_trim_right(string* s) {
    while(s->size > 0 && isspace(s->data[s->size - 1])) {
        s->size--;
    }
}

void str_trim(string* s) {
    str_trim_left(s);
    str_trim_right(s);
}

void str_cut_left(string* s, i32 n) {       // example call: str_cut_left(&str, 2);
    // your implementation 
} 

void str_cut_right(string* s, i32 n) {      // example call: str_cut_right(&str, 2);
    // your implementation 
}

bool str_compare(string* s1, string* s2) {  // example call: str_compare(&str_1, &str_2);
    // your implementation 
    return true;
} 

i32 str_find_char(string* s, char c) {      // example call: str_find_char(&str, 'a');
    // your implementation 
    return -1;
} 

bool str_char_exists(string*s, char c) {    // example call: str_char_exists(&str, 'a');
    // your implementation 
    return false;
}
