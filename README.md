*This project has been created as part of the 42 curriculum by <mariaalm>.*

# push_swap

## Description

The **push_swap** project is an algorithmic challenge from the 42 curriculum.  
Its objective is to sort a list of integers using two stacks (**stack A** and **stack B**) and a restricted set of allowed operations.

The difficulty of the project lies in sorting the numbers using the **fewest possible operations**, which requires an efficient algorithmic approach rather than brute force.

This implementation uses **Radix Sort**, adapted to work with stacks and the allowed push_swap operations.

## Instructions

### Compilation

Compile the program using:

```bash
make
This will generate the executable push_swap.

Other available rules:

make clean
make fclean
make re

Execution

Run the program by passing integers as arguments:

./push_swap 4 67 3 87 23


The output will be a list of instructions (one per line) that, when executed, will sort the stack.

Allowed Operations

sa / sb / ss – swap the first two elements of stack A and/or B

pa / pb – push the top element from one stack to the other

ra / rb / rr – rotate the stack (first element becomes last)

rra / rrb / rrr – reverse rotate the stack (last element becomes first)

Algorithm Overview
Input Validation

Checks for non-numeric arguments

Checks for duplicate values

Handles integer overflow

Displays Error followed by a newline if input is invalid

Indexing

Before sorting, all numbers are indexed based on their relative order.
This transforms the input into a range from 0 to n - 1, which simplifies comparisons and allows Radix Sort to work correctly with negative numbers.

Radix Sort Strategy

The algorithm processes numbers bit by bit, starting from the least significant bit.

For each bit position:

Numbers with the current bit set to 0 are pushed to stack B.

Numbers with the bit set to 1 are rotated within stack A.

After processing all elements for a given bit, all elements from stack B are pushed back to stack A.

This process is repeated for each bit required to represent the largest index.

Radix Sort guarantees an efficient number of operations and scales well for large inputs (e.g. 100 or 500 numbers).

Resources
References

push_swap visualizer:

https://github.com/o-reo/push_swap_visualizer

Use of AI

AI tools were used strictly as learning and assistance tools, not for direct code generation.
They were used for:

Understanding the Radix Sort algorithm and how to adapt it to stacks

Clarifying bitwise operations and edge cases

Reviewing logic and improving code structure

Assisting with documentation (README)

All implementation decisions and code were written and validated by the student.

Notes

The program outputs only valid push_swap instructions

Memory is properly managed to avoid leaks

The project follows the Norm and subject requirements