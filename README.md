<div align="center">
  <a href="https://github.com/marialmeidafr/Push_swap" target="_blank">
    <img src="https://raw.githubusercontent.com/danielleseragioli/42_duck_badges/main/badges/push_swap_pin.png" width="150" height="150" alt="push swap duck badge" />
  </a>
  <h1 align="center">Push_swap</h1>
</div>

<p align="center">
  <img src="https://img.shields.io/badge/language-C-blue" />
  <img src="https://img.shields.io/badge/algorithm-sorting-brightgreen" />
  <img src="https://img.shields.io/badge/data%20structures-stacks-orange" />
</p>

<p align="center">
  <strong>⚡ Efficient integer sorting with limited stack operations in C ⚡</strong>
</p>

<p align="center">
  <img src="https://media0.giphy.com/media/v1.Y2lkPTc5MGI3NjExb24xNDQ2ZnBraDd4cWthaDBuNzRqeWhxZGV4NTNmcHc2dWIyZ3FvcCZlcD12MV9pbnRlcm5hbF9naWZfYnlfaWQmY3Q9Zw/3hLW6IdSX4CMW8RrBn/giphy.gif" width="300" alt="fun gif"/>
</p>
---

<h2 align="center">✨ Overview</h2>

**push_swap** is a C program that sorts a sequence of integers using two stacks (`a` and `b`) and a limited set of operations. The challenge is not just sorting, but doing it using the **fewest possible moves**.

This project showcases skills in **algorithm design**, **data structures**, **performance optimization**, and **memory-safe C programming**.

---

<h3 align="center">🧩 Problem Summary</h3>

* **Input:** integers passed as command-line arguments 🔢
* **Data structures:** two stacks implemented as linked lists 📚
* **Constraints:** only predefined stack operations are allowed 🚫
* **Goal:** sort stack `a` in ascending order with minimal operations 🎯

---

<h3 align="center">🔁 Allowed Operations</h3>

| Operation | Description                                     |
| --------- | ----------------------------------------------- |
| `sa`      | Swap the first two elements of stack a 🔄       |
| `sb`      | Swap the first two elements of stack b 🔄       |
| `ss`      | Perform `sa` and `sb` simultaneously ⚡          |
| `pa`      | Push the top element of stack b onto stack a ⬆️ |
| `pb`      | Push the top element of stack a onto stack b ⬇️ |
| `ra`      | Rotate stack a upward 🔁                        |
| `rb`      | Rotate stack b upward 🔁                        |
| `rr`      | Perform `ra` and `rb` simultaneously ⚡          |
| `rra`     | Reverse rotate stack a 🔃                       |
| `rrb`     | Reverse rotate stack b 🔃                       |
| `rrr`     | Perform `rra` and `rrb` simultaneously ⚡        |

---

<h3 align="center">🧠 Algorithm Strategy</h3>

The solution combines several optimization techniques:

* **Indexing values** to simplify comparisons 🔢
* **Cost evaluation** to select the most efficient moves 💰
* **Chunk-based sorting** for large inputs 📦
* Optimized logic for **small datasets** ✨

Each operation is chosen to balance **performance** and **code readability**.

---

<h3 align="center">▶️ Usage</h3>

```bash
./push_swap 4 67 3 87 23
```

The program outputs a sequence of operations that will sort the stack ✅

---

<h3 align="center">❌ Error Handling</h3>

The program safely exits with `Error` when encountering:

* Non-numeric or invalid input 🚫
* Duplicate values ❌
* Integer overflow or underflow ⚠️
* Incorrect argument formatting 📝

---

<h3 align="center">🌟 Project Highlights</h3>

* Optimized operation count ⚡
* Modular and readable C code 📚
* Efficient memory management 💾
* Clear separation of responsibilities 🛠️
