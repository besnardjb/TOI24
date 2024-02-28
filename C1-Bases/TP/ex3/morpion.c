#include "morpion.h"
#include <stdio.h>
#include <string.h>



int morpion_init(struct morpion *m)
{
    memset(m->table, '_', 9*sizeof(int));
    return 0;
}

int morpion_release(struct morpion *m)
{
    return 0;
}

char morpion_get(struct morpion *m, int x, int y)
{
    if( (x < 0) || (y < 0))
    {
        return 1;
    }


    if( (x > 2) || (y > 2))
    {
        return 1;
    }

    int off = y * 3 + x;

    return m->table[off];
}


int morpion_set(struct morpion *m, int x, int y, char v)
{
    if( (x < 0) || (y < 0))
    {
        return 1;
    }


    if( (x > 2) || (y > 2))
    {
        return 1;
    }

    if( (v != 'X') && (v != 'O'))
    {
        return 1;
    }

    int off = y * 3 + x;

    m->table[off] = v;

    return 0;
}

int morpion_display(struct morpion *m)
{
    int i, j;
    for(i = 0; i < 3; i++)
    {
        for(j = 0 ; j < 3; j++)
        {
            printf("%c", m->table[i*3 +j]);
        }
        printf("\n");
    }

    return 0;
}
// 0 == Pas gagné
// 1 == Gagné
int morpion_check(struct morpion *m)
{
    int i, j;

    for(i = 0 ;i < 3; i++)
    {
        char a = morpion_get(m, i, 0);
        char b = morpion_get(m, i, 1);
        char c = morpion_get(m, i, 2);
        
        if ((a^b^c) == a)
        {
            return 1;
        }

        char ca = morpion_get(m, 0,i);
        char cb = morpion_get(m, 1, i);
        char cc = morpion_get(m, 2, i);
        
        if ((ca^cb^cc) == ca)
        {
            return 1;
        }
    }

    int won_diagonal1 = 1;
    int won_diagonal2 = 1;

    for(i = 0; i < 3; i++)
    {
        if( morpion_get(m, 0, 0) != morpion_get(m, i, i))
        {
            won_diagonal1 = 0;
        }
        if( morpion_get(m, 2, 2) != morpion_get(m, 3-i, i))
        {
            won_diagonal2 = 0;
        }
    }

    if(won_diagonal1)
    {
        return 1;
    }

    if(won_diagonal2)
    {
        return 1;
    }

    return 0;
}