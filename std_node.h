#ifndef STD_NODE_H
#define STD_NODE_H

typedef struct std_node {
    int value;              // ← ใช้ value ตาม main.c
    struct std_node *next;
} NODE;

typedef NODE* NodePtr;

#endif