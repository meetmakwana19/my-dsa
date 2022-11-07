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
- The object of empty class has 1 byte of memory allocated.

---

### Access Modifiers

- Access Modifiers tells us what the scope of access of the properties of the class.
- To access data members/properties of a class, we use `.` operator

Three Types :

1. Public (whatever written below `public` keyword will be publically avaiable to everyone2)
2. Private (By default the properties/data members inside thee class r Private )
3. Protected (can use getter/setter methods to access private members)

---

### Constructor

- Whenever we create an object, it's constructor is called.
- i.e. Invoked at the time of object creation.
- It has no return type
- It has no input parameter
- Same name as class

### Parameterized Constructor

1. `this` keyword - Address of current object is stored inside it.
2. If we make only Parameterized constructor and not the simple constructor to replace the default constructor then error will come up. Because of this always write simple constructor too along with Parameterized one.

### Copy Constructor

1. A copy constructor is built by default upon creation of the class.
2. Once copy constructor is made by us, then the default one made by compiler is destroyed.

-

1. Default Copy Constructor does "**Shallow copy**".

   1. Acessing the same memory in shallow copy with 2 diff names but same location.

2. **"Deep Copy"** means making a separate copy like 'pass by value' concept.

---

### Destructor

1. Used to deallocate memory (free memory)
2. A Destructor is created automatically when the object is created.
3. Destructor gets called automatically for static allocation.
4. Destructor doesnt gets called automatically for static. Need to do it manually.

- It has no return type
- It has no input parameter
- Same name as class
- Defined using `~` symbol

### `const` keyword

- The const keyword must be initialized with some value at the time of assignment.
  ```
      const int y = 10;
  ```
- A const class must have only const data members.
- When a function is declared as const, it can be called on any type of object, const object as well as non-const objects.
- Whenever an object is declared as const, it needs to be initialized at the time of declaration. However, the object initialization while declaring is possible only with the help of constructors.

1. For object creation
2. const type functions

### Initialization list

### `static` keyword

- Example : int timeToCompete will be higher level entity in the class which wont be dependent on hero/heroine/enemy. It'll keep running irrespective of either of them.
- It belongs to class
- No need to create an object to access it.
- Static members needs to be initialized outside the class using scope resolution operator.
- Syntax :
  ```
  datatype class_name :: datamember_name = value ;
  ```

### `static` functions

- No need to create object
- Can use class_name to call them.
- They dont have `this` keyword(pointer to current object) due to no object.
- static functions can only access static members.
