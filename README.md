# Brainfuckpiler
### A C-based compiler for the esoteric Turing-complete language Brainfuck.

## Features

- Supports the standard Brainfuck commands: `>`, `<`, `+`, `-`, `[`, `]`, `.`, `,`.
- Memory size is set to 1KB.

## Usage

1. Clone the repository or download the `brainfuck.c` file.
2. Compile the C code using a C compiler (gcc or clang):

    ```bash
    make
    ```

3. Run the compiled executable:

    ```bash
    ./brainfuck your_sample.txt
    ```

4. The program will execute the code in your .txt file Brainfuck code.