#ifndef FEATURES_H
#define FEATURES_H
#include "utils.h"


void helloWorld();

void dimension(char* filename);

void tenth_pixel (char* filename);

void first_pixel(char* filename);

void max_pixel(const char* filename, FILE* output);

void print_pixel( char *filename, int x, int y );

void min_pixel(const char* filename, FILE* output);

void min_component(const char* filename, const char* arguments, FILE* output);

void max_component(const char* filename,const char component, FILE* output);

void color_red (const char* filename);

void color_green (const char* filename);

void color_blue (const char* filename);

void color_grey (const char* filename);

void invert_colors (const char* filename);

void color_grey_luminance (const char* filename);

void color_desaturate (const char* filename);

void rotate_cw (const char* filename);
void stat_report(const char* filename);
void rotate_acw (const char* filename);
#endif