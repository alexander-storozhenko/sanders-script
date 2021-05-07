//
// Created by alexander on 07.05.2021.
//

#ifndef SANDERS_SCRIPT_AST_H
#define SANDERS_SCRIPT_AST_H
#include "lexer.h"
#include "stdlib.h"

typedef struct AST_STRUCT {
    enum {
        AST_VAR_DEF,
        AST_VAR,
        AST_FUNC_CALL,
        AST_STRING,
        AST_COMPOUND,
    } type;

    char var_def_name;
    struct AST_STRUCT* var_def_value;

} AST_T;

AST_T* init_ast(int type);

#endif //SANDERS_SCRIPT_AST_H
