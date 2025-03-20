#pragma once
#pragma once
#include "hp.h"
#include "stattypes.h"
#include "statblock.h"

class Rogue : public Hp, public StatBlock {
public:
	static const hptype HPGROWTH = (hptype)14u;
	static const stattype BASESTR = (stattype)4u;
	static const stattype BASEINT = (stattype)2u;
	Rogue() : Hp(HPGROWTH, HPGROWTH), StatBlock(BASESTR, BASEINT) {}


private:

};