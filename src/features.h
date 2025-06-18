#ifndef FEATURES_H
#define FEATURES_H
#include "utils.h"


void helloWorld();

void dimension(char* filename);

void tenth_pixel (char* filename);

void first_pixel(char* filename);

void max_pixel(char* filename);

void print_pixel( char *filename, int x, int y );

void min_pixel(char* filename);

void min_component(char* filename, char* arguments);

void max_component(char* filename, char component);
#endif