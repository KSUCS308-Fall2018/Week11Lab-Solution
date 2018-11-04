//
//  core.c
//  Week11 
//
//  Created by Ashley Coleman on 7/5/18.
//  Copyright © 2018 Ashley Coleman. All rights reserved.
//

#include <stdlib.h>
#include <string.h>

#include "core.h"

#include "rectangle.h"
#include "triangle.h"

int core_main(int argc, const char * argv[]) {

    Shape * s = new_triangle(3, 4, 5);

    printf("Area: %f", s->area(s));
    printf("perimeter: %f", s->perimeter(s));

    return 0;
}

