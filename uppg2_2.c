/*
Copyright (c) 2012 Gustav Svalander, Chalmers course LEU480, Lindholmen, Göteborg

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

#include "uppg2_2.h"

int main(void){

	int v=0,a=0;
	double height=0.0,dis=0.0;

	printf("Ange utgångshastighet:\n");
	scanf("%i", &v);
	printf("Ange kastvinkel:\n");
	scanf("%i", &a);
	double radians=(a*3.14159265359)/180;
	height=(pow(v,2)*pow(sin(radians),2))/(2*ACC_GRAVITY);
	dis=(pow(v,2)*sin(2*radians))/ACC_GRAVITY;



	printf("Using velocity=%im/s and angle %ideg the height will be %.4fm and the distance %.4fm\n", v, a, height, dis);

	return(0);
}