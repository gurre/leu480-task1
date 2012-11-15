/*
Copyright (c) 2012 Gustav Svalander, Chalmers course LEU480, Lindholmen, Göteborg

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

#include "uppg3.h"

int main(void){
	float tal1, tal2, res;
	char op = '\0', err=0;

	while(1){
		err=0;
		printf("Ange första talet> ");
		if(!scanf("%f", &tal1)){
			printf("Fel angivet, måste vara tal. Avslutar\n");
			err=1;
		}

		printf("Ange operation> ");
		op = getchar();
		while( (op = getchar()) && !(op=='+' || op=='-' || op=='*' || op=='/') );

		printf("Ange det andra talet> ");
		if(!scanf("%f", &tal2)){
			printf("Fel angivet, måste vara tal. Avslutar\n");
			err=1;
		}

		if(tal1!=0 && tal2!=0 && op != '\0'){
			res=0.0;
			if(op == '+'){
				res=tal1+tal2;
			}
			else if(op == '-'){
				res=tal1-tal2;
			}
			else if(op == '*'){
				res=tal1*tal2;
			}
			else if(op == '/'){
				if(tal2==0.0){
					printf("Kan ej dela med noll.\n");
					err=1;
				}else{
					res=tal1/tal2;
				}
			}
			if(err==0){
				printf("%.5f %c %.5f = %.5f\n",tal1, op, tal2, res);
			}
		}
	}
	return(0);
}