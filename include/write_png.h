#ifndef _WRITE_PNG_H
#define _WRITE_PNG_H

#include <cairo.h>
#include <stdio.h>

int write_to_png_stream(cairo_surface_t *image, FILE *stream, int comp_level);

#endif
