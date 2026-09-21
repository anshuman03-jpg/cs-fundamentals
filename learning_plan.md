# 📚 Computer Science Fundamentals Roadmap
### A comprehensive 11-week self-study curriculum covering C, Java, Data Structures, and Design & Analysis of Algorithms.

---

## ⚙️ Phase 0: Developer Setup
**Duration:** 1–2 days | **Goal:** Environment configuration and version control basics.

| Step | Task | Core Concepts Covered |
|------|------|-----------------------|
| Step 1 | Git Installation | Git vs GitHub, local environment setup |
| Step 2 | Git Configuration | Global user identity, credential management |
| Step 3 | GitHub Account | Profile optimization, SSH keys |
| Step 4 | Repository Setup | Initializing repos, `README.md`, `.gitignore` |
| Step 5 | Remote Cloning | `git clone`, connecting local and remote environments |
| Step 6 | Version Control Workflow | `git add`, `git commit`, `git push` |
| Step 7 | Branching Basics | `git branch`, `git checkout`, merge conflicts |

---

## 🔵 Phase 1: C Language Foundations
**Duration:** ~2 weeks | **Language:** C | **Goal:** Core programming logic and memory management.

### Week 1 — Control Flow, Loops & Functions

| Day | Topic | Core Concepts Covered |
|-----|-------|-----------------------|
| Day 1 | Variables & Data Types | `int`, `float`, `char`, `double`, `long`, type sizes, `printf` formatting |
| Day 2 | Operators & Expressions | Arithmetic, Relational, Logical (`&&`, `\|\|`, `!`), Bitwise, Ternary |
| Day 3 | Control Flow | `if`, `else if`, `else`, `switch-case`, `break`, `continue` |
| Day 4 | Loops — Part 1 | `for` loop, `while` loop — iteration, counters, accumulators |
| Day 5 | Loops — Part 2 | `do-while`, nested loops, pattern printing logic |
| Day 6 | Functions | Declaring, defining, calling, return types, pass by value |
| Day 7 | Problem Solving Day | Applied algorithm drills (Even/Odd, Primes, Patterns) |

### Week 2 — Arrays, Strings, Pointers & Structures

| Day | Topic | Core Concepts Covered |
|-----|-------|-----------------------|
| Day 8 | 1D Arrays | Declaration, initialization, traversal, searching |
| Day 9 | 2D Arrays | Matrix representation, traversal, transpose operations |
| Day 10 | Strings | `char` arrays, `strlen`, `strcpy`, `strcmp`, `strcat` |
| Day 11 | Pointers — Part 1 | Memory addresses, `&` (address-of), `*` (dereference), arithmetic |
| Day 12 | Pointers — Part 2 | Pointers & arrays, function pointers, `NULL` pointer |
| Day 13 | Dynamic Memory | `malloc()`, `calloc()`, `realloc()`, `free()` — heap vs stack |
| Day 14 | Structures (`struct`) | Custom data types, memory alignment, array of structs |

---

## 🟡 Phase 2: Java & Object-Oriented Programming (OOP)
**Duration:** ~2 weeks | **Language:** Java | **Goal:** OOP architecture and Java syntax.

### Week 3 — Java Fundamentals

| Day | Topic | Core Concepts Covered |
|-----|-------|-----------------------|
| Day 15 | Java Execution Model | JDK, JRE, JVM, Bytecode compilation |
| Day 16 | Java Syntax vs C | Strong typing, `Scanner` input, standard output |
| Day 17 | Control Flow in Java | Conditional logic and iterative structures in Java |
| Day 18 | Methods | Method definitions, return types, method overloading |
| Day 19 | Classes & Objects | State vs Behavior, instantiating objects |
| Day 20 | Constructors | Default, parameterized, and constructor overloading, `this` keyword |
| Day 21 | Practice & Debugging | Memory state in Java (Stack vs Heap references) |

### Week 4 — Object-Oriented Programming (OOP)

| Day | Topic | Core Concepts Covered |
|-----|-------|-----------------------|
| Day 22 | Encapsulation | Access modifiers (`public`, `private`), getters/setters, data hiding |
| Day 23 | Inheritance | `extends`, `super` keyword, hierarchical design |
| Day 24 | Polymorphism | Compile-time vs Runtime polymorphism, dynamic method dispatch |
| Day 25 | Abstraction | Abstract classes, Interfaces (`implements`) |
| Day 26 | Exception Handling | `try-catch-finally`, `throw`, `throws`, checked vs unchecked |
| Day 27 | Collections Introduction | Overview of JCF (`ArrayList`, `HashMap`, `HashSet`) |
| Day 28 | System Design Practice | Building a simple console-based OOP application |

---

## 🟠 Phase 3: Data Structures in C
**Duration:** ~3 weeks | **Language:** C | **Goal:** Low-level memory management and manual DS implementation.

### Week 5 — Linear Data Structures (Part 1)

| Day | Topic | Core Concepts Covered |
|-----|-------|-----------------------|
| Day 29 | ADT Fundamentals | Abstract Data Types, performance considerations |
| Day 30 | Singly Linked List | Node struct, insertion (head/tail/middle), traversal |
| Day 31 | SLL Operations | Deletion, searching, cycle detection, list reversal |
| Day 32 | Doubly Linked List | Bi-directional pointers, complex memory management |
| Day 33 | Circular Linked List | Infinite traversal, tail-pointer optimizations |
| Day 34 | Stack (Array-based) | LIFO implementations, overflow/underflow handling |
| Day 35 | Stack (Pointer-based) | Dynamic sizing, memory leak prevention |

### Week 6 — Linear Data Structures (Part 2)

| Day | Topic | Core Concepts Covered |
|-----|-------|-----------------------|
| Day 36 | Queue (Array-based) | FIFO concept, circular queue array implementation |
| Day 37 | Queue (Pointer-based) | Dynamic queue, front & rear pointer management |
| Day 38 | Hashing | Hash functions, collision resolution (chaining, open addressing) |
| Day 39 | Code Review Day | Optimizing memory leaks and edge cases in linear DS |

### Week 7 — Non-Linear Data Structures

| Day | Topic | Core Concepts Covered |
|-----|-------|-----------------------|
| Day 40 | Trees — Fundamentals | Terminology, strict vs complete binary trees |
| Day 41 | Binary Search Tree (BST) | Logarithmic search, insertion, traversal algorithms |
| Day 42 | BST Deletion | Handling 0, 1, and 2-child node deletion cases |
| Day 43 | Graphs — Fundamentals | Directed/Undirected, Weighted, representations |
| Day 44 | Graph Traversals | Breadth-First Search (BFS), Depth-First Search (DFS) |
| Day 45 | Implementation Practice | Constructing trees and graphs from raw data |

---

## 🟢 Phase 4: Data Structures in Java
**Duration:** ~2 weeks | **Language:** Java | **Goal:** Utilizing Generics and the Java Collections Framework (JCF).

### Week 8 — DS Implementation in Java (OOP Style)

| Day | Topic | Core Concepts Covered |
|-----|-------|-----------------------|
| Day 46 | Generics in Java | `<T>` types, type erasure, type safety in DS |
| Day 47 | Custom Generic DS | Building a generic Stack/Queue class |
| Day 48 | OOP BST | Building an object-oriented Binary Search Tree |
| Day 49 | JCF: Lists | Time complexities of `ArrayList` vs `LinkedList` |
| Day 50 | JCF: Maps | Internal working of `HashMap`, `TreeMap` |
| Day 51 | JCF: Sets & Queues | `HashSet`, `PriorityQueue` (Min/Max heaps) |
| Day 52 | C vs Java DS Analysis | Garbage collection vs manual memory deallocation |

---

## 🔴 Phase 5: Design & Analysis of Algorithms (DAA)
**Duration:** ~3 weeks | **Language:** C + Java | **Goal:** Algorithm design paradigms and complexity analysis.

### Week 9 — Complexity & Sorting

| Day | Topic | Core Concepts Covered |
|-----|-------|-----------------------|
| Day 53 | Asymptotic Analysis | Big-O, Big-Omega, Big-Theta, mathematical limits |
| Day 54 | Quadratic Sorts | Bubble, Selection, Insertion Sort ($O(n^2)$) |
| Day 55 | Merge Sort | Divide & Conquer paradigm, recursion tree analysis |
| Day 56 | Quick Sort | Pivot selection, partitioning, worst-case degradation |
| Day 57 | Heap Sort | Max-Heapify, priority queue implementations |
| Day 58 | Sorting Benchmarks | Stability, in-place vs out-of-place, performance testing |

### Week 10 — Greedy Algorithms & Graphs

| Day | Topic | Core Concepts Covered |
|-----|-------|-----------------------|
| Day 59 | Greedy Paradigm | Local optimization, proof of correctness |
| Day 60 | Fractional Knapsack | Value-to-weight ratio optimization |
| Day 61 | Huffman Coding | Prefix codes, optimal data compression |
| Day 62 | Minimum Spanning Trees | Prim's Algorithm vs Kruskal's Algorithm |
| Day 63 | Shortest Paths | Dijkstra's Algorithm, Bellman-Ford |
| Day 64 | Disjoint Sets | Union-Find algorithm with path compression |

### Week 11 — Dynamic Programming & Backtracking

| Day | Topic | Core Concepts Covered |
|-----|-------|-----------------------|
| Day 65 | DP Fundamentals | Overlapping subproblems, optimal substructure |
| Day 66 | 1D Dynamic Programming | Fibonacci, Climbing Stairs (Memoization vs Tabulation) |
| Day 67 | 0/1 Knapsack Problem | 2D State space, transitioning from recursion to DP |
| Day 68 | Longest Common Subsequence | Sequence alignment, text comparison |
| Day 69 | Backtracking Paradigm | State-space tree exploration, pruning |
| Day 70 | Classic Backtracking | N-Queens Problem, Subset Sum |
| Day 71 | Final Capstone | Comprehensive DAA Problem Solving |

---

---

## 🏆 Competitive Programming Roadmap
**LeetCode Profile:** [https://leetcode.com/u/Anshuman_Duragkar/](https://leetcode.com/u/Anshuman_Duragkar/)
**HackerRank Profile:** [https://www.hackerrank.com/profile/anshumanduragka1](https://www.hackerrank.com/profile/anshumanduragka1)

| Phase | Platform | Focus Area |
|-------|----------|------------|
| Phase 1-2 | HackerRank | Syntax mastery, loops, basic logical problem solving |
| Phase 3-4 | LeetCode (Easy) | Arrays, Strings, HashMaps, Two-Pointers |
| Phase 5 | LeetCode (Medium) | Sliding Window, Trees, Graph Traversals, Basic DP |

---

## 📁 Portfolio Projects
To be tracked in separate repositories upon completion of respective phases:
1. **Student Record System** (C CLI Application)
2. **Library Management System** (Java OOP Application)
3. **Data Structures Sandbox** (Custom implementations library)
4. **Algorithm Visualizer / Problem Solving Log** (LeetCode solutions archive)
