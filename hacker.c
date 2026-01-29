#include<stdio.h>
#include<string.h>

struct hacker {
    int id;
    char name[30];
    char skill[30];
};
int main() {
    struct hacker h1;
    h1.id = 112;
    strcpy(h1.name,"Jorle");
    strcpy(h1.skill,"SQL Injection");

    struct hacker *p = &h1;

    printf("---- Hacker Details -----\n");
    printf("ID: %d\n", h1.id);
    printf("Name: %s\n", p->name);
    printf("Skill: %s\n", p->skill);

    return 0;
}
