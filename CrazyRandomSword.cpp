#include "CrazyRandomSword.h"

double CrazyRandomSword::hit(double armor) {
	srand(time(NULL));
	hitPoints = rand() % 90 + 10;
	double armIgnored = rand() % ((armor/2) + 1);
	double damage = hitPoints - (armor - armIgnored);
    if (damage < 0) {
        return 0;
    }
    return damage;
}
