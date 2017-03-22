#include <stdio.h>
#include <stdlib.h>
#include <flexsc.h>

int main(void)
{
	if (flexsc_register() < 0) {
		fprintf(stderr, "flexsc_register: failed\n");
		exit(1);
	}

	if (flexsc_wait() < 0) {
		fprintf(stderr, "flexsc_wait: failed\n");
		exit(1);
	}

	return 0;
}
