
#include <stdlib.h>
#include<stdio.h>

class Fighter
{
public:
    Fighter();
    ~Fighter();
    int m_hp;
    int m_tec;
    int m_luc;
    int m_str;
    int m_def;
    int m_spd;
    int m_mde;
    int m_mag;



private:


};



Fighter::Fighter()
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





Fighter::~Fighter()
{

}



int main()
{

    Fighter fighter;
    printf("m_hp  = %d\n", fighter.m_hp);
    printf("m_tec = %d\n", fighter.m_tec);
    printf("m_luc = %d\n", fighter.m_luc);
    printf("m_str = %d\n", fighter.m_str);
    printf("m_def = %d\n", fighter.m_def);
    printf("m_spd = %d\n", fighter.m_spd);
    printf("m_mde = %d\n", fighter.m_mde);
    printf("m_mag = %d\n", fighter.m_mag);


    system("pause");
    return 0;




}


