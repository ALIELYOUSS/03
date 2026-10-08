# C++ Module 03: Inheritance

Solutions for **42's C++ Module 03**, focused on inheritance, protected
members, virtual functions, and Orthodox Canonical Form in C++98.

## Overview

This module develops a small family of combat robots. The exercises begin with
the `ClapTrap` base class, then extend it through specialized derived classes
with their own attack behavior and abilities.

## Exercises

| Directory | Program | Focus | Special ability |
| --- | --- | --- | --- |
| `ex00` | `ClapTrap` | Base class and resource management | Attack, damage, and repair |
| `ex01` | `ScavTrap` | Public inheritance and method overriding | `guardGate()` |
| `ex02` | `FragTrap` | A second derived robot type | `highFivesGuys()` |

## Robot Behavior

Each robot tracks:

- Name
- Hit points
- Energy points
- Attack damage

Robots can attack targets, take damage, and repair themselves. Actions are
limited when a robot has no hit points or energy points remaining.

The derived classes customize the base attack behavior while reusing the common
damage, repair, state, and copy/assignment functionality from `ClapTrap`.

## Requirements

- A C++ compiler with C++98 support
- `make`
- Unix-like environment

The exercises are compiled with:

```text
-Wall -Wextra -Werror -std=c++98
```

Exercise 02 also enables AddressSanitizer and debug information:

```text
-fsanitize=address -g3
```

## Build and Run

Each exercise is independent and creates its own executable.

### Exercise 00: ClapTrap

```bash
cd ex00
make
./ClapTrap
```

This exercise demonstrates the base robot's constructors, copy operations,
attacks, damage handling, repairs, and energy exhaustion.

### Exercise 01: ScavTrap

```bash
cd ex01
make
./ScavTrap
```

`ScavTrap` inherits from `ClapTrap`, overrides `attack`, and adds the
`guardGate()` ability.

### Exercise 02: FragTrap

```bash
cd ex02
make
./FragTrap
```

`FragTrap` inherits from `ClapTrap`, provides its own attack configuration, and
adds the `highFivesGuys()` ability.

## Project Structure

```text
.
├── ex00/
│   ├── ClapTrap.cpp
│   ├── ClapTrap.hpp
│   ├── Makefile
│   └── main.cpp
├── ex01/
│   ├── ClapTrap.cpp
│   ├── ClapTrap.hpp
│   ├── Makefile
│   ├── ScavTrap.cpp
│   ├── ScavTrap.hpp
│   └── main.cpp
├── ex02/
│   ├── ClapTrap.cpp
│   ├── ClapTrap.hpp
│   ├── FragTrap.cpp
│   ├── FragTrap.hpp
│   ├── Makefile
│   └── main.cpp
└── README.md
```

## Makefile Commands

Run these commands from an exercise directory:

```bash
make          # Build the exercise
make clean    # Remove object files
make fclean   # Remove object files and the executable
make re       # Rebuild from scratch
```

To clean all exercises from the repository root:

```bash
for directory in ex00 ex01 ex02; do make -C "$directory" fclean; done
```

## C++98 Constraints

The project uses C++98 and the standard library only. The classes follow the
Orthodox Canonical Form with a default constructor, copy constructor,
copy-assignment operator, and destructor. Inheritance and virtual dispatch are
used to share and specialize robot behavior across the class hierarchy.