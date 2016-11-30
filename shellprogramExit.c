/*shellprogram.c written by adam pluth based on www.exploit-db.com/docs/2103.pdf
*/



char code[] = "\x31\xdb\x31\xc0\xb0\x01\xcd\x80";
int main(int argc, char **argv){
	int (*exeshell)();
	exeshell = (int (*)()) code;
	(int)(*exeshell)();
}

