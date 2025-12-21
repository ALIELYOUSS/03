# TODO - Exercise 01 (ScavTrap)

## Prerequisites
- [ ] Change ClapTrap attributes from `private` to `protected` in ex00/ClapTrap.hpp
- [ ] Copy ClapTrap files from ex00 to ex01

## Implementation Tasks

### 1. ScavTrap Class
- [ ] Create ScavTrap.hpp header file
  - [ ] Include proper header guards
  - [ ] Include ClapTrap.hpp
  - [ ] Declare ScavTrap class inheriting from ClapTrap
- [ ] Create ScavTrap.cpp implementation file

### 2. Orthodox Canonical Form
- [ ] Default constructor
  - [ ] Call ClapTrap constructor
  - [ ] Set Hit points to 100
  - [ ] Set Energy points to 50
  - [ ] Set Attack damage to 20
  - [ ] Print construction message
- [ ] Parameterized constructor (takes name)
- [ ] Copy constructor
- [ ] Assignment operator
- [ ] Destructor (print destruction message)

### 3. Member Functions
- [ ] Override `attack()` function
  - [ ] Print "ScavTrap <name> attacks <target>..." instead of "ClapTrap"
  - [ ] Keep same logic (energy/hit points checks)
- [ ] Add `guardGate()` function
  - [ ] Print "ScavTrap is now in Gate keeper mode"
  - [ ] No parameters, no return value

### 4. Testing
- [ ] Create main.cpp with comprehensive tests:
  - [ ] Test construction/destruction messages
  - [ ] Test initial values (100 HP, 50 EP, 20 AD)
  - [ ] Test attack() with ScavTrap prefix
  - [ ] Test guardGate() function
  - [ ] Test takeDamage() and beRepaired() (inherited)
  - [ ] Test energy depletion
  - [ ] Test copy constructor and assignment operator

### 5. Compilation
- [ ] Create/update Makefile
  - [ ] Add ClapTrap.cpp, ScavTrap.cpp, main.cpp to FILES
  - [ ] Update NAME to ScavTrap
  - [ ] Ensure compilation with -Wall -Wextra -Werror -std=c++98
- [ ] Test compilation: `make`
- [ ] Run program: `./ScavTrap`

## Key Points
- ScavTrap IS-A ClapTrap (inheritance)
- Different initial values than ClapTrap
- Overridden attack() to show "ScavTrap" prefix
- New guardGate() special ability

---
**Status**: 🔄 In Progress
**Next**: See [ex02/TODO.md](../ex02/TODO.md)
