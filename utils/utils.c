//
// Created by Liam Weeks on 2024-12-17.
//

#include "utils.h"
#include <string.h>
#include <stdio.h>
#include <sys/stat.h>

int get_file_size(char* file_name) {
    struct stat sb;

    if (stat(file_name, &sb) == 0) {
        return sb.st_size;
    } else {
        perror("stat");
    }
}

void get_file_contents(FILE* file, char* contents_ptr) {
        // Open the file for reading
        char line[1024];
        // char contents[1024];
        if (file == NULL) {
            perror("fopen");
        }

        // Read each line from the file and print it to the console
        while (fgets(line, sizeof(line), file)) {
            // printf("%s", line);
            strcat(contents_ptr, line);
        }
        // Close the file when done reading
        fclose(file);
}