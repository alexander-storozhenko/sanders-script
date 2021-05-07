//
// Created by alexander on 07.05.2021.
//

#include "include/parser.h"
#include "include/scope.h"
#include <stdio.h>
#include <string.h>

parser_T* init_parser(lexer_T* lexer)
{
    parser_T* parser = calloc(1, sizeof(struct PARSER_STRUCT));
    parser->lexer = lexer;
    parser->current_token = lexer_get_next_token(lexer);
    parser->prev_token = parser->current_token;

    return parser;
}

void parser_eat(parser_T* parser, int token_type) {
    if(parser->current_token->type == token_type) {
        parser->current_token = lexer_get_next_token(parser->lexer);
        parser->prev_token = parser->current_token;
    } else {
        printf("Unexpected token %s", parser->current_token->value);
        exit(1);
    }
}
