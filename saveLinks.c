
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    /* code */
    /*
    argc ⟶ 3
    argv[1]= Link name
    argv[2]= Link
    */
    FILE* fp = fopen("/Users/chrisnelson/Dropbox/Markdown/Saved Links.md", "a"); //open "saved links" in append mode
    fprintf(fp, "\n[%s](%s)\n", argv[1], argv[2]);
    fclose(fp);
    return 0;
}
