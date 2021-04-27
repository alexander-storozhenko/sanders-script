#include <stdio.h>
#include <string.h>
#include "include/lexer.h"
#include "include/file.h"

int main() {
    //example
    lexer_T* lexer = init_lexer(get_file_contents("./example.ss"));

    return 0;
}
