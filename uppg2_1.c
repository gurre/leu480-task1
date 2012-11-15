/*
Copyright (c) 2012 Gustav Svalander, Chalmers course LEU480, Lindholmen, Göteborg

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

#include "uppg2_1.h"

int main(void){

	int summa = 0;

	printf("Ange antal tal:\n");
	int antaltal;
	scanf("%i", &antaltal);

	int tal[antaltal];
	int i;
	for(i = 0; i < antaltal; i ++){
		printf("Tal %i> ",i+1);
		if(!scanf("%i", &tal[i])){
			printf("Fel angivet, måste vara tal. Avslutar\n");
			return(0);
		}
		summa += tal[i];
	}
	if(summa>0 && antaltal>0){
		float mean=0.0;
		if(antaltal!=0) mean=(float)summa/antaltal;
		printf("Summa: %i och antal: %i blir medelvärde: %.2f\n", summa, antaltal, mean);
	}

	return(0);
}