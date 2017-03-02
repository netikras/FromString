#include <unistd.h>


int leftOffsetSize=-1;
int offs=0;
char leftOffsetChar = '\t';
char BS=8;
char colsep = '.';

char nextChar(char* str) {
    return str[offs++];
}

void indent(){
    for (int i=0; i<leftOffsetSize; i++) {
        write(1, &leftOffsetChar, 1);
        write(1, &colsep, 1);
    }
    if (leftOffsetSize > 0) write(1, &BS, 1);
}

void removePrecedingSpaces(char* str) {
    while(str[offs] == ' ' || str[offs] == '\t') {
        offs++;
    }
}

void printchar(char c) {
    write(1, &c, 1);
}

void printnl(){
    printchar('\n');
}

void print(char* str) {
    int length = 0;
    while(str[length++] != '\0');
    write(1, str, --length);
}

void println(char* str) {
    print(str);
    printnl();
}

int fromString(char* str) {
    leftOffsetSize++;
    char c;

    printnl();
    indent();
    c = nextChar(str);

    while ((c != ']' && c != '}') && c != '\0') {
        printchar(c);
        if (c == ',') {
            printnl();
            indent();
            removePrecedingSpaces(str);
        } else 
        if ((c == '[' || c == '{') && ! fromString(str)) {
            return 0;
        }
        c = nextChar(str);
    }

    leftOffsetSize--;

    if (c == '\0') return 0;

    printnl();
    indent();
    
    printchar(c);

    return 1;
}



int main(int argc, char** argv) {
    if (argc > 1) {
        fromString(argv[1]);
    } else {
        println("E: missing object string");
        return 1;
    }

    printnl();
    
    return 0;
}
