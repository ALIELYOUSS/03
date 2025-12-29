# TODO - Exercise 01 (ScavTrap)

## Prerequisites
- [ x] Change ClapTrap attributes from `private` to `protected` in ex00/ClapTrap.hpp
- [x ] Copy ClapTrap files from ex00 to ex01

## Implementation Tasks

### 1. ScavTrap Class
- [x ] Create ScavTrap.hpp header file
  - [ x] Include proper header guards
  - [ x] Include ClapTrap.hpp
  - [ x] Declare ScavTrap class inheriting from ClapTrap
- [x ] Create ScavTrap.cpp implementation file

### 2. Orthodox Canonical Form
- [x ] Default constructor
  - [ x] Call ClapTrap constructor
  - [ x] Set Hit points to 100
  - [x ] Set Energy points to 50
  - [x ] Set Attack damage to 20
  - [x ] Print construction message
- [x ] Parameterized constructor (takes name)
- [x ] Copy constructor
- [ x] Assignment operator
- [ x] Destructor (print destruction message)

### 3. Member Functions
- [ x] Override `attack()` function
  - [x ] Print "ScavTrap <name> attacks <target>..." instead of "ClapTrap"
  - [x ] Keep same logic (energy/hit points checks)
- [x ] Add `guardGate()` function
  - [ x] Print "ScavTrap is now in Gate keeper mode"
  - [x ] No parameters, no return value

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
