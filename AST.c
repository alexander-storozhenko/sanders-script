//
// Created by alexander on 07.05.2021.
//
#include "include/AST.h"

AST_T* init_ast(int type) {
    AST_T* ast = calloc(1, sizeof (struct AST_STRUCT));

    ast->type= type;

    ast->var_def_name = NULL;
    ast->var_def_value = NULL;

    return ast;
}