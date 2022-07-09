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
