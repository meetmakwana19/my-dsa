# Some imp points for C++ CP :

1. [Pass by value vs Paass by reference](https://www.tutorialspoint.com/differences-between-pass-by-value-and-pass-by-reference-in-cplusplus)

2. Giving array size at runtime is very very bad practise
   1. ```
       cin >> n;
       int arr[n];
      ```
   2. Here size of arr n is passed at runtime which is bad practise as compiler gets to knows to reserve memory for array at runtime instead of knowing it before at compile time
   3. Knowing things at compile time is a good time.
   4. Reason :
      1. Executable c++ programs are assigned 2 type of memories : 1)Stack & 2)Heap.
      2. Stack is smaller and implements arrays
      3. Heap is bigger
      4. Therefore if a bbigger sized array is asked to be created at runtime then it can exceed stack size.
      5. It'll result in a crash.
3. Therefore, variable datatypes are implemented in heap memory as it has plenty of space avaible.

   1. `new` keyword is used.
   2. Variables cannot be named in heap for memory aaccess but pointers can be useed.
      1. `char *ch = new char; `
   3. For releasing heap memory use `delete` keyword
      1. `delete i;` for int \*i = new int;
      2. `delete ptr;` for int \*ptr = new int;
      3. `delete[] arr;` for int \*arr = new arr[];

4. Static memory allocation is done by using stack and dynamic memory allocation is done by using heap.
5. `#include<>` is pre-processor directive
   1. Means before comilation, the code from these directives will be brought for the program execution in memory
6. `#define` is used to create/define **macros**.
   1. ```
      #define PI 3.14
      ```
7. Macro is a piece of code that is replaced by it's value upon it's call.
   1. Before compilation, the values of macros are replaced.
   2. Macros cannot be change in runtime, once they're defined
   3. [More on Macros](https://www.geeksforgeeks.org/macros-and-its-types-in-c-cpp/#:~:text=A%20macro%20is%20a%20piece,the%20definition%20of%20the%20macro.)
8. Sharing of variables....Two ways :
   1. Referencing variable like `void func(int &a)` - **Preferred**
   2. Global Variables but it is a bad practise ass any functioon can change it and affect the code
9. **Inline functions :** - Wherever they're called, the defination is replaced by the codeline automatically in whole prgram before compilation.
   1. When function body is of single line, inline fucntion will n=be made by compiler.
   2. When function body is of 2-3 lines, compiler's wish to make it inline or not
   3. When function body is of more than 3 lines, compiler will deny making inline function
10. **Recursion** - A function calling itself again in it's own body.
    1. Mandotary things for a recursion :
       1. Baase condition
       2. Recursive relation
       3. Processing(optional) - like `cout`
    2. Types :-
       1. Tail recursion (Base condn -> processing -> Recursive relation)
       2. Head recursion(Base condn -> Recursive relation -> processing)
    3.
