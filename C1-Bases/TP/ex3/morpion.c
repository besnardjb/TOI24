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

int morpion_check(struct morpion *m)
{
    int cntx=0, cnty=0;

    
}