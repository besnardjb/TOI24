#ifndef MORPION_H
#define MORPION_H

struct morpion
{
    char table[9];
};


int morpion_init(struct morpion *m);
int morpion_release(struct morpion *m);

int morpion_set(struct morpion *m, int x, int y, char v);
char morpion_get(struct morpion *m, int x, int y);
int morpion_display(struct morpion *m);



#endif