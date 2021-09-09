#include <stdio.h>
#include <stdint.h>
#include <arpa/inet.h>

int main(int argc, char *argv[]) {
	FILE *a = fopen(argv[1], "r");
	FILE *b = fopen(argv[2], "r");

	uint32_t p, q;
	fread(&p, 4, 1, a);
	fread(&q, 4, 1, b);

	p = ntohl(p);
	q = ntohl(q);

	printf("%u(0x%x) + %u(0x%x) = %u(0x%x)\n", p, p, q, q, p+q, p+q);

	fclose(a);
	fclose(b);
	return 0;
}
