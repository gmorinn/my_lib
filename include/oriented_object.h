/*
** EPITECH PROJECT, 2021
** oriented object
** File description:
** lib
*/

#ifndef _ORIENTED_OBJECT_H_
#define _ORIENTED_OBJECT_H_

#include "lib.h"

typedef struct op_item_s op_item_t;
struct op_item_s
{
    char *str;
    int nb;
    op_item_t *next;
};

typedef struct op_s op_t;
struct op_s
{
    void (*op_put_end)(op_t *, int nb, char *);
    int (*op_length)(op_t *);
    int (*op_rm_last)(op_t *);
    void (*op_print)(op_t *);
    void (*op_set_str)(op_t **, int, char *);
    void (*op_rm_all)(op_t *);
    void (*op_clear)(op_t *);
    char *(*op_get)(op_t *, int);

    int lenght;
    op_item_t *top;
};

void op_clear(op_t *this);
void op_put_end(op_t *this, int nb, char *str);
void op_set_str(op_t **this, int index, char *str);
void op_rm_all(op_t *this);
int op_length(op_t *this);
void op_print(op_t *this);
void init_op(op_t **this);
op_t *create_op(void);
int op_rm_last(op_t *this);
char *op_get(op_t *this, int index);

#endif /* !_ORIENTED_OBJECT_H_ */
