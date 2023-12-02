# Binary Trees

Binary tree and binary search tree operations in C, covering node creation, traversal, measurement, and balance analysis for the ALX Binary Trees project.

## Overview

This project implements a comprehensive set of binary tree utilities on a shared `binary_tree_t` node type. Tasks progress from basic node creation and child insertion through tree traversals, metric calculations (height, depth, size, leaves, nodes), balance factor analysis, and structural property checks (full, perfect trees) plus sibling and uncle lookups.

Each function operates on pointer-based tree nodes with parent, left, and right child links. Traversal functions accept a callback function pointer, enabling flexible output without coupling to a specific print format. The header defines type aliases (`bst_t`, `avl_t`, `heap_t`) that share the same underlying structure for future tree variant tasks.

## Skills covered


- Create binary tree nodes and insert children on the left and right
- Delete an entire binary tree recursively, freeing all nodes
- Distinguish leaf nodes from internal nodes and identify the root
- Perform preorder, inorder, and postorder depth-first traversals with callbacks
- Measure tree height, node depth, total size, leaf count, and node count
- Calculate the balance factor of a binary tree
- Determine whether a tree is full (every node has 0 or 2 children) or perfect (all levels completely filled)
- Find a node's sibling and uncle in a binary tree
- Reason about recursive tree algorithms and their O(n) traversal complexity

## Tech Stack

| Category | Technologies |
|----------|-------------|
| Language | C (C99, `gnu89` standard) |
| Compiler | GCC |
| Data Structures | Binary trees, BST foundations |
| Runtime | Ubuntu 20.04+ |

## Project Structure

| Task | File | Function |
|------|------|----------|
| 0 | `0-binary_tree_node.c` | `binary_tree_node` — create a new tree node |
| 1 | `1-binary_tree_insert_left.c` | `binary_tree_insert_left` — insert left child |
| 2 | `2-binary_tree_insert_right.c` | `binary_tree_insert_right` — insert right child |
| 3 | `3-binary_tree_delete.c` | `binary_tree_delete` — delete entire tree |
| 4 | `4-binary_tree_is_leaf.c` | `binary_tree_is_leaf` — check if node is a leaf |
| 5 | `5-binary_tree_is_root.c` | `binary_tree_is_root` — check if node is root |
| 6 | `6-binary_tree_preorder.c` | `binary_tree_preorder` — preorder traversal |
| 7 | `7-binary_tree_inorder.c` | `binary_tree_inorder` — inorder traversal |
| 8 | `8-binary_tree_postorder.c` | `binary_tree_postorder` — postorder traversal |
| 9 | `9-binary_tree_height.c` | `binary_tree_height` — measure tree height |
| 10 | `10-binary_tree_depth.c` | `binary_tree_depth` — measure node depth |
| 11 | `11-binary_tree_size.c` | `binary_tree_size` — count total nodes |
| 12 | `12-binary_tree_leaves.c` | `binary_tree_leaves` — count leaf nodes |
| 13 | `13-binary_tree_nodes.c` | `binary_tree_nodes` — count nodes with at least one child |
| 14 | `14-binary_tree_balance.c` | `binary_tree_balance` — compute balance factor |
| 15 | `15-binary_tree_is_full.c` | `binary_tree_is_full` — check if tree is full |
| 16 | `16-binary_tree_is_perfect.c` | `binary_tree_is_perfect` — check if tree is perfect |
| 17 | `17-binary_tree_sibling.c` | `binary_tree_sibling` — find node's sibling |
| 18 | `18-binary_tree_uncle.c` | `binary_tree_uncle` — find node's uncle |
| — | `binary_trees.h` | Shared type definitions and function prototypes |
| — | `*-main.c` | Test harnesses for each task |

## Key Implementations

- **Node lifecycle (`0`–`3`)** — Create nodes with optional parent linkage; insert left/right children (creating placeholder nodes if parent has no value yet); recursively delete all descendants and free memory
- **Traversal with callbacks (`6`–`8`)** — Preorder (root-left-right), inorder (left-root-right), and postorder (left-right-root) each accept a `void (*func)(int)` callback, decoupling traversal logic from output formatting
- **Tree metrics (`9`–`13`)** — Height returns longest root-to-leaf path; depth measures distance from root to a given node; size/leaves/nodes count different node categories recursively
- **Balance factor (`14-binary_tree_balance.c`)** — Computes left subtree height minus right subtree height at each node; returns 0 for a NULL tree; reuses height calculation internally
- **Structural properties (`15`–`16`)** — Full tree: every node has exactly 0 or 2 children; perfect tree: all interior nodes have two children and all leaves are at the same depth
- **Relationship queries (`17`–`18`)** — Sibling returns the other child of the same parent; uncle returns the sibling of the node's parent (NULL if parent is root or no uncle exists)
- **Type aliases (`binary_trees.h`)** — `bst_t`, `avl_t`, and `heap_t` typedefs share the `binary_tree_s` structure, preparing for BST ordering, AVL balancing, and heap operations in advanced modules

## Getting Started

### Prerequisites

- Ubuntu 20.04+
- GCC
- Git

### Setup

```bash
git clone <repository-url>
cd binary_trees
```

### Compiling and Running

Each task compiles its function with the paired main file:

```bash
# Create a node
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 \
  0-binary_tree_node.c 0-main.c -o tree_node
./tree_node

# Inorder traversal
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 \
  7-binary_tree_inorder.c 1-binary_tree_insert_left.c \
  2-binary_tree_insert_right.c 0-binary_tree_node.c \
  7-main.c -o inorder
./inorder

# Balance factor
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 \
  14-binary_tree_balance.c 9-binary_tree_height.c \
  0-binary_tree_node.c 1-binary_tree_insert_left.c \
  2-binary_tree_insert_right.c 14-main.c -o balance
./balance
```

Tasks with dependencies require linking prerequisite functions (insert, node creation) alongside the function under test.

## Curriculum Context

Binary Trees is module **0x1D** in the ALX low-level C programming project. It follows sorting algorithms and Makefiles, and precedes search algorithms in the main project.

| Previous | Next |
|----------|------|
| `sorting_algorithms` — array and list sorting with Big O analysis | `alx-low_level_programming` (`0x1E-search_algorithms`) |

Related work:

- `alx-low_level_programming` — parent project; search algorithms module applies tree concepts to efficient lookup
- `simple_shell_prac` — next hands-on project after completing the data structures and algorithms arc

The `bst_t`, `avl_t`, and `heap_t` typedefs in `binary_trees.h` foreshadow advanced tree tasks (BST validation, AVL rotation, min/max heap) in later curriculum task folders.
