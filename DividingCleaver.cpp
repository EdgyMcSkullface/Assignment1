#include "DividingCleaver.h"

double DividingCleaver::hit(double armor) {
	if (armor <= 0)
		return 0;
	
	double damage = 50 - (50/(armor));
    	if (damage < 0) {
    	    return 0;
    	}
    return damage;
}
