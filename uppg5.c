/*
Copyright (c) 2012 Gustav Svalander, Chalmers course LEU480, Lindholmen, Göteborg

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

#include "uppg5.h"

int main(void){
	int tabell=-1, svar=0,ratt=0,fel=0,tries=0,tal;
	unsigned int iseed = (unsigned int)time(NULL);
	srand (iseed);

	printf("Ange multiplikationstabell> ",tabell);
	if(!scanf("%i", &tabell)){
		printf("Fel angivet, måste vara tal\n");
	}

	if(tabell==-1){
		int tabell = rand()%10+1;
	}
	tal = rand()%11+1;

	while(svar>=0){
		printf("%i * %i = ", tabell, tal);
		if(!scanf("%i", &svar)){
			printf("Fel angivet, måste vara tal\n");
		}

		if(svar<0){
			break;
		}
		else{
			tries++;
			if(svar == tabell*tal){
				printf("Rätt!\n");
				tal = rand()%11+1;
				ratt++;
			}else{
				printf("Försök igen.\n");
				fel++;
			}
		}
	}
	printf("Du hade %i rätt av möjliga %i.\n",ratt,tries);
	return(0);
}