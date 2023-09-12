#include <iostream>
#include "BMP.h"
#include <cmath>

int main() {

    // You can change the size of canvas
    BMP bmpNew(200,200,false);

    //Set the canvas to black
    bmpNew.fill_region(0, 0, 200, 200, 0, 0, 0, 0);

    for(int i=0;i<bmpNew.bmp_info_header.width;i++)
    {
        bmpNew.set_pixel(i, 100, 255, 255, 255, 0);
    }
    bmpNew.write("output.bmp");


}
