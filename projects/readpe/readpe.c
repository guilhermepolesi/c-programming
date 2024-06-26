#include <stdio.h>
#include <stdlib.h>
#include "lib/petest.h"

void fatal(char *msg) {
    if (msg != NULL) {
        fprintf(stderr, "Erro: %s\n", msg);
        exit(1);
    }
}

void usage() {
  printf("Uso:\n\treadpe <arquivo.exe>\n");
  fatal(NULL);
}

int main(int argc, char *argv[]) { 
    
    if (argc != 2) {
        usage();
    }

    PEFILE pe;

    pe.filepath = argv[1];

    petest_init(&pe);
    if (petest_ispe(&pe)) {
        printf("Eh um PE.. continuando... \n");
    }
    else {
        fatal("nao eh nao. Saindo...");
    }
    printf("File: %s\n", pe.filepath);
    printf("MZ header: %x\n", pe.hdr_dos->e_magic);
    printf("COFF header offset: %x\n", pe.hdr_dos->e_lfanew);

    petest_deinit(&pe);

    return 0;
}
