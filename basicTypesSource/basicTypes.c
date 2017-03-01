#include "basicTypes.h"

int compare_LongDouble(LongDouble* t, LongDouble* t2){
    if(t->value > t2->value)
        return 1;
    else if(t->value < t2->value)
        return -1;
    else
        return 0;
}

void print_LongDouble(LongDouble* t)
{
   printf("%Lf\n", t->value);
}

int compare_LongInteger(LongInteger* t, LongInteger* t2){
    if(t->value > t2->value)
        return 1;
    else if(t->value < t2->value)
        return -1;
    else
        return 0;
}

void print_LongInteger(LongInteger* t)
{
    printf("%ld\n", t->value);
}

int compare_Integer(Integer* t, Integer* t2){
    if(t->value > t2->value)
        return 1;
    else if(t->value < t2->value)
        return -1;
    else
        return 0;
}

void print_Integer(Integer* t)
{
    printf("%d\n", t->value);
}

int compare_Float(Float* t, Float* t2){
    if(t->value > t2->value)
        return 1;
    else if(t->value < t2->value)
        return -1;
    else
        return 0;
}

void print_Float(Float* t)
{
    printf("%f\n", t->value);
}

int compare_Double(Double* t, Double* t2){
    if(t->value > t2->value)
        return 1;
    else if(t->value < t2->value)
        return -1;
    else
        return 0;
}

void print_Double(Double* t)
{
    printf("%f\n", t->value);
}

int compare_Character(Character* t, Character* t2){
    if(t->value > t2->value)
        return 1;
    else if(t->value < t2->value)
        return -1;
    else
        return 0;
}

void print_Character(Character* t)
{
    printf("%c\n", t->value);
}

Character* new_Character(char a){
    Character* this = malloc(sizeof(Character));
    this->value = a;
}
