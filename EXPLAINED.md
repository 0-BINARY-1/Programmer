# Important concepts and theory retated to C

I have provided basic info about each and every topic you will need during this course.

## 📋 Table of Contents

1. [Keywords and Identifier](K&I)
2. [Datatype](Datatype)
3. [Pre-Processor Directives](PPD)
4. [Compilation](Compilition)
5. [Constants and Variables](C&V)
6. [Operators](Operators)
7. [Escape Key](EK)
8. [Data Type Conversion](DTC)
9. [Input and Output Operations](I&O)
10. [Control Statements](CS)
11. [Array and Strings](A&S)
12. [Function](Function)
13. [Pointers](Pointors)
14. [Structure, Union](Structure&Union)
15. [Data files](DF)

## Keywords and Identifier

### Keywords

Reserved word with fix meaning and the meaning can't be changed as user requires.
Example: **int** means **integer** nothing else.

### Identifiers

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
- **Range** means the extreme points upto which the datatype can hold data. Out of this range the data will be garbage or not as desired
- `%d`, `%f`, etc., are **format specifiers** which defines the data format and used in `printf()` and `scanf()` functions.

## Pre-Processor Directives

Pre-processor directives are instructions that are processed **before** the actual compilation of code.
**Example**

```C
#include<stdio.h>// For standard input and output
```

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

### For mathematical addition, subtraction, etc

**Arithmetic**: &nbsp;&nbsp; +, -, *, /, %

### For checking the relation between two or more variables

**Relational**: &nbsp;&nbsp; ==&nbsp;, !=&nbsp;, <&nbsp;, >&nbsp;, <=&nbsp;, >=

### For generating logic like AND, OR, NOT

**Logical**: &nbsp;&nbsp; &&&nbsp;, ||&nbsp;, !

## Escape Sequence

Escape sequences are special combinations of character  starting with **\** and used to give new line, tab, etc.

| Sequence | Meaning      |
| -------- | ------------ |
| `\n`     | New line     |
| `\t`     | Tab          |
| `\\`     | Backslash    |
| `\"`     | Double quote |

## Data Type Conversion

**Implicit Conversion**: Automatically done by the compiler, no user interference.  

**Explicit Conversion (Type Casting)**: Manually converting using cast operators.  

**Implicit conversion (int → float)**  

float x = 5;

**Explicit conversion**  

int y = (int) 3.14;

## Input and Output Operations

printf() → Output data.  

scanf() → Input data.  

**int** num;  

**printf**("Enter a number: ");  

**scanf**("%d", &num);  

## Control Statements in C

Control statements are used to **control the flow of execution** in a program based on certain conditions. They are divided into three main categories:

1. **Decision-Making Statements** → `if`, `if-else`, `if-else-if`, `switch`
2. **Looping Statements** → `for`, `while`, `do-while`
3. **Jump Statements** → `break`, `continue`, `goto`, `return`

---

### **1. if Statement**

The `if` statement is used to execute a block of code **only if** the given condition is **true**. There is no other option if the condition is false.

**Syntax:**

```c
if (condition) 
{
    // code to execute when condition is true
}
```

### **2. if...else Statement**

The if...else statement executes one block of code if the condition is **true**, and another block if the condition is **false**.

```c
if (condition)
{
    // code when condition is true
} 
else
{
    // code when condition is false
}
```

### **3. if...else if...else Statement**

The **if...else if...else** statement is used when you need to check multiple conditions like for 3 cases first condition false then execute second condition and if second condition also false then execute third condition.

```c
if (condition1)
{
    // code when condition1 is true
}
else if (condition2)
{
    // code when condition2 is true
}
else
{
    // code when all privious condition are false.
}
```

### **4 switch Statement**

Used when you have **multiple options** based on the value of a variable.

```c
switch (expression)
{
    case value 1:
        // Code to execute when value 1 selected.
        break;
    case value2:
        // Code to execute when value 2 selected.
        break;
    ...
    ...
    default:
        // Code to execute when no value selected.
}
```

## Looping Statements

Looping statements are used to repeat a block of code where **same task** is performed multiple times.

### **1. For Loop**

This looping statement is used when the number of **iteration** is known. Iteration means the number of times we have to do a task. e.g 5 means do same task 5 times.

**Syntax:**

```c
for(initialization; condition; increment/decrement) 
{
    // Code to be execute
}
```

**Initilization:**&nbsp; This specifies about where the loop starts.  
**Condition:**&nbsp; This is to indicate termination point or condition.
**increment/decrement:**&nbsp; This is to move to next task until the condition is false.

Example:

```c
for(int i = 1; i <= 5; i++)
{
    printf("%d ", i);
}
```

### **2. While Loop**

This looping statement is used when the number of **iteration** is unknown but the end of repetated task depends on certain condition. If the condition is satisfied then only the code is execuated.

**Syntax:**

```c
while(condition) 
{
    // Code executes while condition is true
}
```

Example:

```c
int i = 1;
while(i <= 5) 
{
    printf("%d ", i);
    i++;
}
```

### **3. do..while Loop**

Similar to while but **executes at least once** even the comdition in while is false.

**Syntax:**

```c
do
{
    // Code executes first, then condition is checked
} while(condition);
```

Example:

```c
int i = 1;
do
{
    printf("%d ", i);
    i++;
} while(i <= 5);
```

## Jump statement

This is used to **transfer control** to different part of the program as required.

### **1. Break Statement**

Terminates the **loop** or **switch statements** immediately.  

Example:

For Loop statement:

```c
for(int i=1; i<=5; i++) 
{
    if(i == 3)
    break;
    printf("%d ", i);
    // This will break the loop when i == 3 and stop the program.
    //Output: 1,2
}
```

Switch statement:

```c
switch (expression)
{
    case value 1:
        // Code to execute when value 1 selected.
        break;
}
```

### **2. Continue Statement**  

Skips the **current iteration** and moves to the next.

Example:

```c
for(int i=1; i<=5; i++) 
{
    if(i == 3) 
    continue;
    printf("%d ", i);
    // It will not print the value when i equals to 3 but print in other cases:
    // Output: 1,2,4,5
}
```

### **3. goto Statement**

Transfers control to a **labeled** statement or position in the code.

Example:

```C
int i = 1;
start:
printf("%d ", i);
i++;
if(i <= 5) goto start;
/* the control point with transfer to line 2 from line 5 and output will be
1,2,3,4,5
*/
```  

### **4. return Statement**

Used to exit the **current function** and return value while exisiting.

Example:

```c
int add(int a, int b)
{
    return a + b;
}
/* This will add a and b and then return the sum to the point of it's call.*/
```

## Summery

| **Statement Type** | **Keyword(s)**                        | **Purpose**                         | **Example**        |
| ------------------ | ------------------------------------- | ----------------------------------- | ------------------ |
| Decision Making    | `if`, `else`, `switch`                | Executes blocks based on conditions | `if(x>5)`          |
| Looping            | `for`, `while`, `do-while`            | Repeats code multiple times         | `for(i=0;i<5;i++)` |
| Jumping            | `break`, `continue`, `goto`, `return` | Transfers control in a program      | `break;`           |

## Arrays in C Programming

An **array** in C is a **collection of elements** of the **same data type** stored in **contiguous memory locations**.  
It allows you to store and process multiple values using a **single variable name**. We don't need to declare **n** different variable names for **n** different values.

**Same data type:**  

All values should have same features. You can't store **integer** and **float** in same array.  

**Contiguous Memory Locations:**  

This means the elements are placed **sequentially** in memory **one after another** without any gap. You can refer to below image. Every boxes in below figure represent each **memory cell** or group of **memory cells**.

**Memory Cell**  

A memory cell is the fundamental unit of data storage in a computer, capable of holding a single bit of information, either a 0 or a 1.

Example:  

Not good practice: Without declearing array

```c
// You can keep any variable name.
int a = 1;
int b = 2;
int c = 3;
...
int zo = 100;

```

Good practice: By declearing array

```c
// All elements have same datatype which in integer.

int natural_numbers[100] = {1, 2, 3, 4, 5, 6, ..., 100};

// All elements have same datatype which in float.

float numbers[5] = { 2.2, 3.4, 3.2, 3.0, 4.555 };

```

## Key Features of Arrays

- Each element is accessed using an **index** (index starts from `0`).
- We can use **iteration** using loops to insert and access the values.
- Array can be **one-dimensional**, **two-dimensional**, or **multi-dimensional**.

## Types of Arrays

| **Type**         | **Description**                          | **Example**      |
|------------------|----------------------------------------|------------------|
| **1D Array**     | Stores data in a single row.           | `int arr[5];`    |
| **2D Array**     | Stores data in rows and columns.       | `int mat[3][3];` |
| **Multidimensional Array** | Stores data in more than two dimensions. | `int arr[2][3][4];` |

## One-Dimensional (1D) Array

Stores data in single **row**. If we start dealing with column than it is 2D matrix.

**Syntax for 1D array:**

```c
data_type array_name[size];
```

**Example:**

```c
    int num[5] // Just array declaration.

    int num[3] = {1, 13, 6}; // Declaration and Initilization both at once. Intex (0, 1, 2)

    printf("%d", num[2]); /* Accessing the data. Result will be 6 because index 0, 1, 2 
    equals to 1, 13, 6 respectively.*/
```

**Complete example program:**

```c
#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    for(int i = 0; i < 5; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    return 0;
}

```

**Output:**

```c
arr[0] = 1
arr[1] = 2
arr[2] = 3
arr[3] = 4
arr[4] = 5
```

## Two-Dimensional (2D) Array

A 2D array is used to store data in **rows and columns** like a **table** or **matrix**.  

**Syntax of 2D array:**

```c
data_type array_name[rows][columns];
```

**Example:**

```c
    int matrix[2][3]; // Just array declaration.

    int matrix[2][3] = {{1, 2, 3},{4, 5, 6}}; // Declaration and Initilization both at once. Intex (0, 1, 2)

    printf("%d", matrix[1][2]); /* Accessing the data. Result will be 6 because index 12 represent 6. 1st row 2nd column.
    */
```

**Complete example program:**

```c
#include <stdio.h>
int main()
{
    int mat[2][3] = {{1, 2, 3}, {4, 5, 6}};
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}
```

**Output:**

```c
1 2 3
4 5 6
```

## Multi-Dimensional Array

A multi-dimensional array has **more than two dimensions**.

**Syntax of multi-dimensional array:**

```c
data_type array_name[layer/table][row][column];

// layers/tables represent the number of tables in multi-dimensional matrix.
```

**Example:**

```c
    int matrix[2][3][2]; // Just array declaration.

    int matrix[2][3][2] =
    {{{1, 2}, {3, 4}, {5, 6}},
    {{7, 8}, {9, 10}, {11, 12}}
    }; // Declaration and Initilization both at once.

    printf("%d", arr[2][3][2]); /* Accessing the data. Result will be 12 because  2nd table row 3rd row and 2nd column.
    */
```

**Output:**

```c
Layer 1:

 | Col1 | Col2 |
 | ---- | ---- |
 | 1    | 2    |
 | 3    | 4    |
 | 5    | 6    |

Layer 2:

| Col1 | Col2 |
| ---- | ---- |
| 7    | 8    |
| 9    | 10   |
| 11   | 12   |
```

**Complete example program:**

```c
#include <stdio.h>
int main()
{
    int matrix[2][3][2] ={{{1, 2}, {3, 4}, {5, 6}},{{7, 8}, {9, 10}, {11, 12}}}
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            for(int k = 0; k < 2; k++)
            {
                 printf("%d ", mat[j][k]);
            }
        }
        printf("\n");
    }
    return 0;
}
```

**Output:**

## String in C Programming

String is the sequences of characters stored in a **character array** and terminated by a **null character (`'\0'`)** in the C programming language.
Since C does not have a built-in string data type like some other languages (e.g., Python or Java), strings are handled using arrays of characters using **char** datatype.  

**Below is the example:**

```c
char str[] = "Hello";
```

**Explanation:**

Name of variable storing the string is **str**
(`[]`) This sign represent it is an array.
**char** is data-type used to specify the data entered are alphabetical letters. C doesn't have seperate data-type to handle **string**.
At last each string is terminated with **null character** denoted by (`'\0'`)

String Table for **"Hello"** with index position of each letter.

This table represents each character of the string **"Hello"** along with its **index position**.

---

### Indexed Table

| **Index** | 0 | 1 | 2 | 3 | 4 | 5 |
|-----------|---|---|---|---|---|---|
| **Letter** | H | e | l | l | o | (space)|

---

**Explanation:**

- The **index** starts from **0**.
- At **index 5**, there is a **space character**.
- Total characters = **11** (10 letters + 1 space).
How stored in different memory location on storage device.  

### String decleration and initilization

We have **two ways** to decleare the string in C programming which are explained below:

**Using String Literals:**

Here, the compiler automatically adds the null character (`'\0'`).

```C
char name[] = "Santosh";
```

**Using Character Arrays:**

Here, we have to automatically add the null characters.

```C
char name[8] = {'S', 'a', 'n', 't', 'o', 's', 'h', '\0'};
```

**Proper initilization:**

To make proper initilization, we give the size of the array. Keep in mind that your array size is enough to hold the terminating character (`'\0'`) at last along with data.

```c
char str1[20] = "C Programming";   // Proper initialization
```

**Improper intilization:**

In improper initilization, we donot give the size of array. Compiler automatically calculate the size of the array which is enough to hold terminatin character (`'\0'`).

```c
char str2[] = "C Programming";              // Compiler calculates size automatically
```

### Input and Output of String in C

For input and output of a string in C programming we use (`'<stdio.h>'`) as header file.
For taking input we use (`'scanf()'`) function and (`'printf()'`) function for output.
But, we have problem with (`'scanf()'`) function because it stops at space. Let say we want to read name **Santosh Bhat**. Now the (`'scanf()'`) function will only read upto **Santosh** but not **Bhat** because as soon as we hit space after typing **Santosh** it will start reading another value in another variable.

**Solution:**

We use (`'fgets()'`) function or modify the (`'scanf()'`) function content to read full text including the space character. You can see it in example below:

**Example:**

```c
#include <stdio.h>
#include <string.h>
int main() {
    char name[20];
    char Name[20];
    char NAME[20];
    printf("Enter your name a: ");
    fgets(NAME, sizeof(NAME), stdin); // Doesn't stops at spaces and take input after we press enter.
    printf("Enter your name b: ");
    scanf("%[^\n]s", Name);  // Doesn't stops at space but stops at next line (enter) command.
    printf("Enter your name c: ");
    scanf("%s", name);  // Stops at first space
    // Printing the output
    printf("Hello, %s!\n", NAME); 
    printf("Hello, %s!\n", Name);
    printf("Hello, %s!\n", name);
    return 0;
}
```

**Output:**

```c
Enter your name a: Santosh Bhat
Enter your name b: Santosh Bhat
Enter your name c: Santosh Bhat

Hello, Santosh Bhat!
Hello, Santosh Bhat!
Hello, Santosh!
```

### String Functions in C

To handle string in C we have following stirng functions. Header file **(`'<string.h>'`)** is used.

| Function      | Description                         | Example Usage           |
| ------------- | ----------------------------------- | ----------------------- |
| `strlen(s)`   | Returns length of string            | `strlen("Hi") → 2`      |
| `strcpy(a,b)` | Copies `b` into `a`                 | `strcpy(a,b)`           |
| `strcat(a,b)` | Appends `b` to `a`                  | `strcat(a,b)`           |
| `strcmp(a,b)` | Compares strings                    | `strcmp("Hi","Hi") → 0` |
| `strchr(s,c)` | Finds first occurrence of character | `strchr("apple",'p')`   |
| `strstr(a,b)` | Finds substring                     | `strstr("Hello","lo")`  |

**Program Examples:**

```c
#include <stdio.h>
#include <string.h>

int main() {
    char str1[20] = "Hello";
    char str2[20] = "Programmers";

    printf("Length of str2: %lu\n", strlen(str2)); //calculating the length of the str2

    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1); //joining given two strings.

    if(strcmp(str1, str2) == 0) //comparing the given strings are equal or not.
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");

    return 0;
}

```

**Output:**

```c
Length of str2: 11
Concatenated string: HelloProgrammers
Strings are not equal
```

## Structure and Union in C-Programming

**Structure:**

A structure in C is a **user-defined data type** that groups different data types under a single name.
It is useful for representing a record (e.g., student info, employee data).

**Syntax:**

```c
struct structure_name 
{
    data_type member1;
    data_type member2;
    ...
};
```

**structure_name:**  
It is the name given by the user to the structure. Example: student, teacher, etc.
**Data-type:**
This gives the info about the type of data that each member of structure holds. Example: **int** for id, **float** for salary and so on.
**member:**  
These are the various information about the user-defined structure and each member have their own data type.
Example: A student have his/her **name, roll no, class**, etc. so these are the member of **student** structure.

**Structure decleartion:**

Below example shows us that the structure name is student with its members **id** and **name**. And decleared the structure **s** as its variable which can store details of 2 students.

```c
struct student
{
    int id;
    char name[20];
}s[2];
```

**Sturcture initilization:**

Structure initilization is the process of adding data to the structure member. This is done inside main() function.

```c
int main()
{
    int i;
    struct student s1 = {1, "Santosh", 89.5};  // Initialization
    for(i=0;i<=2;i++)
    {
        scanf("%d%s",&s[i].id,&s[i].name); // Taking input from user
    }
}
```

**Nested Structure:**

Including one structure inside another structure is called nested structure. This is done if two or more structure are inter-related.

**Syntax:**

```c
#include <stdio.h>

struct struct1
{
    data_type first;
    data_type second;
    ...
};

struct struct2
{
    data_type third;
    data_type fourth;
    ...
    struct struct1 s1; // structure 1 nested inside structure 2
}s2;

// Accessing the member is done this way: 
// 
// s2.third, s2.s1.first, s2.s1.fourth
// 
// when nested structure is used.
```

**Example:**

```c
#include <stdio.h>

struct Address {
    char city[20];
    int pincode;
};

struct Student {
    int roll;
    char name[20];
    struct Address A;   // Nested structure
};

int main() {
    struct Student s1 = {101, "Santosh", {"Pokhara", 45600}};
    printf("Name: %s\nCity: %s\nPincode: %d", s1.name, s1.A.city, s1.A.pincode);
    return 0;
}

```

### Array within structure

Array can be decleared as the member of the sturucture. We can access those array like we access non-array members. We use array in structure while working with string value like names, address, etc.

**Example:**

Here, **name** and **address** are the array as member of structure **Student** with space allocated 20 and 30 bytes.

```c
struct Student {
    int roll;
    char name[20];
    char address[30];
};
```

### Passing structure or member of structure to the function

In function we can pass the **member** or the whole **structure**. Where it can be passed by two ways listed below with example:

**Pass By Value:**

When passing parameter to the function we include actural variable or value in function call.

```c
#include <stdio.h>
void result(int);
struct value {
    int x, y;
};

int main()
{
    struct value p1 = {10, 20};
    result(p1);   // Passing structure by value
    return 0;
}

void result(struct value p)  // Catching the value passed by p1 by p
{
    printf("x = %d, y = %d\n", p.x, p.y);
}
```

**Pass By Reference:**

When passing parameter to the function we pass **pointer** instead of actual variable or value in function call.
**Pointer:** It is a variable that contains the address of another variable which store the actual value. So, pointer is also called **reference** to another variable.

```c
#include <stdio.h>
void result(int);
struct value {
    int x, y;
};

int main()
{
    struct value p1 = {10, 20};
    result(&p1);   // Passing structure by reference
    printf("x = %d, y = %d\n", p1.x, p1.y);
    return 0;
}

void result(struct value *p)  // decleared pointer "p" to catch address of "p1"
{
    p->x = 100; // sets the x member of the structure to 100
    p->y = 200; // sets the y member of the structure to 200
}
```

### Size of structure

This gives us the information about, how much size does an structure of union occupy in the memory. It is determined using **sizeof(structure_variable)** function. Concept of **padding** is related to this part.

**Padding:** Padding in C refers to the extra bytes added by the compiler inside a structure (or union) to align data in memory according to the CPU’s word boundary requirements. Below is the guidelines to use various datatype to eliminate memory allocation issue.

- **int** occupy 4 bytes so the space given to any variable with this data type should be divisible by 4.

- **short** occupy 2 bytes so the space given to any variable with this data type should be divisible by 2.

- **double** occupy 8 bytes so the space given to any variable with this data type should be divisible by 8.

- **char** occupy 1 byte so the space given to any variable with this data type should be divisible by 1.

If not aligned, the CPU may need **multiple memory accesses**, slowing down execution.

## Union

A union is similar to a structure, but in union **all members share the same memory location**.

- Only one member can be used at a time.
- Memory allocated = size of largest memory occuping member.
