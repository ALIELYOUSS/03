# TODO - Exercise 00 (ClapTrap) - ✅ COMPLETED

## ✅ All Issues Fixed!

### Implemented Features:
1. ✅ Assignment operator (`operator=`)
2. ✅ Getter functions (getName, getHitPoints, getEnergyPoints, getAttackDamage)
3. ✅ Data types changed to `unsigned int`
4. ✅ takeDamage() logic fixed - checks `_hitPoints` correctly
5. ✅ beRepaired() logic fixed - checks destruction and energy, proper messages
6. ✅ Comprehensive main.cpp with tests
7. ✅ Compilation successful with `-Werror`

---

## ⚠️ Note for ex01:

Before moving to ex01, you need to make ONE change:

### Change `private` to `protected` in ClapTrap
For inheritance to work in ex01 and beyond, ClapTrap's members must be `protected`:

**In ClapTrap.hpp**, change:
```cpp
private:  // ← Change this
    std::string _name;
    unsigned int _hitPoints;
    unsigned int _energyPoints;
    unsigned int _attackDamage;
```

To:
```cpp
protected:  // ← To this
    std::string _name;
    unsigned int _hitPoints;
    unsigned int _energyPoints;
    unsigned int _attackDamage;
```

**Why?** 
- `private`: Only ClapTrap can access (derived classes CANNOT)
- `protected`: ClapTrap AND derived classes (ScavTrap, FragTrap) can access
- `public`: Everyone can access (not what we want)

---

## Summary
**Status**: ✅ Exercise 00 Complete!
**Next Step**: See [ex01/TODO.md](../ex01/TODO.md) for next exercise
**Ready for**: Inheritance (ex01, ex02, ex03)
