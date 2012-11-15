/*
Copyright (c) 2012 Gustav Svalander, Chalmers course LEU480, Lindholmen, Göteborg

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

#include "uppg1_3.h"

int main(void){

	printf("+-----------------------------------+\n");
	printf("| Välkommen till en krypteringslåda |\n|  med en linjär och publik nyckel  |\n");
	printf("+-----------------------------------+\n");
	while(1){
		char buff[READ_BUFF];
		char *input;
		printf("Ange text att kryptera:");
		input = fgets(buff, READ_BUFF, stdin);
		if (input == NULL) {
			printf("Något blev fel. Pröva igen.\n");
		}else if(strlen(input)==1 || input[0]==EOF){
			printf("Hej då!\n");
			break;
		} else {
			size_t in_size=strlen(input)-1;
    		if(input[in_size]=='\n'){
    			input[in_size]='\0';
    		}
    		size_t i; int rot=0;
			for(i=0; i<=in_size; i++){
				if(i>in_size) break;
				// cast to int
				rot=input[i]-'\0';
				if (rot >= 97 && rot <= 122){
					// capital letters
					//printf("C%u ",rot);
					input[i] = ((rot-71+13)%26+97);
				}else if(rot >= 65 && rot <= 90){
					// small letters
					//printf("S%u ",rot);
					input[i] = ((rot-39+13)%26+65);
				}
			}
			printf("Din inmattningstext omvandlades till: %s\n", input);
		}
	}
	return(0);
}