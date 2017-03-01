#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define DECLARE_ELEMENT(TYPE)\
\
    const char* toString_##TYPE(TYPE t);  \
    \
    typedef struct ELEMENT_##TYPE ELEMENT_##TYPE;\
    struct ELEMENT_##TYPE{\
        TYPE *content;\
        ELEMENT_##TYPE *prev;\
        ELEMENT_##TYPE *next;\
    };\
    \
    void elementInit_##TYPE(ELEMENT_##TYPE* elem, TYPE* t){\
        elem->content = t;\
        elem->prev = NULL;\
        elem->next = NULL;\
    }\
\




