# C Learning

Hello everyone,

this repo is basically a collection of small C projects that i wrote with comments explaining everything to the last detail, made for people that want to upgrade their knowledge of the C programming language.

## Projects

| Folder | Topic | What it covers |
|--------|-------|-----------------|
| [`strings/`](./strings) | Strings | Since strings in C are very questionable and unsafe, this is a basic implementation of a safer string type (a `{data, size}` struct instead of relying on null-termination), with example functions plus some left empty for you to implement (`str_cut_left`, `str_cut_right`, `str_compare`, `str_find_char`, `str_char_exists`). |
| [`dynamic_array/`](./dynamic_array) | Dynamic Arrays | A generic vector/dynamic array implementation using macros, demonstrating dynamic memory allocation (`realloc`, `free`), capacity growth strategy, and essential operations (`DARR_APPEND`, `DARR_POP`, `DARR_DESTROY`). |
| [`adler32_hash/`](./adler32_hash) | Checksums / Hashing | A clean implementation of the Adler-32 checksum algorithm. Covers processing raw byte buffers, modular arithmetic with the 65521 prime constant, and bitwise packing (`<<`, `\|`) of two 16-bit accumulators into a single 32-bit hash. |

## How to build

Each project is self contained, so just go into its folder and compile the `main.c`:

```bash
cd <project_folder>
gcc main.c -o main
./main
```
## License

Do whatever you want with this, use it, modify it, learn from it. That's the whole point.
