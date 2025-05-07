Style Guide for C

### **1\) Line Length**

By convention the maximum length of a line of code is 80 characters long in C, with that being historically grounded in standard-sized monitors on older computer terminals, which could display 24 lines vertically and 80 characters horizontally.

### **2\) Comments**

Comments make code more readable, not only for others but also for you, especially when hours, days, weeks, months, or years pass between writing and reading your own code. Commenting too little is bad. Commenting too much is bad. Commenting every few lines of code (i.e., interesting blocks) is a decent guideline. 

2.1) Within functions, use "inline comments" and keep them short (e.g., one line), else it becomes difficult to distinguish comments from code, even with syntax highlighting. 

2.2) Place the comment above the line(s) to which it applies

2.3) Capitalize the comment's first word (unless it's the name of a function, variable), 

2.4) Do leave one space between the \`//\` and your comment's first character, as in:

// Convert Fahrenheit to Celsius  
float c \= 5.0 / 9.0 \* (f \- 32.0);

In other words, don't do this:

//Convert Fahrenheit to Celsius  
float c \= 5.0 / 9.0 \* (f \- 32.0);

Or this:

// convert Fahrenheit to Celsius  
float c \= 5.0 / 9.0 \* (f \- 32.0);

Or this:

float c \= 5.0 / 9.0 \* (f \- 32.0); // Convert Fahrenheit to Celsius

### **3\) Library Headers**

Any library headers that you include should be listed in alphabetical order, as in:

\#include \<array.h\>

\#include \<stdio.h\>

\#include \<string.h\>

### **4\) Conditions**

Conditions should be styled as follows:

if (x \> 0\)  
{  
    printf("x is positive\\n");  
}  
else if (x \< 0\)  
{  
    printf("x is negative\\n");  
}  
else  
{  
    printf("x is zero\\n");  
}

Notice how:

4.1) The curly braces should be each on its own line, making perfectly clear what's inside the branch;

4.2) There's a single space after each \`if\`;

4.3) Each call to \`printf\` is indented with 4 spaces;

4.4) There are single spaces around the \`\>\` and around the \`\<\`; and

4.5) There isn't any space immediately after each \`(\` or immediately before each \`)\`.

### **5\) Switches**

Declare a \`switch\` as follows:

switch (n)  
{  
    case \-1:  
        printf("n is \-1\\n");  
        return;

    case 1:  
        printf("n is 1\\n");  
        break;

    default:  
        printf("n is neither \-1 nor 1\\n");  
        break;  
}

Notice how:

5.1) Each curly brace is on its own line;

5.2) There's a single space after \`switch\`;

5.3) There isn't any space immediately after each \`(\` or immediately before each \`)\`;

5.4) The switch's cases are indented with 4 spaces;

5.5) The cases' bodies are indented further with 4 spaces;

5.6) Each \`case\` (including \`default\`) ends with a \`break\`, except it’s a return statement.

5.7) There should be no empty lines between each \`case\`

### **6\) Functions**

6.1) Each curly brace is on its own line;

6.2) There isn’t any space between function name and parameter’s open bracket \`(\`

6.3) Function body is intended with 4 spaces;

6.4) There is a 1 space between each function parameter

### **7\) Indentation**

Indent your code 4 spaces at a time to make clear which blocks of code are inside of others. If you use your keyboard's Tab key to do so, be sure that your text editor's configured to convert tabs (\`\\t\`) to four spaces, else your code may not print or display properly on someone else's computer

Here's some nicely indented code:

// Print command-line arguments one per line  
printf("\\n");  
for (int i \= 0; i \< argc; i++)  
{  
    for (int j \= 0, n \= strlen(argv\[i\]); j \< n; j++)  
    {  
        printf("%c\\n", argv\[i\]\[j\]);  
    }  
    printf("\\n");  
}

### **8\) Loops**

#### **8.1) for**

Whenever you need temporary variables for iteration, use \`i\`, then \`j\`, then \`k\`, unless more specific names would make your code more readable:

for (int i \= 0; i \< LIMIT; i++)  
{  
    for (int j \= 0; j \< LIMIT; j++)  
    {  
        for (int k \= 0; k \< LIMIT; k++)  
        {  
            // Do something  
        }  
    }  
}

#### **8.2) while**

Declare \`while\` loops as follows:

while (condition)  
{  
    // Do something  
}

Notice how:

8.2.1) Each curly brace is on its own line;

8.2.2) There's a single space after \`while\`;

8.2.3) There isn't any space immediately after the \`(\` or immediately before the \`)\`; and

8.2.4) The loop's body (a comment in this case) is indented with 4 spaces.

#### **8.3) do ... while**

Declare \`do ... while\` loops as follows:

do  
{  
    // Do something  
}  
while (condition);

Notice how:

8.3.1) Each curly brace is on its own line;

8.3.2) There's a single space after \`while\`;

8.3.3) There isn't any space immediately after the \`(\` or immediately before the \`)\`; and

8.3.4) The loop's body (a comment in this case) is indented with 4 spaces.

### **9\) Pointers**

When declaring a pointer, write the \`\*\` next to the variable, as in:

int \*p;

Don't write it next to the type, as in:

int\* p;

### **10\) Variables**

10.1) Do not define all of your variables at the very top of your functions but, rather, when and where you actually need them. Moreover, scope your variables as tightly as possible. For instance, if \`i\` is only needed for the sake of a loop, declare \`i\` within the loop itself:

for (int i \= 0; i \< LIMIT; i++)  
{  
    printf("%i\\n", i);  
}

10.2) Though it's fine to use variables like \`i\`, \`j\`, and \`k\` for iteration, most of your variables should be more specifically named. If you're summing some values, for instance, call your variable \`sum\`. If your variable's name warrants two words (e.g., \`is\_ready\`), put an underscore between them

10.3) If declaring multiple variables of the same type at once, it's fine to declare them together, as in:

int quarters, dimes, nickels, pennies;

But don't initialize some but not others, as in:

int quarters, dimes \= 0, nickels \= 0 , pennies;

10.4) Also take care to declare pointers separately from non-pointers, as in:

int \*p;  
int n;

Don't declare pointers on the same line as non-pointers, as in:

int \*p, n;

### **11\) Structures**

Declare a \`struct\` as a type as follows, with each curly brace on its own line and members indented therein, with the type's name also on its own line:

typedef struct  
{  
    string name;  
    string dorm;  
} student;

