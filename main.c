#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

void test_sum() {
    int a = 0;
    int b = 0;
    sum(&a,&b);
    assert(a == 0);
    
    a = 10;
    b = 20;
    sum(&a,&b);
    assert(a == 30);
    
    a = -5;
    b = 10;
    sum(&a,&b);
    assert(a == 5);
    printf("Тесты прошли успешно!\n");
}

void test_length() {
    char* s = "alo";
    assert(length(s) == 3);
    s = "chevelle";
    assert(length(s) == 8);
    s = "";
    assert(length(s) == 0);
    printf("Тесты прошли успешно!\n");
}

void test_count_vowels() {
    char* s = "alo";
    assert(count_vowels(s) == 2);
    s = "chevelle";
    assert(count_vowels(s) == 3);
    s = "";
    assert(count_vowels(s) == 0);
    s = "cbdfgrt";
    assert(count_vowels(s) == 0);
    s = "HALLELUJAH";
    assert(count_vowels(s) == 4);
    printf("Тесты прошли успешно!\n");
}

void test_reverse() {
    char* s = "alo";
    assert(!strcmp(reverse(s),"ola"));
    s = "chevelle";
    assert(!strcmp(reverse(s),"ellevehc"));
    s = "";
    assert(!strcmp(reverse(s),""));
    s = "HALLELUJAH";
    assert(!strcmp(reverse(s),"HAJULELLAH"));
    printf("Тесты прошли успешно!\n");
}

int main() {
    test_sum();
    test_length();
    test_count_vowels();
    test_reverse();
    return 0;
}