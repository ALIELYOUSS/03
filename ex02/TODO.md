# TODO - Exercise 02 (FragTrap)

## Prerequisites
- [ x] ClapTrap attributes must be `protected` in ex00/ClapTrap.hpp
- [x ] Copy ClapTrap files from ex00 to ex02

## Implementation Tasks

### 1. FragTrap Class
- [ x] Create FragTrap.hpp header file
  - [x ] Include proper header guards
  - [ x] Include ClapTrap.hpp
  - [x ] Declare FragTrap class inheriting from ClapTrap
- [ x] Create FragTrap.cpp implementation file

### 2. Orthodox Canonical Form
- [x ] Default constructor
  - [ x] Call ClapTrap constructor
  - [x ] Set Hit points to 100
  - [ x] Set Energy points to 100
  - [ x] Set Attack damage to 30
  - [x ] Print construction message
- [x ] Parameterized constructor (takes name)
- [ x] Copy constructor
- [ x] Assignment operator
- [x ] Destructor (print destruction message)

### 3. Member Functions
- [x ] Override `attack()` function
  - [x ] Print "FragTrap <name> attacks <target>..." instead of "ClapTrap"
  - [ x] Keep same logic (energy/hit points checks)
- [ x] Add `highFivesGuys()` function
  - [x ] Print positive high fives request message
  - [x ] No parameters, void return

### 4. Testing
- [ x] Create main.cpp with comprehensive tests:
  - [ x] Test construction/destruction messages
  - [x ] Test initial values (100 HP, 100 EP, 30 AD)
  - [x ] Test attack() with FragTrap prefix
  - [x ] Test highFivesGuys() function
  - [x ] Test takeDamage() and beRepaired() (inherited)
  - [x ] Test energy depletion scenarios
  - [ x] Test copy constructor and assignment operator
  - [x ] Compare with ClapTrap behavior

### 5. Compilation
- x[ ] Create/update Makefile
  - [ x] Add ClapTrap.cpp, FragTrap.cpp, main.cpp to FILES
  - [ ] Update NAME to FragTrap
  - [ ] Ensure compilation with -Wall -Wextra -Werror -std=c++98
- [ ] Test compilation: `make`
- [ ] Run program: `./FragTrap`

## Key Points
- FragTrap IS-A ClapTrap (inheritance)
- Different initial values than ClapTrap and ScavTrap
  - Same HP as ScavTrap (100)
  - More energy than ScavTrap (100 vs 50)
  - More attack damage than ScavTrap (30 vs 20)
- Overridden attack() to show "FragTrap" prefix
- New highFivesGuys() special ability

## Value Comparison Table
| Class     | Hit Points | Energy Points | Attack Damage |
|-----------|------------|---------------|---------------|
| ClapTrap  | 10         | 10            | 0             |
| ScavTrap  | 100        | 50            | 20            |
| FragTrap  | 100        | 100           | 30            |

---
**Status**: 🔄 In Progress
**Next**: ex03 (if required) - DiamondTrap with multiple inheritance
