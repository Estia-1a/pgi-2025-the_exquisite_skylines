#include <estia-image.h>
#include <stdio.h>

#include "features.h"
#include "utils.h"
#include "estia-image.h" // Ensure getPixel and pixelRGB are declared





/**
 * @brief Here, you have to code features of the project.
 * Do not forget to commit regurlarly your changes.
 * Your commit messages must contain "#n" with: n = number of the corresponding feature issue.
 * When the feature is totally implemented, your commit message must contain "close #n".
 */

void helloWorld() {
    printf("Hello World !");
}

void dimension(char* filename) {
    unsigned char* data;
    int width, height, channel_count;

    if (read_image_data(filename, &data, &width, &height, &channel_count) == 0) {
        printf("Erreur avec le fichier: %s\n", filename);
    } 
    else {
        printf("dimension: %d, %d\n", width, height);
        free_image_data(data);
    } 
} 

void tenth_pixel(char* filename) {
    unsigned char *data;
    int width, height, channel_count;
    
    read_image_data(filename, &data, &width, &height, &channel_count);
    
    unsigned char r = data[27];
    unsigned char g = data[28];
    unsigned char b = data[29];
    
    printf("tenth_pixel: %d, %d, %d\n", r, g, b);
}

void first_pixel(char* filename) {
    unsigned char* data;
    int width, height, channel_count;

    if (read_image_data(filename, &data, &width, &height, &channel_count) == 0) {
        printf("Erreur avec le fichier: %s\n", filename);
    } 
    else {
        pixelRGB pixel;
        pixel.R = data[0];
        pixel.G = data[1];
        pixel.B = data[2];
        printf("first pixel: %d, %d, %d\n", pixel.R, pixel.G, pixel.B);
    }
}

void max_pixel(char* filename) {
    unsigned char *data;
    int width, height, channel_count;
    
    read_image_data(filename, &data, &width, &height, &channel_count);
    
    int max_sum = -1;
    int max_x = 0, max_y = 0;
    unsigned char max_r = 0, max_g = 0, max_b = 0;
    
    for (int y = 0; y < height; y++) {
        for (int x = 0; x < width; x++) {
            int pixel_index = (y * width + x) * channel_count;

            unsigned char r = data[pixel_index];
            unsigned char g = data[pixel_index + 1];
            unsigned char b = data[pixel_index + 2];

            int sum = r + g + b;

            if (sum > max_sum) {
                max_sum = sum;
                max_x = x;
                max_y = y;
                max_r = r;
                max_g = g;
                max_b = b;
            }
        }
    }
    
    printf("max_pixel (%d, %d): %d, %d, %d\n", max_x, max_y, max_r, max_g, max_b);
    
}
void print_pixel(char* filename, int x, int y) {
    unsigned char *data;
    int width, height, channel_count;
    read_image_data(filename, &data, &width, &height, &channel_count);

    pixelRGB* pixel = get_pixel(data, width, height, channel_count, x, y);
    if (pixel != NULL) {
        printf("(%d, %d): %d, %d, %d\n", x, y, pixel->R, pixel->G, pixel->B);
    } else {
        printf("(%d, %d)\n", x, y);
    }
}

void min_pixel(char* filename) {
    unsigned char *data;
    int width, height, channel_count;

    read_image_data(filename, &data, &width, &height, &channel_count);
    
    int min_sum = 999;
    int min_x = 0, min_y = 0;
    unsigned char min_r = 0, min_g = 0, min_b = 0;
    
    for (int y = 0; y < height; y++) {
        for (int x = 0; x < width; x++) {
            int pixel_index = (y * width + x) * channel_count;
            
            unsigned char r = data[pixel_index];
            unsigned char g = data[pixel_index + 1];
            unsigned char b = data[pixel_index + 2];
            
            int sum = r + g + b;
            
            if (sum < min_sum) {
                min_sum = sum;
                min_x = x;
                min_y = y;
                min_r = r;
                min_g = g;
                min_b = b;
            }
        }
    }
    
    printf("min_pixel (%d, %d): %d, %d, %d\n", min_x, min_y, min_r, min_g, min_b);
}