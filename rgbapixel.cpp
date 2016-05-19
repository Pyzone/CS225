#include "rgbapixel.h"

RGBAPixel::RGBAPixel()
{
	this->alpha = 255;
	this->blue = 255;
	this->red = 255;
	this->green = 255;
}

RGBAPixel::RGBAPixel(uint8_t r, uint8_t g, uint8_t b)
{
	this->red = r;
	this->blue = b;
	this->green=g;
	this->alpha = 255;
}
