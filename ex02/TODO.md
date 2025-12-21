# TODO - Exercise 02 (FragTrap)

## Prerequisites
- [ ] ClapTrap attributes must be `protected` in ex00/ClapTrap.hpp
- [ ] Copy ClapTrap files from ex00 to ex02

## Implementation Tasks

### 1. FragTrap Class
- [ ] Create FragTrap.hpp header file
  - [ ] Include proper header guards
  - [ ] Include ClapTrap.hpp
  - [ ] Declare FragTrap class inheriting from ClapTrap
- [ ] Create FragTrap.cpp implementation file

### 2. Orthodox Canonical Form
- [ ] Default constructor
  - [ ] Call ClapTrap constructor
  - [ ] Set Hit points to 100
  - [ ] Set Energy points to 100
  - [ ] Set Attack damage to 30
  - [ ] Print construction message
- [ ] Parameterized constructor (takes name)
- [ ] Copy constructor
- [ ] Assignment operator
- [ ] Destructor (print destruction message)

### 3. Member Functions
- [ ] Override `attack()` function
  - [ ] Print "FragTrap <name> attacks <target>..." instead of "ClapTrap"
  - [ ] Keep same logic (energy/hit points checks)
- [ ] Add `highFivesGuys()` function
  - [ ] Print positive high fives request message
  - [ ] No parameters, void return

### 4. Testing
- [ ] Create main.cpp with comprehensive tests:
  - [ ] Test construction/destruction messages
  - [ ] Test initial values (100 HP, 100 EP, 30 AD)
  - [ ] Test attack() with FragTrap prefix
  - [ ] Test highFivesGuys() function
  - [ ] Test takeDamage() and beRepaired() (inherited)
  - [ ] Test energy depletion scenarios
  - [ ] Test copy constructor and assignment operator
  - [ ] Compare with ClapTrap behavior

### 5. Compilation
- [ ] Create/update Makefile
  - [ ] Add ClapTrap.cpp, FragTrap.cpp, main.cpp to FILES
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
