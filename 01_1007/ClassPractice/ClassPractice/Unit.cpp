#include"Unit.h"
#include"Common.h"


Unit::Unit()
{
    m_hp = 0;
    m_tec = 0;
    m_luc = 0;
    m_str = 0;
    m_def = 0;
    m_spd = 0;
    m_mde = 0;
    m_mag = 0;
}





Unit::~Unit()
{

}


void Unit::PrintState()
{

    printf("m_hp  = %d\n", m_hp);
    printf("m_tec = %d\n", m_tec);
    printf("m_luc = %d\n", m_luc);
    printf("m_str = %d\n", m_str);
    printf("m_def = %d\n", m_def);
    printf("m_spd = %d\n", m_spd);
    printf("m_mde = %d\n", m_mde);
    printf("m_mag = %d\n", m_mag);




}