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