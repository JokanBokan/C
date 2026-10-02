# C Programming language

Collection of small C projects

## Projects

| Folder | Topic | What it covers |
|--------|-------|-----------------|
| [`strings/`](./strings) | Strings | Basic string implementation thats not relying on the standard null termination with example functions plus some left empty for you to implement (`str_cut_left`, `str_cut_right`, `str_compare`, `str_find_char`, `str_char_exists`). |
| [`dynamic_array/`](./dynamic_array) | Dynamic Arrays | A generic vector/dynamic array implementation using macros (`DARR_APPEND`, `DARR_POP`, `DARR_DESTROY`). |
| [`adler32_hash/`](./adler32_hash) | Checksums / Hashing | A clean implementation of the Adler-32 checksum algorithm. |
| [`HangMan-Game/`](./HangMan-Game) | Hang Man Game | Simple console hang man, words can be changed in the 'src/constants.c' |
| [`TicTacToe-Game/`](./TicTacToe-Game) | Tic Tac Toe Game | Simple tic tac toe in console, player symbols can of course be changed in 'src/macros.h' |

## How to build

Each project is self contained, so just go into its folder and compile the `main.c`:

```bash
cd <project_folder>
gcc main.c -o main
./main
```
## License

Do whatever you want with this, use it, modify it, learn from it. That's the whole point.
