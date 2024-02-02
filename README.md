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
The code.txt provided is the txt needed to print "Hello World"
4. The program will execute the code in your .txt file Brainfuck code.

## Next Steps
The interpreter includes a basic error handling mechanism and should work for most standard Brainfuck programs. However, it is a simple implementation and may not cover all edge cases or optimizations.

1. My plan is to implement testing for the program to ensure it covers all of its basis.
2. Optimize the compiler by using some form of asm language which allows me more access to the machine.
3. Maybe implement some sort of GUI, but I am not sure about that yet.

## LICENSE
This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.