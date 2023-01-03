## Encapsulation

- Wrapping up `data members`(properties/state) and `functions`(methods/behaviours) like capsulating small parts into one single `class`(capsule entity).
- **`Fully encapsulated class`** : All data members are privately marked to use it only in the same class.
- In short, it is **`Information/data hiding`** while Abstraction is Implementation hiding

#### Applications :

1. Data hiding
2. Thus security increased
3. Can make the class read-only by only writing an explicit getter method but not writing a setter method.
4. Code reusablity
5. Helps in Unit testing and management

---

## Inheritance

- Inheriting properties from one class to another
- Example, male and female can inherit properties from a human class
- Parent/Super class and child/sub class
- Advantages :
  - code reusablity
  - runtime Polymorphism can be achieved
- C++ inheritance syntax:

```
class parent_class {
    //Body of parent class
};

class child_class: access_modifier parent_class {
    //Body of child class
};
```

#### Modes of inheritance

1. Public
2. Private
3. Protected mode - Similar to private mode that data members can be accessed within the class only but with one condition that a child class will be able to inherit those private data members too.

```
Parent class                Child class
    |                           |
    V                           V
(Access modifier on        (Mode of inheritance
properties/members)        while defining child)
    |                       |
    V                       V
    public         +    public          -> public
    public         +    protected       -> protected
    public         +    private         -> private

    protected      +    public          -> protected
    protected      +    protected       -> protected
    protected      +    private         -> private

    private        +    public     -> Not accessible
    private        +    protected  -> Not accessible
    private        +    private    -> Not accessible
                                            |
                                            V
                                    (Access for
                                     inherited data
                                     members)
```

Means private data members of parent class cannot be inherited

### Types of Inheritance

1. Single Inheritance
   1. A -> B
   2. Animal -> Dog
2. Multi-level
   1. A -> B -> C -> D
3. Multiple
   1. A & B -> C
4. Hierarchical
   1. One parent can child multiple classes
   2. Think it like a tree/graph diagram data structure
5. Hybrid
   1. Combination of more than one type of inheritance

### Inheritance ambiguity

1. Lets say in the case of Multiple inheritance, 2 parent classes have functions with same name which is inherited by a child class. So an ambiguity will be there because of same inherited function name.
2. To avoid this, we can use **`Scope resolution operator`** `::` like

```
object.class_name::method_name();

obj.A::func();
obj.B::func();
```

---

## Polymorphism

- Existing on multiple forms
- Example :
  - Father is husband for mom
  - Father is brother for aunt
  - Father is grandpa for son
  - Father is son for his Father
- Father has multiple roles existing together.
- Type
  - Compile time (static)
  - Run time (dynamic)

### Compile time Polymorphism (Static Polymorphism)

1. We know before execution that things are existing in which which forms
2. Two Types
   1. `**Function overloading**` - Making multiple functions with same name with help of passing different number/types of parameters for each overloaded function with same name.
      1. Cannot overload functions by changing it's return type like `void func()` and `int func()` cannot be overloading in the same class
   2. `**Operator overloading**` - Using same operator for multiple purposes.
      1. Cannot overload these four `::`, `.*`, `.`, `?:` operators
      2. Check this https://www.codingninjas.com/codestudio/guided-paths/basics-of-c/content/118817/offering/1382250 for the list of operators which can be operated
      3. `+` is a binary operator as a + b happens with the help of 2 operands.
      4. `++` is a unary operator as i++ happens with the help of only 1 operand.

### Runtime Polymorphism (Dynamic Polymorphism)

1. **`Method/Function overriding`** happens here :- Implementation changes as per need
2. Rules :
   1. Inheritance is needed
   2. Name of the functions/methods must be same
   3. Same number of parameters in the functions/methods

---

## Abstraction

- Implementation hiding
- Process of generalisation the features and only showing required things to the users
- Keeping implementation details separate from other associated data
- Abstarction and Encapsulation can go hand to hand
  - Eg : When data members are encapsulated inside a function. Using function only instead of data members can be abstraction.
- Advantages :
  - Only you can make changes and not any one else
  - App gets secured
  - Avoids duplication
