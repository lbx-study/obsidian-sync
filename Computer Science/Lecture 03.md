Here are structured notes for the provided extract from the programming lecture slides:

---

### **Learning Objectives [Lecture 5]**

- **Data Types**
- **Keywords in C**
- **Identifiers**
- **Variables**

---

### **Basic Data Types in C**

|Sl. No|Name|Description|Size in Byte|Format Specifier|Range|
|---|---|---|---|---|---|
|1|int|Integer|4|`%d`|-(2³¹) to (2³¹)-1|
|2|long int|Large integer|8|`%ld`|-(2⁶³) to (2⁶³)-1|
|3|char|Character|1|`%c`|-128 to 127 or -(2⁷) to (2⁷)-1|
|4|float|Single precision floating|4|`%f`|1.2E-38 to 3.4E+|
|5|double|Double precision floating|8|`%lf`|1.7E-308 to 1.7E+|
|6|long double|Extended double precision|12-16|`%Lf`|3.4E-4932 to 1.1E+|

---

### **Single and Double Precision Format**

|**Precision**|**Representation**|**Details**|
|---|---|---|
|**Single Precision**|`S EEEEEEEE FFFFFFFFFFFFFFFFFFFFFFF`|Sign: 1 bit, Exponent: 8 bits, Fraction: 23 bits|
|**Double Precision**|`S EEEEEEEEEEE FFFFFFFFFFFFFFFFFFFFFFF`|Sign: 1 bit, Exponent: 11 bits, Fraction: 52 bits|

---

### **C vs. English Language Analogy**

|**English Language**|**C Programming**|
|---|---|
|Vocabulary|Keywords and operators|
|Grammar|Syntax|
|Sentences|Statements|
|Paragraphs|Blocks|
|Essays|Programs|

---

### **Keywords in C**

- Reserved words with predefined meanings.
- Cannot be used as variable, constant, or function names.

---

### **Identifiers**

- Valid names assigned to variables, constants, functions, etc.
- Rules:
    - Can contain letters (a-z, A-Z), digits (0-9), and underscore (`_`).
    - Cannot contain white spaces or keywords.
    - Case-sensitive (e.g., `NAME` and `name` are different).

**Examples of Valid Identifiers:**

- `Ecs_`
- `_program`

**Examples of Invalid Identifiers:**

- `Ecs 102` (contains white space)
- `int` (keyword)

---

### **Variables**

- **Definition:** Name of a memory location to store data.
- **Declaration Syntax:**
    
    ```c
    data_type variable_name;
    ```
    
    **Example:**
    
    ```c
    int age;     // 4 Bytes
    char gender; // 1 Byte
    ```
    
- **Initialization Syntax:**
    
    ```c
    data_type variable_name = value;
    ```
    
    **Example:**
    
    ```c
    int age = 22;       // 4 Bytes
    char gender = 'M';  // 1 Byte
    ```
    

---

### **C Programs**

#### Program 1: Convert Celsius to Fahrenheit

```c
#include<stdio.h>
int main(void) {
    float cel = 37.0; // Initialize Celsius temperature
    float far;        // Declare Fahrenheit variable
    far = ((cel * 9) / 5) + 32; // Conversion formula
    printf("Given temperature in Celsius is %f\n", cel);
    printf("Converted into Fahrenheit is %f\n", far);
}
```

**Output:**

```
Given temperature in Celsius is 37.0
Converted into Fahrenheit is 98.0
```

---

#### Program 2: Input and Display User Details

```c
#include<stdio.h>

int main(void) {
    // Declare variables
    char name[20];
    int age;
    char gender;
    float salary;
    long mobile_num;

    // Prompt user for input
    printf("Input Your Name, Age, Gender, Salary, and Mobile Number:\n");

    // Take input
    scanf("%s %d %c %f %ld", name, &age, &gender, &salary, &mobile_num);

    // Print the user’s details
    printf("Your Details...\n");
    printf("%s, %d, %c, %.2f, %ld\n", name, age, gender, salary, mobile_num);
}

```

**Output:**

```
Input Your Name, Age, Gender, Salary, and Mobile Number
Akash 37 M 12345 9898989898
Your Details...
Akash, 37, M, 12345.000000, 9898989898
```

---

Let me know if you need further refinements!e