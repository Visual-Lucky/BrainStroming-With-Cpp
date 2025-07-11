# ✅ C++ Classes and Objects – Solutions to Practice Problems

Solutions and logic to the 35 questions covering class and object concepts.

---

## 🟢 Category 1: Output-Based Questions

1. `10`

2. Output: `Constructor called`

3. `5`

4. `HiHi`

5. `15` (obj is not affected by obj2 changes – separate memory)

---

## 🟡 Category 2: Basic Class Implementations

6.
```cpp
class Student {
  public:
    string name;
    int roll;
    float marks;
    void input() {
        cin >> name >> roll >> marks;
    }
    void display() {
        cout << name << " " << roll << " " << marks;
    }
};
```

7.
```cpp
class Rectangle {
  public:
    int length, breadth;
    int area() { return length * breadth; }
};
```

8.
```cpp
class Time {
  public:
    int hours, minutes;
    void add(Time t1, Time t2) {
        minutes = (t1.minutes + t2.minutes) % 60;
        hours = t1.hours + t2.hours + (t1.minutes + t2.minutes)/60;
    }
};
```

9.
```cpp
class Complex {
  public:
    int real, imag;
    void add(Complex c1, Complex c2) {
        real = c1.real + c2.real;
        imag = c1.imag + c2.imag;
    }
};
```

10.
```cpp
class Book {
  public:
    int id;
    string title, author;
    void display() {
        cout << id << " " << title << " " << author;
    }
};
```

11.
```cpp
class Employee {
  public:
    string name;
    float salary;
};
// Input 5 and check if salary > 50000
```

12.
```cpp
class BankAccount {
  public:
    int accNum;
    float balance;
    void deposit(float amt) { balance += amt; }
    void withdraw(float amt) {
        if (amt <= balance) balance -= amt;
    }
};
```

13.
```cpp
class Circle {
  public:
    float radius;
    float area() { return 3.14 * radius * radius; }
    float circum() { return 2 * 3.14 * radius; }
};
```

14.
```cpp
class Point {
  public:
    int x, y;
    float distance(Point p) {
        return sqrt(pow(x - p.x, 2) + pow(y - p.y, 2));
    }
};
```

15.
```cpp
class Box {
  public:
    int l, w, h;
    int volume() { return l * w * h; }
    int surfaceArea() { return 2*(l*w + w*h + h*l); }
};
```

---

## 🟠 Category 3: Constructors, Static, Overloading

16.
```cpp
class Student {
  public:
    string name;
    int roll;
    float marks;
    Student(string n, int r, float m) {
        name = n; roll = r; marks = m;
    }
};
```

17.
```cpp
class Car {
  public:
    string model;
    int year;
    static int count;
    Car() { count++; }
};
int Car::count = 0;
```

18.
```cpp
class Product {
  public:
    int id;
    float price;
    Product() {}
    Product(int i, float p) { id = i; price = p; }
    Product(Product &p) { id = p.id; price = p.price; }
};
```

19.
```cpp
// Create Movie class with rating, then sort with custom comparator or bubble sort
```

20.
```cpp
class Fraction {
  public:
    int num, den;
    void simplify() {
        int gcd = __gcd(num, den);
        num /= gcd; den /= gcd;
    }
};
```

21.
```cpp
class Maths {
  public:
    inline int square(int x) { return x * x; }
};
```

22.
```cpp
class Date {
  public:
    int d, m, y;
    bool isEarlier(Date other) {
        if (y != other.y) return y < other.y;
        if (m != other.m) return m < other.m;
        return d < other.d;
    }
};
```

23.
```cpp
class Person {
  public:
    string name, address;
    void display() { cout << name; }
    void display(bool full) { if(full) cout << name << " " << address; }
};
```

24.
```cpp
class Result {
  public:
    int marks[3];
    int total;
    float avg;
    Result(int m[]) {
        total = m[0] + m[1] + m[2];
        avg = total / 3.0;
    }
};
```

25.
```cpp
class Account {
  public:
    int accNum;
    float balance;
    bool isLow() { return balance < 5000; }
};
```

---

## 🔴 Category 4: DSA + OOP Integration


### 26. Matrix Addition and Transpose
```cpp
#include <iostream>
using namespace std;
class Matrix {
public:
    int mat[2][2];
    void input() {
        for(int i=0;i<2;i++)
            for(int j=0;j<2;j++)
                cin >> mat[i][j];
    }
    void add(Matrix m) {
        for(int i=0;i<2;i++) {
            for(int j=0;j<2;j++) {
                cout << mat[i][j] + m.mat[i][j] << " ";
            }
            cout << endl;
        }
    }
    void transpose() {
        for(int i=0;i<2;i++) {
            for(int j=0;j<2;j++) {
                cout << mat[j][i] << " ";
            }
            cout << endl;
        }
    }
};
int main() {
    Matrix a, b;
    a.input();
    b.input();
    cout << "Sum:\n"; a.add(b);
    cout << "Transpose of A:\n"; a.transpose();
    return 0;
}
```

### 27. Polynomial Addition
```cpp
#include <iostream>
using namespace std;
class Polynomial {
public:
    int coeff[10], power[10], terms;
    void input() {
        cin >> terms;
        for(int i=0;i<terms;i++) cin >> coeff[i] >> power[i];
    }
    void add(Polynomial p) {
        int i = 0, j = 0;
        while(i < terms && j < p.terms) {
            if(power[i] == p.power[j]) {
                cout << coeff[i] + p.coeff[j] << "x^" << power[i] << " ";
                i++; j++;
            } else if(power[i] > p.power[j]) {
                cout << coeff[i] << "x^" << power[i] << " ";
                i++;
            } else {
                cout << p.coeff[j] << "x^" << p.power[j] << " ";
                j++;
            }
        }
        while(i < terms) cout << coeff[i] << "x^" << power[i++] << " ";
        while(j < p.terms) cout << p.coeff[j] << "x^" << p.power[j++] << " ";
    }
};
int main() {
    Polynomial p1, p2;
    p1.input();
    p2.input();
    cout << "Sum of polynomials: ";
    p1.add(p2);
    return 0;
}
```

### 28. Inventory Management
```cpp
#include <iostream>
using namespace std;
class Item {
public:
    int id, qty;
    string name;
    float price;
};
int main() {
    Item items[5];
    for(int i = 0; i < 5; i++) {
        cin >> items[i].id >> items[i].name >> items[i].qty >> items[i].price;
    }
    int searchId;
    cin >> searchId;
    for(int i = 0; i < 5; i++) {
        if(items[i].id == searchId) {
            cout << items[i].name << " " << items[i].price << endl;
            break;
        }
    }
    return 0;
}
```

### 29. Queue
```cpp
#include <iostream>
using namespace std;
class Queue {
    int arr[100], front, rear;
public:
    Queue() { front = rear = -1; }
    void enqueue(int val) {
        if(rear == 99) return;
        if(front == -1) front = 0;
        arr[++rear] = val;
    }
    void dequeue() {
        if(front == -1 || front > rear) return;
        front++;
    }
    void display() {
        for(int i = front; i <= rear; i++) cout << arr[i] << " ";
    }
};
int main() {
    Queue q;
    q.enqueue(10); q.enqueue(20); q.enqueue(30);
    q.display(); cout << endl;
    q.dequeue();
    q.display();
    return 0;
}
```

### 30. Stack
```cpp
#include <iostream>
using namespace std;
class Stack {
    int arr[100], top;
public:
    Stack() { top = -1; }
    void push(int val) {
        if(top == 99) return;
        arr[++top] = val;
    }
    void pop() {
        if(top == -1) return;
        top--;
    }
    void display() {
        for(int i = 0; i <= top; i++) cout << arr[i] << " ";
    }
};
int main() {
    Stack s;
    s.push(5); s.push(10); s.push(15);
    s.display(); cout << endl;
    s.pop();
    s.display();
    return 0;
}
```

### 30. Stack
```cpp
#include <iostream>
using namespace std;
class Stack {
    int arr[100], top;
public:
    Stack() { top = -1; }
    void push(int val) {
        if(top == 99) return;
        arr[++top] = val;
    }
    void pop() {
        if(top == -1) return;
        top--;
    }
    void display() {
        for(int i = 0; i <= top; i++) cout << arr[i] << " ";
    }
};
int main() {
    Stack s;
    s.push(5); s.push(10); s.push(15);
    s.display(); cout << endl;
    s.pop();
    s.display();
    return 0;
}
```

### 31. Library Book Search
```cpp
#include <iostream>
using namespace std;
class Book {
public:
    string title;
    string author;
    int id;
};
int main() {
    Book b[3];
    for(int i = 0; i < 3; i++) {
        cin >> b[i].id >> b[i].title >> b[i].author;
    }
    string searchTitle;
    cin >> searchTitle;
    for(int i = 0; i < 3; i++) {
        if(b[i].title == searchTitle) {
            cout << b[i].id << " " << b[i].author;
        }
    }
    return 0;
}
```

### 32. Graph Adjacency Matrix
```cpp
#include <iostream>
using namespace std;
class GraphEdge {
public:
    int src, dest, weight;
};
int main() {
    GraphEdge e[4];
    int adj[3][3] = {};
    for(int i = 0; i < 4; i++) {
        cin >> e[i].src >> e[i].dest >> e[i].weight;
        adj[e[i].src][e[i].dest] = e[i].weight;
    }
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
```

### 33. Course with Students
```cpp
#include <iostream>
#include <vector>
using namespace std;
class Course {
public:
    string courseName;
    vector<string> studentNames;
    void enroll(string name) {
        studentNames.push_back(name);
    }
    void display() {
        for(string s : studentNames) cout << s << endl;
    }
};
int main() {
    Course c;
    c.courseName = "DSA";
    c.enroll("John");
    c.enroll("Ravi");
    c.display();
    return 0;
}
```

### 34. Ticket Booking System
```cpp
#include <iostream>
using namespace std;
class Ticket {
public:
    int seatNo;
    bool isBooked;
};
int main() {
    Ticket t[5];
    for(int i = 0; i < 5; i++) {
        t[i].seatNo = i+1;
        t[i].isBooked = false;
    }
    int bookSeat;
    cin >> bookSeat;
    if(!t[bookSeat - 1].isBooked) {
        t[bookSeat - 1].isBooked = true;
        cout << "Seat Booked";
    } else {
        cout << "Already Booked";
    }
    return 0;
}
```

### 35. Student Record System
```cpp
#include <iostream>
using namespace std;
class Student {
public:
    string name;
    float cgpa;
    string grade;
    void computeGrade() {
        if(cgpa >= 9) grade = "A";
        else if(cgpa >= 8) grade = "B";
        else if(cgpa >= 7) grade = "C";
        else grade = "D";
    }
    void display() {
        cout << name << " " << cgpa << " " << grade;
    }
};
int main() {
    Student s;
    cin >> s.name >> s.cgpa;
    s.computeGrade();
    s.display();
    return 0;
}
```

---

✨ These solutions build understanding of class structure, member functions, constructor behavior, and object-oriented design in C++.
