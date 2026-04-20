# CSE-111: Object Oriented Programming Language (C Programming Course)

A comprehensive collection of C programming examples and exercises covering fundamental concepts to intermediate programming techniques.

## Overview

This repository contains course materials for CSE-111, organized into chapters with example programs, practice exercises, cumulative problems, and mastery challenges. Each chapter progressively builds on the previous concepts to develop strong C programming fundamentals.

## Structure

### Chapter 1: Introduction to C Programming

**Folder:** `chapter-01/`

- **Examples** (16 programs): Basic syntax, printf/scanf, variables, arithmetic, control flow.
- **Exercises** (9 programs): Simple output, input validation, arithmetic, intro conditionals.

---

### Chapter 2: Control Structures and Conditionals

**Folder:** `chapter-02/`

- **Example** (15 programs): if/else, comparison operators, boolean logic, nested conditionals.
- **Exercise** (13 programs): Condition evaluation, real-world scenarios, validation.

---

### Chapter 3: Advanced Concepts

**Folder:** `chapter-03/`

- **Examples** (21 programs): Complex logic, character handling, ASCII, flow optimization.
- **Exercise** (15 programs): Integrated problems, algorithmic challenges.

---

### Chapter 4: Data Types, Functions, and Type Conversion

**Folder:** `chapter-04/`

- **Examples** (16 programs): unsigned/long/short types, local vs global scope, function parameters, type promotion/demotion, casting.
- **Exercises** (6 programs): Distance calculations, sound speed function, long int input, loops, series functions.

---

### Chapter 5: Arrays and Strings

**Folder:** `chapter-05/`

- **Examples** (12 programs): Arrays, bubble sort, string functions (strcmp, strcat, strcpy, strlen), 2D arrays, string arrays, translator.
- **Exercises** (8 programs): Duplicate detection, float sort, string reverse, 3D arrays, number-to-word lookup.
- **Cumulative** (4 programs): String padding, palindrome-like interleave, character counting, word guess game.
- **Mastery** (3 programs): Mode finder, quit loop, dictionary lookup.

---

### Chapter 6: Pointers

**Folder:** `chapter-06/`

- **Examples** (11 programs): Pointer basics, pointer arithmetic, dereference, string pointers, double pointers, functions with pointer parameters.
- **Exercises** (7 programs): Pointer to loop var, string tokenizing, pointer arrays, pointer-to-pointer.
- **Mastery** (2 programs): int and float pointer assignment.
- **ReviewExercises** (3 programs): Odd/even sum, password check, phonebook.

---

### Chapter 7: Functions

**Folder:** `chapter-07/`

- **Examples** (13 programs): Function prototypes, return types, recursion, mutual recursion, pointer parameters, command-line arguments.
- **Exercises** (9 programs): Average function, factorial, recursive print, command-line strcmp/calc, feet-to-meter.
- **Cumulative** (3 programs): Password-protect via argv, string uppercase, array average.
- **Mastery** (2 programs): Recursive alpha print, argv string shift.

---

### Chapter 9: File I/O

**Folder:** `chapter-09/`

- **Examples** (15 programs): fopen/fclose, putc/getc, fprintf/fscanf, fread/fwrite, random access with fseek.
- **Exercises** (12 programs): File copy, word count, binary dump, file comparison.
- **Cumulative** (2 programs): Mailing list save/load.
- **Mastery** (5 programs): Advanced file handling challenges.

---

### Chapter 10: Structures, Unions, Enumerations, and typedef

**Folder:** `chapter-10/`

- **Examples** (12 programs): struct declaration, member access, arrays of structs, nested structs, pointers to structs, unions, enum, typedef.
- **Exercises** (5 programs): Practical struct use — catalog, bank account, etc.
- **Cumulative** (3 programs): Combined file + struct operations.
- **Mastery** (3 programs): Advanced struct/union/typedef challenges.

---

### Class Work

**Folder:** `class-work/`

36 standalone programs from in-class practice sessions:
- GPA / CGPA calculation and sorting
- Population growth simulations
- Pyramids (normal + inverse)
- Prime checks, series, vowel counting
- String manipulation (length, copy, compare) with and without library functions
- Array sorting, min/max, bracket matching
- Menu-driven calculators, password checks

---

### Home Assignment

**Folder:** `home-assignment/`

- 5 assignment programs (`assignment1.c` through `assignment5.c`)
- 2 data files (`file1.txt`, `file2.txt`) used by `assignment5.c`

---

## Getting Started

1. **View Examples First:** Start with the Examples folder in each chapter to understand the concepts
2. **Study the Code:** Read through example programs, paying attention to:
   - Syntax and structure
   - Comments explaining logic
   - Common patterns and best practices
3. **Practice with Exercises:** Work through the Exercise programs to reinforce learning
4. **Compare Solutions:** When multiple approaches exist (like 2-7-5.c), study the differences

## Compilation and Execution

To compile and run any C program:

```bash
gcc -o program_name program_name.c
.\program_name
```

Example:
```bash
gcc -o output 1-1-1.c
.\output
```

## Learning Path

**Recommended order:**
1. Chapter 1 → Examples → Exercises
2. Chapter 2 → Examples → Exercises
3. Chapter 3 → Examples → Exercises
4. Chapter 4 → Examples → Exercises
5. Chapter 5 → Examples → Exercises → Cumulative → Mastery
6. Chapter 6 → Examples → Exercises → Mastery → ReviewExercises
7. Chapter 7 → Examples → Exercises → Cumulative → Mastery
8. Chapter 9 → Examples → Exercises → Cumulative → Mastery
9. Chapter 10 → Examples → Exercises → Cumulative → Mastery

This progressive approach builds a solid foundation before introducing more complex concepts.

## Topics Covered

### Chapter 1 Concepts
- Variables and data types
- Input/Output operations (printf, scanf)
- Basic operators
- Program structure

### Chapter 2 Concepts
- Conditional statements (if, if-else, nested if)
- Comparison and logical operators
- Input validation
- Decision-making patterns

### Chapter 3 Concepts
- Complex control flow
- Advanced problem-solving
- Character handling
- Integration of learned concepts

### Chapter 4 Concepts
- Unsigned, long, short integer types
- Local vs global variables
- Function parameters and return values
- Type promotion and demotion
- Explicit casting

### Chapter 5 Concepts
- One-dimensional and multi-dimensional arrays
- Bubble sort
- String library functions (strlen, strcmp, strcat, strcpy)
- Arrays of strings
- Dictionary / lookup tables

### Chapter 6 Concepts
- Pointer declaration and dereferencing
- Pointer arithmetic
- Pointers to pointers
- Pointer-based string manipulation
- Passing pointers to functions

### Chapter 7 Concepts
- Function prototypes
- Return types and parameter passing
- Recursion and mutual recursion
- Command-line arguments (argc, argv)
- Pass by reference via pointers

### Chapter 9 Concepts
- File pointers (FILE *)
- fopen, fclose, fread, fwrite
- fprintf, fscanf, fputc, fgetc
- Random file access (fseek, ftell)
- Binary vs text mode

### Chapter 10 Concepts
- struct declaration and member access
- Arrays of structures
- Nested structures
- Pointers to structures and the `->` operator
- Unions
- Enumerations
- typedef

## Tips for Success

- **Read the code carefully** before running it
- **Modify and experiment** with the example programs
- **Test edge cases** when working on exercises
- **Compare different solutions** to understand various approaches
- **Add comments** to your code to reinforce understanding

## License

See [LICENSE](cse-111/LICENSE) for licensing information.

---

**Course:** CSE-111 - C Programming Fundamentals
**Source Reference:** Based on *Teach Yourself C* by Herbert Schildt
**Total Programs:** 225+ across 9 chapters plus class work and home assignments
