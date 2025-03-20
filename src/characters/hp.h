#pragma once
#include <cstdint>
#include "stattypes.h"


class Hp {
public:
	//Returns true if set succesfully

	Hp() {
		currentHp = 1;
		maxHp = 1;
	}

	explicit Hp(hptype cHp, hptype mHp) {
		currentHp = cHp;
		maxHp = mHp;
		if (currentHp > maxHp) {
			currentHp = maxHp;
		}
	}

	~Hp() {}

	bool setMaxHp(hptype newMaxHp) {
		if (newMaxHp < 1) {
			return false;
		}

		maxHp = newMaxHp;

		if (currentHp > maxHp) {
			currentHp = maxHp;
		}

		return true;
	}

	void takeDamage(hptype damage) {
		if (damage > currentHp) {
			currentHp = 0;
		}
		else {
			currentHp -= damage;
		}		
	}

	void heal(hptype amount) {
		if (amount + currentHp > maxHp) {
			currentHp = maxHp;
		}
		else {
			currentHp += amount;
		}
	}

	hptype getMaxHp() {
		return maxHp;
	}

	hptype getCurrentHp() {
		return currentHp;
	}

private:
	hptype currentHp;
	hptype maxHp;
};