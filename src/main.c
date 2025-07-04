#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <estia-image.h>
#include <getopt.h>

#include "features.h"
#include "utils.h"
#include "argsparse.h"

int main(int argc, char **argv) {
  /*To use debug mode: 
   - add --debug: freud.exe --debug -f images/input/image.jpeg
   or 
   - Simply run your compiled project with start button on the blue menu bar at the bottom of the VS Code window.
   */

  /*DO NOT EDIT THIS PART*/
  Config configuration ;
  parse_arguments( argc, argv, &configuration ) ;
  check_debug_mode(configuration);
  check_file();
  /* END */

  /* Use "if ( strncmp( command, <commandname>, 9 ) == 0 )" to check if your <commandname> is called by program.*/
  /* Example with helloworld command
   * If helloworld is a called command: freud.exe -f images/input/image.jpeg -c helloworld 
   */
  if ( strncmp( configuration.command, "helloworld", 10 ) == 0 ) {
    /* helloworld() function is defined in feature.h and implemented in feature.c */
    helloWorld();
  } else if (strncmp( configuration.command, "dimension", 9) == 0 ) {
    dimension(configuration.filenames[0]);
  } else if (strncmp( configuration.command, "tenth_pixel", 11) == 0) {
    tenth_pixel(configuration.filenames[0]);
  } else if (strncmp( configuration.command, "first_pixel", 11) == 0 ) {
    first_pixel(configuration.filenames[0]);
  } else if (strncmp( configuration.command, "max_pixel", 9) == 0) {
    max_pixel(configuration.filenames[0], stdout);
  } else if (strncmp( configuration.command, "min_pixel", 9) == 0) {
    min_pixel(configuration.filenames[0], stdout);
  } else if (strncmp( configuration.command, "print_pixel", 11)==0) {
    print_pixel(configuration.filenames[0], configuration.x, configuration.y);
  } else if (strncmp( configuration.command, "min_component", 13) == 0) {
    min_component (configuration.filenames[0], configuration.arguments[0], stdout);
  } else if (strncmp(configuration.command, "max_component", 13) == 0) {
    max_component (configuration.filenames[0], configuration.arguments[0][0], stdout);
  } else if (strncmp( configuration.command, "color_red", 10) == 0) {
    color_red(configuration.filenames[0]);
  } else if (strncmp( configuration.command, "color_green", 12) == 0) {
    color_green(configuration.filenames[0]);
  } else if (strncmp( configuration.command, "color_blue", 11) == 0) {
    color_blue(configuration.filenames[0]);
  } else if (strncmp(configuration.command, "color_grey",11 )==0) {
    color_grey(configuration.filenames[0]);
  }else if (strncmp(configuration.command, "invert_colors", 13) == 0) {
    invert_colors(configuration.filenames[0]);
  }else if (strncmp(configuration.command,"color_grey_luminance", 20) == 0) {
    color_grey_luminance(configuration.filenames[0]);
  }else if (strncmp(configuration.command, "color_desaturate", 16) == 0) {
    color_desaturate(configuration.filenames[0]);
  } else if (strncmp(configuration.command, "rotate_cw", 9) == 0) {
    rotate_cw(configuration.filenames[0]);
  } else if (strcmp(configuration.command, "stat_report") == 0) {
    stat_report(configuration.filenames[0] );
  } else if (strncmp(configuration.command, "rotate_acw", 10) == 0) {
    rotate_acw(configuration.filenames[0]);
  }
   return 0;
}