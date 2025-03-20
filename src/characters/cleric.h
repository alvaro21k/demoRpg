#pragma once
#pragma once
#include "hp.h"
#include "stattypes.h"
#include "statblock.h"

class Cleric : public Hp, public StatBlock {
public:
	static const hptype HPGROWTH = (hptype)14u;
	static const stattype BASESTR = (stattype)1u;
	static const stattype BASEINT = (stattype)4u;
	Cleric() : Hp(HPGROWTH, HPGROWTH), StatBlock(BASESTR, BASEINT) {}


private:

};