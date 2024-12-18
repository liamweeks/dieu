#include <stdio.h>
#include <stdlib.h>
#include "utils/utils.h"

int main(int argc, char *argv[]) {

    if (argc == 1) {
        printf("Error: Please provide a file to compile.");
        return 1;
    }

    char *file_name = argv[1];
    FILE *file = fopen(file_name, "r");
    char* contents = malloc(get_file_size(file_name));

    get_file_contents(file, contents);
    printf("%s", contents);



}
