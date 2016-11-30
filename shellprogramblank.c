/*shellprogram.c written by adam pluth based on www.exploit-db.com/docs/2103.pdf
*/



char code[] = "";
int main(int argc, char **argv){
	int (*exeshell)();
	exeshell = (int (*)()) code;
	(int)(*exeshell)();
}

