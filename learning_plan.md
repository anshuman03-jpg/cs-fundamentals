# 📚 Personal CS Learning Plan
### A structured, topic-by-topic roadmap to rebuild your coding skills from the ground up.

---

> [!IMPORTANT]
> **Our learning method for every topic:**
> 1. **Concept First** — I explain the topic using a real-life analogy. No code yet.
> 2. **See the Code** — I show you a clean, fully commented example in VS Code.
> 3. **Understand It** — We read through it together and I answer your questions.
> 4. **You Try It** — I give you a small modification to make yourself in VS Code.
> 5. **Move On** — Once you're comfortable, we go to the next topic.
>
> At any point, just say **"explain this"**, **"I'm confused"**, **"next topic"**, or **"I want to practice this"**.

---

## ⚙️ Phase 0: Developer Setup (Before Anything Else)
**Duration:** 1–2 days | **Goal:** Set up your professional developer environment so every file you write goes into GitHub automatically.

### Git & GitHub Setup

| Step | Task | What You Will Learn |
|------|------|---------------------|
| Step 1 | Install Git | What is Git vs GitHub, installing Git on Windows |
| Step 2 | Configure Git | Setting your name & email globally (`git config`) |
| Step 3 | Create GitHub Account | Making your profile, profile picture, bio |
| Step 4 | Create Your First Repo | What is a repository, `README.md`, `.gitignore` for C/Java |
| Step 5 | Clone Repo to PC | `git clone` — bringing your GitHub repo down to VS Code |
| Step 6 | The Daily Git Workflow | `git add`, `git commit -m "message"`, `git push` — the 3 commands you'll use every single day |
| Step 7 | Branching Basics | `git branch`, `git checkout`, why branches exist, merging |

> [!NOTE]
> From Phase 0 onwards, every `.c`, `.java`, or `.py` file we create in VS Code will be committed and pushed to your GitHub profile. By the end of this plan, you will have a **real, public GitHub portfolio** that any interviewer or college recruiter can see.

---

## 🔵 Phase 1: C Language Revision
**Duration:** ~2 weeks | **Language:** C | **Goal:** Be completely solid in C before touching anything else.

### Week 1 — Control Flow, Loops & Functions

| Day | Topic | What You Will Learn |
|-----|-------|---------------------|
| Day 1 | Variables & Data Types | `int`, `float`, `char`, `double`, `long`, type sizes, `printf` formatting |
| Day 2 | Operators & Expressions | Arithmetic, Relational, Logical (`&&`, `\|\|`, `!`), Bitwise, Ternary |
| Day 3 | Control Flow | `if`, `else if`, `else`, `switch-case`, `break`, `continue` |
| Day 4 | Loops — Part 1 | `for` loop, `while` loop — iteration, counters, accumulators |
| Day 5 | Loops — Part 2 | `do-while`, nested loops, pattern printing logic |
| Day 6 | Functions | Declaring, defining, calling, return types, pass by value |
| Day 7 | Revision Day | Review + small modifications on all Week 1 topics |

### Week 2 — Arrays, Strings, Pointers & Structures

| Day | Topic | What You Will Learn |
|-----|-------|---------------------|
| Day 8 | 1D Arrays | Declaration, initialization, traversal, searching in arrays |
| Day 9 | 2D Arrays | Matrix representation, traversal, transpose |
| Day 10 | Strings | `char` arrays, `strlen`, `strcpy`, `strcmp`, `strcat` from `string.h` |
| Day 11 | Pointers — Part 1 | What is a pointer, `&` (address-of), `*` (dereference), pointer arithmetic |
| Day 12 | Pointers — Part 2 | Pointers & arrays, pointers to functions, `NULL` pointer |
| Day 13 | Dynamic Memory | `malloc()`, `calloc()`, `realloc()`, `free()` — heap vs stack |
| Day 14 | Structures (`struct`) | Defining structs, accessing members (`.` and `->`), array of structs |

---

## 🟡 Phase 2: Java Basics & OOP
**Duration:** ~2 weeks | **Language:** Java | **Goal:** Learn Java syntax and master all 4 pillars of OOP.

### Week 3 — Java Fundamentals

| Day | Topic | What You Will Learn |
|-----|-------|---------------------|
| Day 15 | Java Setup & First Program | JDK, JVM, `main()`, `System.out.println`, how Java runs |
| Day 16 | Java Syntax vs C | Variables, data types, `Scanner` for input, differences from C |
| Day 17 | Control Flow in Java | `if-else`, `switch`, `for`, `while`, `do-while` (same logic, new syntax) |
| Day 18 | Methods in Java | Defining methods, return types, method overloading |
| Day 19 | Classes & Objects | What is a class, what is an object, constructors, `new` keyword |
| Day 20 | `this` keyword & Constructors | Default vs parameterized constructors, constructor overloading |
| Day 21 | Revision Day | Review Week 3 topics |

### Week 4 — Object-Oriented Programming (OOP)

| Day | Topic | What You Will Learn |
|-----|-------|---------------------|
| Day 22 | Encapsulation | `private` attributes, `public` getters & setters, data hiding |
| Day 23 | Inheritance | `extends`, `super` keyword, method overriding, `@Override` |
| Day 24 | Polymorphism | Compile-time (overloading) vs Runtime (overriding), upcasting |
| Day 25 | Abstraction | Abstract classes (`abstract`), Interfaces (`interface`, `implements`) |
| Day 26 | Exception Handling | `try-catch-finally`, `throw`, `throws`, checked vs unchecked exceptions |
| Day 27 | Java Collections Intro | `ArrayList`, `HashMap`, `HashSet` — when and why to use them |
| Day 28 | Revision Day | Review all OOP pillars with examples |

---

## 🟠 Phase 3: Data Structures in C
**Duration:** ~3 weeks | **Language:** C | **Goal:** Implement every major data structure from scratch using pointers.

### Week 5 — Linear Data Structures (Part 1)

| Day | Topic | What You Will Learn |
|-----|-------|---------------------|
| Day 29 | Introduction to DS | Why data structures matter, choosing the right one, ADT concept |
| Day 30 | Singly Linked List | Node creation with `struct`, insertion (head/tail/middle), traversal |
| Day 31 | Linked List Operations | Deletion, searching, counting nodes, reversing a linked list |
| Day 32 | Doubly Linked List | Bi-directional pointers (`prev` & `next`), insertion & deletion |
| Day 33 | Circular Linked List | How it differs, use cases, traversal without `NULL` check |
| Day 34 | Stack (Array-based) | LIFO concept, `push()`, `pop()`, `peek()`, overflow/underflow |
| Day 35 | Stack (Linked List-based) | Dynamic stack using linked list, no size limit |

### Week 6 — Linear Data Structures (Part 2)

| Day | Topic | What You Will Learn |
|-----|-------|---------------------|
| Day 36 | Queue (Array-based) | FIFO concept, `enqueue()`, `dequeue()`, circular queue |
| Day 37 | Queue (Linked List-based) | Dynamic queue, front & rear pointers |
| Day 38 | Hashing | Hash functions, hash tables, collision, chaining, open addressing |
| Day 39 | Revision Day | Linked List, Stack, Queue — all combined revision |

### Week 7 — Non-Linear Data Structures

| Day | Topic | What You Will Learn |
|-----|-------|---------------------|
| Day 40 | Trees — Introduction | Terminology: root, leaf, height, depth, degree. Binary trees |
| Day 41 | Binary Search Tree (BST) | Insertion, search, inorder/preorder/postorder traversal |
| Day 42 | BST Deletion | Deleting leaf, node with one child, node with two children |
| Day 43 | Graphs — Introduction | Directed vs undirected, weighted, adjacency matrix & list |
| Day 44 | Graph Traversals | BFS (Breadth First Search), DFS (Depth First Search) |
| Day 45 | Revision Day | Trees & Graphs revision |

---

## 🟢 Phase 4: Data Structures in Java
**Duration:** ~2 weeks | **Language:** Java | **Goal:** Re-implement DS using OOP in Java, then master Java's built-in Collections.

### Week 8 — DS Implementation in Java (OOP Style)

| Day | Topic | What You Will Learn |
|-----|-------|---------------------|
| Day 46 | Generic Linked List | `Node<T>` class, Generic types, implementing the same DS in OOP |
| Day 47 | Generic Stack & Queue | Using Generics and Interfaces to build reusable DS |
| Day 48 | BST in Java | BST using Classes, recursive insert and traversal methods |
| Day 49 | Java Collections — Lists | `ArrayList` vs `LinkedList`, when to use which |
| Day 50 | Java Collections — Maps | `HashMap`, `TreeMap`, key-value pairs, iteration |
| Day 51 | Java Collections — Sets & Queue | `HashSet`, `TreeSet`, `PriorityQueue`, `ArrayDeque` |
| Day 52 | Revision Day | C DS vs Java DS comparison, garbage collection vs `free()` |

---

## 🔴 Phase 5: Design & Analysis of Algorithms (DAA)
**Duration:** ~3 weeks | **Language:** C + Java (both) | **Goal:** Master all major algorithmic paradigms with complexity analysis.

### Week 9 — Complexity Analysis & Sorting Algorithms

| Day | Topic | What You Will Learn |
|-----|-------|---------------------|
| Day 53 | Complexity Analysis | Big-O, Big-Omega, Big-Theta, Best/Worst/Average case analysis |
| Day 54 | Bubble, Selection Sort | Naive sorting, in-place algorithms, $O(n^2)$ time complexity |
| Day 55 | Insertion Sort | Adaptive sorting, near-sorted data advantage |
| Day 56 | Merge Sort | Divide & Conquer, $O(n \log n)$, stable sort, recursion tree |
| Day 57 | Quick Sort | Pivot strategy, partitioning, average $O(n \log n)$, worst $O(n^2)$ |
| Day 58 | Heap Sort | Max-Heap, `heapify()`, in-place $O(n \log n)$ sort |
| Day 59 | Revision Day | Compare all sorts: time, space, stability, use cases |

### Week 10 — Greedy Algorithms

| Day | Topic | What You Will Learn |
|-----|-------|---------------------|
| Day 60 | Greedy Introduction | Greedy paradigm: making locally optimal choices, when it works |
| Day 61 | Activity Selection Problem | Interval scheduling, maximize non-overlapping activities |
| Day 62 | Fractional Knapsack | Greedy by value/weight ratio |
| Day 63 | Huffman Coding | Greedy tree building, prefix codes, data compression |
| Day 64 | Prim's Algorithm | Minimum Spanning Tree (MST) using greedy selection |
| Day 65 | Kruskal's Algorithm | MST using Union-Find (Disjoint Sets) |
| Day 66 | Dijkstra's Algorithm | Single-source shortest path in weighted graphs |

### Week 11 — Dynamic Programming & Backtracking

| Day | Topic | What You Will Learn |
|-----|-------|---------------------|
| Day 67 | DP Introduction | Overlapping subproblems, optimal substructure, memoization vs tabulation |
| Day 68 | Fibonacci & Coin Change | Classic DP entry points — top-down vs bottom-up |
| Day 69 | 0/1 Knapsack Problem | DP table approach, understanding state transitions |
| Day 70 | Longest Common Subsequence (LCS) | 2D DP table, string comparison problems |
| Day 71 | Matrix Chain Multiplication | Parenthesization, understanding DP on intervals |
| Day 72 | Backtracking Introduction | N-Queens Problem, Subset Sum, Sudoku Solver concept |
| Day 73 | Final Revision & Wrap-Up | All 5 Phases reviewed, key topics consolidated |

---

## 📊 Summary

| Phase | Duration | Language | Focus |
|-------|----------|----------|-------|
| Phase 0: Git & GitHub | 1–2 days | Git | Developer setup, daily git workflow, portfolio |
| Phase 1: C Revision | 2 weeks | C | Logic, Control Flow, Pointers, Memory |
| Phase 2: Java & OOP | 2 weeks | Java | Syntax, Classes, 4 OOP Pillars |
| Phase 3: DS in C | 3 weeks | C | All Major Data Structures from Scratch |
| Phase 4: DS in Java | 1 week | Java | OOP-style DS + Java Collections Framework |
| Phase 5: DAA | 3 weeks | C + Java | Sorting, Greedy, DP, Backtracking |
| **Total** | **~11 weeks** | **C + Java** | **Full CS Foundation** |

---

## 🏆 Competitive Programming & GitHub Projects

> [!TIP]
> These run **in parallel** with the main plan — not separately. As soon as a topic is completed, we immediately apply it on HackerRank/LeetCode and push it to GitHub.

### 🟢 HackerRank (Start from Day 1)
HackerRank is the perfect beginner platform because it explains the problem clearly and has easy levels.

| Phase | HackerRank Track | Goal |
|-------|-----------------|------|
| Phase 1 (C) | C Track — Intro & Control Flow problems | Solve 5-10 beginner problems per week |
| Phase 2 (Java) | Java Track — Basics, OOP problems | Apply OOP concepts on real problems |
| Phase 3 & 4 (DS) | Data Structures Track | Solve Array, Linked List, Tree problems |
| Phase 5 (DAA) | Algorithm Track | Sorting, Greedy, Dynamic Programming problems |

### 🔴 LeetCode (Start from Phase 3 onwards)
LeetCode is where interviews happen. We'll only start this once your fundamentals are strong.

| Stage | LeetCode Difficulty | Focus |
|-------|---------------------|-------|
| Phase 3 complete | 🟢 Easy | Array, String, HashMap problems |
| Phase 4 complete | 🟢 Easy + 🟡 Medium | Sliding Window, Two Pointers, Stack |
| Phase 5 complete | 🟡 Medium | Trees, Graphs, Dynamic Programming |

**Our LeetCode approach:** We solve every problem in **both C and Java** — once we know both. I will help you break down problems step by step (understand → plan on paper → code).

---

### 📁 GitHub Projects (One Per Phase)
Every phase ends with a small but real project pushed to your public GitHub:

| Phase | Project to Upload |
|-------|------------------|
| Phase 0 | Your first GitHub repo with a proper `README.md` |
| Phase 1 | A C mini-project: **Student Record System** (uses structs, arrays, functions, file I/O) |
| Phase 2 | A Java OOP project: **Library Management System** (uses all 4 OOP pillars) |
| Phase 3 | A C DS project: **DSA Implementations Repo** (Linked List, Stack, Queue, BST — all in one repo) |
| Phase 4 | A Java DS project: **Collections Demo App** (practical use of ArrayList, HashMap, PriorityQueue) |
| Phase 5 | **Algorithm Visualizer** or **LeetCode Solutions Repo** (fully commented solutions in C + Java) |

> [!NOTE]
> A GitHub profile with 5–6 meaningful repos, consistent commits, and clean code is what gets you **internships and placements** in your 3rd and 4th year. We'll build yours one phase at a time.

---

> [!TIP]
> We don't need to follow the exact day-count rigidly. If a topic needs more time, we take more time. If you already know something well, we can fast-track it.
> Just tell me **"I know this already"** or **"let's slow down here"** at any point.

---
**Current Status:** Ready to start **Phase 0 — Git & GitHub Setup** whenever you say **"Let's start"**.

