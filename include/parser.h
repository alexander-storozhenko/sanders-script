//
// Created by alexander on 07.05.2021.
//

#ifndef SANDERS_SCRIPT_PARSER_H
#define SANDERS_SCRIPT_PARSER_H
#include "lexer.h"
#include "AST.h"
#include "scope.h"

typedef struct PARSER_STRUCT {
    lexer_T* lexer;
    token_T* current_token;
    token_T* prev_token;
    scope_T* scope;
} parser_T;

parser_T* init_parser(lexer_T* lexer);

void parser_eat(parser_T* parser, int token_type);
AST_T* parser_parse(parser_T* parser, scope_T* scope);
AST_T* parser_parse_statement(parser_T* parser, scope_T* scope);

AST_T* parser_parse_statements(parser_T* parser, scope_T* scope);

#endif //SANDERS_SCRIPT_PARSER_H
