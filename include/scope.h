//
// Created by alexander on 07.05.2021.
//

#ifndef SANDERS_SCRIPT_SCOPE_H
#define SANDERS_SCRIPT_SCOPE_H
typedef struct SCOPE_STRUCT
{
    AST_T** function_definitions;
    size_t function_definitions_size;

    AST_T** variable_definitions;
    size_t variable_definitions_size;
} scope_T;

#endif //SANDERS_SCRIPT_SCOPE_H
