#include <stdio.h>

#include <stdlib.h>

#include <ctype.h>

#include <string.h>

int main(int argc, char *argv[]) {

    FILE *f1,*f2,*temp;

    char ch;

    if(argc!=3) {

        printf("Usage: exchange <f1> <f2>.\n");

        exit(1);

    }

    if((f1 = fopen(argv[1], "r"))==NULL) {

        printf("Cannot open first file.\n");

        exit(1);

    }

    if((f2 = fopen(argv[2], "r"))==NULL) {

        printf("Cannot open second file.\n");

        exit(1);

    }

    if((temp = fopen("temp.tmp", "r"))==NULL) {

        printf("Cannot open temporary file.\n");

        exit(1);

    }

    while(!feof(f1)) {

        ch = fgetc(f1);

        if(!feof(f1)) fputc(ch, temp);

    }

    fclose(f1);

    if((f1 = fopen(argv[1], "wb"))==NULL) {

        printf("Cannot open first file.\n");

        exit(1);

    }

    while(!feof(f2)) {

        ch = fgetc(f2);

        if(!feof(f2)) fputc(ch, f1);

    }

    fclose(f2);

    fclose(temp);

    if((f2 = fopen(argv[2], "wb"))==NULL) {

        printf("Cannot open second file.\n");

        exit(1);

    }

    if((temp = fopen("temp.tmp", "rb"))==NULL) {

        printf("Cannot open temporary file.\n");

        exit(1);

    }

    while(!feof(temp)) {

        ch = fgetc(temp);

        if(!feof(temp))

            fputc(ch,f2);

    }

    fclose(f1);

    fclose(f2);

    fclose(temp);

    return 0;

}
