### OOPJ revolves around object

- An **Object** is an entity having 2 things :

  1. State/properties
  2. Behaviour

- Object usualy is a real world entity.

- Aim of OOP is to increase
  1. Readability
  2. Managablity
  3. Extensibility

Example : Hero is an object having properties

1. Name,
2. health,
3. level.

And this object has behaviours of ->

1. attack(),
2. defence(),
3. dance().

---

### 👉🏻 Class :

- From [Class] blueprint ------instance-----> [Object] is created
- Object is an instance of **class**.
- User defined data type.
- Example : `hero Tony`, here Tony is an object whose datatype is of hero type like int, string, char.
- Here `hero` is our user defined datatype(custom made).
- The object of empty class has 1 byte of memory allocated as it needs to keep some identification for tracking it.

---

### Access Modifiers

- Access Modifiers tells us what the scope of access of the properties of the class.
- To access data members/properties of a class, we use `.` operator
- But accessing the properties using dot operator like the following can give error

```
h2.health
```

because by default the properties defined inside class are private untill and unless they're explicitly defined public.

Three Types :

1. Public (whatever written below `public` keyword will be publically avaiable to everyone2)
2. Private (By default the properties/data members inside thee class r Private )
   - can use getter/setter methods to access private members when private and public members both are defined in a class
   - getter & setter methods can be used to manipulate and read the private members
3. Protected

---

## HW :

### Greedy alignment

1. Structure member alignment
   1. When a data type is naturally aligned, the CPU fetches it in minimum read cycles.
   2. The natural alignment of `int` on 32-bit machine is 4 bytes.
   3. Similarly, the natural alignment of `short int` is 2 bytes.
   4. A `double` requires 8 bytes, and occupies two rows in the memory banks on a 32 bit machine so 2 memory read cycles.
      1. On a 64 bit machine, based on number of banks, double variable will be allocated on 8 byte boundary and requires only one memory read cycle.

### Padding

1. Example :
   1. The first member of structb_t is `short int` followed by char of size 2
   2. Next is `char` of size 1 byte and no padding requirement between char and int.
   3. The next member is `int`. If the int is allocated immediately, it will start at an odd byte boundary. We need 1 byte padding after the char member to make the address of next int member is 4 byte aligned.
   4. So total 2 + 1 + 1 (padding) + 4 = 8 bytes.

```
typedef struct structb_tag
{
   short int   s;
   char        c;
   int         i;
} structb_t;

```

- Rule 1
  - Any datatype will always store it's value at the memory address which is multiple of the size of that datatype.
- Rule 2
  - Structure will take the size equal to the multiple of maximum bytes taken by a structure member
  - Eg : if `structc_t` has a double type member then it's size will be multiples of 8 bytes. For 32 bit machine : sizeof(char) + 7 byte padding + sizeof(double) + sizeof(int) = 1 + 7 + 8 + 4 = 20 bytes because `double d` had to start from (0x16) address due to rule no.1 so inbetween padding of 7. But every structure will also have alignment requirement so based on rule 2 structure size should be x8 so padding of extra 4bytes will be done above 20bytes making it total 24 sized structc_t
  ```
  typedef struct structc_tag
  {
    char        c;
    double      d;
    int         s;
  } structc_t;
  ```

#### To decrease padding

- Declare the structure members in their increasing/decreasing order of size.
- Example shows the structure size to be 16 instead of 24 of above example structc_t.

```
typedef struct structd_tag
{
   double      d;
   int         s;
   char        c;
} structd_t;
```

## Ref : https://www.geeksforgeeks.org/structure-member-alignment-padding-and-data-packing/

### Constructor

#### Default constructor

- Whenever we create an object, it's constructor is called.
- i.e. Invoked at the time of object creation for example at line `Hero tony`.
  - So behind the scene a default constructor is called by default like `tony.Hero()` means `Hero()` function for object `Tony`
- It has no return type
- It has no input parameter
- Same name as class
- Same constructor will be called whether object is created statically or dynamically
- Once a user defined constructor is made, the system made default constructor is not impplemented but instead the user defined one is only used.

### Parameterized Constructor

1. Initialize the object creation by passing parameter like `Heroine kiara(10);`
2. `this` keyword - A pointer where address of current object is stored inside it.
   1. Used when same name is there of input paramter and data member
3. If creating an object without parameters and the class has only parameterized constructor but not a simple user-defined constructor then this situation will throw an error as system wont build a default constructor for a simple object declaration because already parameterized constructors existence will delete all the default constructors.
   1. So must write a default constructor for simple object creations if defining the parameterized constructors too !
   2. If we make only Parameterized constructor and not the simple constructor to replace the default constructor then error will come up. Because of this always write simple constructor too along with Parameterized one.

### Copy Constructor

1. A copy constructor is built by default upon creation of the class.
2. Once copy constructor is made by us, then the default one made by compiler is destroyed.

-

1. Default Copy Constructor does "**Shallow copy**".

   1. Acessing the same memory in shallow copy with 2 diff names but same location.

2. **"Deep Copy"** means making a separate copy like 'pass by value' concept.

#### Copy assignment operator

1. Used to equate values of 2 already defined objects
2. Like `kalia = alia;`

---

### Destructor

1. Used to deallocate memory (free memory) before the program reaches `}` last paranthesis for program termination.
2. A Destructor is created automatically when the object is created.
3. Destructor gets called automatically for static allocation.
4. Destructor doesnt gets called automatically for dyanmically allocated object. Need to do it manually.

- It has no return type
- It has no input parameter
- Same name as class
- Defined using `~` symbol
- Called only once at the time of object destuction

### `const` keyword

- The const keyword must be initialized with some value at the time of assignment.
  ```
      const int y = 10;
  ```
- A const class must have only const data members.
- When a function is declared as const, it can be called on any type of object, const object as well as non-const objects.
- Whenever an object is declared as const, it needs to be initialized at the time of declaration. However, the object initialization while declaring is possible only with the help of constructors.

1. For object creation
2. const type functions (const functions)
3. HOw to use const in Data members

### Initialization list

1. Used to initialize objects
2. Syntax :

```
constructor (arg-list) : initialization-list{
  other code;
}
```

3. It is a way to provide values to the data members of the class
4. Used when constructor body becomes very complex and need to initialize some values at start only.

### `static` keyword

- Example : `int timeToCompete` will be higher level entity in the class which wont be dependent on hero/heroine/enemy. It'll keep running irrespective of either of them.
- It belongs to class
- No need to create an object to access it.
- Static members needs to be initialized outside the class using scope resolution operator `::`
- Static members belong to the class and not to objects.
- Syntax :
  ```
  datatype class_name :: datamember_name = value ;
  ```

### `static` functions

- No need to create object
- Can use class_name to call them.
- They dont have `this` keyword(pointer to current object) due to no object.
  - Means it cannot access any data members of the class as object creation is needed for that.
  - Nor `this` keywors is used due to no role of objects.
- static functions can <u>**only access static members**</u>.
