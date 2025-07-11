# 🧱 C++ Classes and Objects – Practice Problem Set

This set introduces Object-Oriented Programming using classes and objects in C++, categorized for progressive learning.

---

## 🟢 Category 1: Output-Based Questions (Conceptual)

1.
```cpp
class Test {
    public:
    int x = 10;
};
Test t;
cout << t.x;
```

2.
```cpp
class A {
    public:
    A() { cout << "Constructor called"; }
};
A obj;
```

3.
```cpp
class Demo {
    int a = 5;
    public:
    void show() { cout << a; }
};
Demo d;
d.show();
```

4.
```cpp
class Sample {
    public:
    void greet() { cout << "Hi"; }
};
Sample s1, s2;
s1.greet();
s2.greet();
```

5.
```cpp
class A {
    public:
    int x;
};
A obj;
obj.x = 15;
A obj2 = obj;
obj2.x = 25;
cout << obj.x;
```

---

## 🟡 Category 2: Basic Class Implementations

6. Create a class `Student` with data members: `name`, `roll`, `marks`. Input and display info.

7. Create a class `Rectangle` with data members: `length`, `breadth`. Add function to calculate area.

8. Create class `Time` with data members: `hours`, `minutes`. Add two time objects.

9. Create class `Complex` with data members: `real`, `imag`. Add and display complex numbers.

10. Create class `Book` with data members: `id`, `title`, `author`. Display using a function.

11. Create class `Employee` with data members: `name`, `salary`. Input 5 records, display those with salary > 50K.

12. Create class `BankAccount` with data members: `accountNumber`, `balance`. Functions for deposit and withdraw.

13. Create class `Circle` with data member: `radius`. Functions to calculate area and circumference.

14. Define a class `Point` with data members: `x`, `y`. Find distance between two points.

15. Class `Box` with data members: `length`, `width`, `height`. Calculate volume and surface area.

---

## 🟠 Category 3: Class Functions, Constructors, Scope

16. Use parameterized constructor in class `Student` with members: `name`, `roll`, `marks`.

17. Create a class `Car` with data members: `model`, `year`. Use a static variable to count number of objects.

18. Class `Product` with data members: `id`, `price`. Implement default, parameterized, and copy constructors.

19. Create `Movie` class with data members: `title`, `rating`. Sort array of objects by rating.

20. Create class `Fraction` with data members: `numerator`, `denominator`. Simplify it using GCD in member function.

21. Class `Maths` with inline functions for operations like `add`, `square` using one member variable.

22. Class `Date` with members: `day`, `month`, `year`. Compare two dates using member functions.

23. Create class `Person` with data members: `name`, `address`. Overload display function with and without address.

24. Class `Result` with members: `marks[3]`, `total`, `avg`. Constructor auto-computes total/average.

25. Create class `Account` with members: `accNum`, `balance`. Member function to check if balance < 5000.

---

## 🔴 Category 4: Object-Oriented Concepts / DSA-Level Use

26. Class `Matrix` with 2D array as member. Implement matrix addition and transpose.

27. Class `Polynomial` with data members: `coeff[]`, `power[]`. Add two polynomials.

28. Class `Inventory` with members: `id`, `name`, `quantity`, `price`. Implement search, update, delete.

29. Class `Queue` using array with members: `arr[]`, `front`, `rear`. Implement enqueue, dequeue.

30. Class `Stack` using array with members: `arr[]`, `top`. Implement push, pop, display.

31. Class `Library` with data member: `books[]`. Store book objects and search by title.

32. Class `GraphEdge` with members: `src`, `dest`, `weight`. Generate adjacency matrix from edges.

33. Class `Course` with member: `studentNames[]`. Manage enrolled students and display names.

34. Class `TicketSystem` with members: `seatNo`, `status`. Simulate seat allocation.

35. Class `StudentRecord` with members: `name`, `grades[]`, `cgpa`, `status`. Track academic performance.

---

✨ *This problem set introduces encapsulation, constructors, object management, and design-level thinking with C++ classes and objects.*
