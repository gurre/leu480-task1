/*
Copyright (c) 2012 Gustav Svalander, Chalmers course LEU480, Lindholmen, Göteborg

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

#include "uppg4.h"

int main(void){
	int i=0,gissat=-1,gissningar=0;
	char rattsvar=0;
	unsigned int iseed = (unsigned int)time(NULL);
	srand (iseed);

	int hemligt = rand()%100+1;

	while(rattsvar==0){
		printf("Gissa mellan 1-100(%i)> ",hemligt);
		if(!scanf("%i", &gissat)){
			printf("Fel angivet, måste vara tal\n");
		}
		gissningar++;
		if(gissat<0){
			break;
		}
		else if(gissningar>=10){
			printf("Game over, du gissade %i gånger. Nytt tal!\n", gissningar);
			hemligt = rand()%100+1;
			gissningar=0;
		}
		else if(hemligt == gissat){
			printf("Rätt svar! Nu är det ett annat.\n");
			hemligt = rand()%100+1;
			gissningar=0;
		}
		else{
			if(hemligt > gissat){
				printf("Fågel\n");
			}else if(hemligt < gissat){
				printf("Fisk\n");
			}

		}

	}
	return(0);
}