#pragma once
#pragma once
#include "hp.h"
#include "stattypes.h"
#include "statblock.h"

class Wizard : public Hp, public StatBlock {
public:
	static const hptype HPGROWTH = (hptype)9u;
	static const stattype BASESTR = (stattype)1u;
	static const stattype BASEINT = (stattype)5u;
	Wizard() : Hp(HPGROWTH, HPGROWTH), StatBlock(BASESTR, BASEINT) {}


private:

};