#include <estia-image.h>
#include <stdio.h>

#include "features.h"
#include "utils.h"

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

#include <stdio.h>
#include <stdlib.h>
#include "estia-image.h"

void tenth_pixel(char* filename) {
    unsigned char *data = NULL;
    int width, height, channel_count;

    // Lire l'image
    if (read_image_data(filename, &data, &width, &height, &channel_count) != 0) {
        fprintf(stderr, "Erreur : impossible de lire l'image.\n");
        return;
    }

    // Vérification que l'image est assez large
    if (width < 10) {
        fprintf(stderr, "Erreur : l'image doit avoir au moins 10 pixels de largeur.\n");
        free(data);
        return;
    }

    // Calcul de l'index du 10ème pixel (coordonnées x=9, y=0)
    int pixel_index = 9 * channel_count;

    // Récupérer les valeurs RGB
    int R = data[pixel_index];
    int G = data[pixel_index + 1];
    int B = data[pixel_index + 2];

    // Affichage
    printf("tenth_pixel: %d, %d, %d\n", R, G, B);

    free(data);
}