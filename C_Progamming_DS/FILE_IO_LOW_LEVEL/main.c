#include"headers.h"
int main()
{
	printf("%s begin\n", __func__);
	int fd = 0;
	fd = open("out.txt", O_WRONLY| O_CREAT);
	if(-1 == fd)
	{
		perror("file could not be opened for writing\n");
		exit(EXIT_FAILURE);

	}
	printf("File opened successfully with fd value %d\n",fd);
	close(fd);
	printf("%s end\n", __func__);
	return 0;
}
