# Brainf***piler
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

1. Implement testing
2. Implement garbage collection

## LICENSE
This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
