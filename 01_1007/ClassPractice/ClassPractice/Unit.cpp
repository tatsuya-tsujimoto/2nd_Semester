#include"Unit.h"
#include"Common.h"


Unit::Unit()
{
    status._hp = 0;
    status._tec = 0;
    status._luc = 0;
    status._str = 0;
    status._def = 0;
    status._spd = 0;
    status._mde = 0;
    status._mag = 0;
}





Unit::~Unit()
{

}


void Unit::PrintState()
{

    printf("_hp  = %d\n", status._hp);
    printf("_tec = %d\n", status._tec);
    printf("_luc = %d\n", status._luc);
    printf("_str = %d\n", status._str);
    printf("_def = %d\n", status._def);
    printf("_spd = %d\n", status._spd);
    printf("_mde = %d\n", status._mde);
    printf("_mag = %d\n", status._mag);




}