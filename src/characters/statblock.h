#pragma once
#include "stattypes.h"

class StatBlock
{
private:
	stattype strength;
	stattype intelligence;

public:
	StatBlock() { 
		strength = (stattype)1u; 
		intelligence = (stattype)1u; 
	}
	explicit StatBlock(stattype s, stattype i) { 
		strength = s; 
		intelligence = i; 
	}

	stattype getStrength() {
		return strength;
	}

	stattype getIntelligence() {
		return intelligence;
	}

};