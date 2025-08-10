# Important concepts and theory retated to C
I have provided basic info about each and every topic you will need during this course.

## 📋 Table of Contents
1. [Keywords and Identifier]()
2. [Datatype]()
3. [Pre-Processor Directives]()
4. [Compilation]()
5. [Constants and Variables]()
6. [Operators]()
7. [Escape Key]()
8. [Data Type Conversion]()
9. [Input and Output Operations]()
10. [Control Statements]()
11. [Array and Strings]()
12. [Function]()
13. [Pointers]()
14. [Structure, Union]()
15. [Data files]()
    
## Keywords and Identifier
### Keywords: 
Reserved word with fix meaning and the meaning can't be changed as user requires.
Example: **int** means **integer** nothing else.

### Identifiers: 
Any word used in C programming identify something. It could be name of variable, function, array, pointers, etc. We can change the meaning of identifiers.


## Datatypes
During variables decleration we need to specify the type of data that the variable will hold. And this is done by using datatypes. There are various datatypes in C which are shown with respective type, keyword, byte used, range and symbolas given in table below:

### C Data Types

| Variable Type | Keyword       | Symbol | Bytes Used* | Range (Approx.)                  |
|---------------|--------------|--------|-------------|-----------------------------------|
| Integer       | `int`        | %d     | 2 or 4      | -32,768 to 32,767 (2 bytes) or -2,147,483,648 to 2,147,483,647 (4 bytes) |
| Character     | `char`       | %c     | 1           | -128 to 127 (signed) or 0 to 255 (unsigned) |
| Float         | `float`      | %f     | 4           | ~1.2E-38 to ~3.4E+38              |
| Double        | `double`     | %lf    | 8           | ~2.3E-308 to ~1.7E+308            |
| Short Integer | `short`      | %hd    | 2           | -32,768 to 32,767                 |
| Long Integer  | `long`       | %ld    | 4           | -2,147,483,648 to 2,147,483,647   |
| Unsigned Int  | `unsigned int` | %u   | 2 or 4      | 0 to 65,535 (2 bytes) or 0 to 4,294,967,295 (4 bytes) |
| Long Double   | `long double`| %Lf    | 10, 12 or 16| ~3.4E-4932 to ~1.1E+4932          |

---

**Note:**  
- **char** holds character only not integer and **int** holds only integers not decimal value (float type value)
- The size of each data type (size = byte used) can vary depending on **compiler** and **architecture** (e.g., 32-bit vs 64-bit systems).  
-    **Range** means the extreme points upto which the datatype can hold data. Out of this range the data will be garbage or not as desired
- `%d`, `%f`, etc., are **format specifiers** which defines the data format and used in `printf()` and `scanf()` functions.

## Pre-Processor Directives
Pre-processor directives are instructions that are processed **before** the actual compilation of code.
**Example**

#include <stdio.h>  // For standard input and output

## Compilation

### Compilation in C

**Compilation** is the process of converting **human-readable** C source code (`.c` file) into **machine-readable** and **executable code** that the computer can run.  
This is done by a program called a **compiler** (e.g., GCC, Turbo C).

---

### Stages of Compilation

1. **Preprocessing**  
   - Handles **pre-processor directives** (`#include`, `#define`, etc.).
   - Removes comments, expands macros, and includes header files.
   - Output: `.i` file (preprocessed source code).

2. **Compilation**  
   - Converts the preprocessed code into **assembly language** (low-level, human-readable form).
   - Output: `.s` file (assembly code).

3. **Assembly**  
   - Converts assembly code into **machine code** (binary instructions).
   - Output: `.o` file (object file).

4. **Linking**  
   - Combines one or more object files with **library files** to produce the final executable program.
   - Resolves function calls (like `printf`) to actual addresses in libraries.
   - Output: `.exe` (Windows) or executable (Linux).


### Note 
Library files contains actual meaning of each and every words used in the program and help processor to understand the code by linking meaning and words.

---

### Compilation Flow
Source Code (.c) to Preprocessed Code (.i) to Assembly Code (.s) to Object Code (.o) to Executable code (.exe) but no extension in Linux

## Constants and Variables
**Variable**: A named memory location used to store data.

**int** age; &nbsp;&nbsp; Because any integer value of age can exist.

**Constant**: A value that cannot be changed during program execution.

**const float** gravity = 9.8; &nbsp;&nbsp; Because only 9.8 exist for value of gravity



## Operators

Operators are symbols used to perform operations on variables and values.

For mathematical addition, subtraction, etc.

**Arithmetic**: &nbsp;&nbsp; +, -, *, /, %

For checking the relation between two or more variables.

**Relational**: &nbsp;&nbsp; ==, !=, <, >, <=, >=

For generating logic like AND, OR, NOT

**Logical**: &nbsp;&nbsp; &&, ||, !

## Escape Sequence

Escape sequences are special combinations of character  starting with
| Sequence | Meaning      |
| -------- | ------------ |
| `\n`     | New line     |
| `\t`     | Tab          |
| `\\`     | Backslash    |
| `\"`     | Double quote |

## Data Type Conversion

**Implicit Conversion**: Automatically done by the compiler, no user interference.<br><br>

**Implicit conversion (int → float)**

float x = 5;

**Explicit Conversion** (Type Casting): Manually converting using cast operators.

**Explicit conversion**

int y = (int) 3.14;     

## Input and Output Operations

printf() → Output data.
scanf() → Input data.

int num;
printf("Enter a number: ");
scanf("%d", &num);

##