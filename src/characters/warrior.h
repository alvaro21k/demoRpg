#pragma once
#include "hp.h"
#include "stattypes.h"
#include "statblock.h"

class Warrior : public Hp, public StatBlock {
public:
	static const hptype HPGROWTH = (hptype)19u;
	static const stattype BASESTR = (stattype)5u;
	static const stattype BASEINT = (stattype)1u;
	Warrior() : Hp(HPGROWTH, HPGROWTH), StatBlock(BASESTR, BASEINT) {}


private:

};