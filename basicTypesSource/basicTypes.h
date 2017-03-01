#include <stdio.h>
#include <stdlib.h>

typedef struct Integer{
	int value;
} Integer;

int compare_Integer(Integer* t, Integer* t2);
void print_Integer(Integer* t);

typedef struct Character{
	char value;
} Character;

int compare_Character(Character* t, Character* t2);
void print_Character(Character* t);
Character* new_Character(char a);

typedef struct Double{
    double value;
} Double;

int compare_Double(Double* t, Double* t2);
void print_Double(Double* t);

typedef struct Float{
    float value;
} Float;

int compare_Float(Float* t, Float* t2);
void print_Float(Float* t);

typedef struct LongDouble{
    long double value;
} LongDouble;

int compare_LongDouble(LongDouble* t, LongDouble* t2);
void print_LongDouble(LongDouble* t);

typedef struct LongInteger{
	long int value;
} LongInteger;

int compare_LongInteger(LongInteger* t, LongInteger* t2);
void print_LongInteger(LongInteger* t);

