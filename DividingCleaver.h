#include <string>
#include "Weapon.h"

#ifndef DIVIDINGCLEAVER_H
#define DIVIDINGCLEAVER_H

/**
 * Defines the behavior of a cleaver (hitpoint = 0,
 * does no damage to unarmored targets, but increases quickly
 * with the targets armor and approaches 50)
 */
class DividingCleaver : public Weapon {
public:

    DividingCleaver() : Weapon("Dividing Cleaver", 0) {
    }
    virtual ~DividingCleaver() {}; 
    virtual double hit(double armor);

};

#endif /* DIVIDINGCLEAVER_H */

