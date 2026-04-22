#include <stdio.h>

int main(){

    char c='a';

    // Voyelle
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='y'){
        printf("Voyelle");
    }
    else{
        printf("Consonne");
    }

    return 0;
}