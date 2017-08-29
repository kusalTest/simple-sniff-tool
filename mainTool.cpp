#include <stdio.h>
#include <pcap.h> /*use linux distribution install libpcap0.8-dev*/

int main(int argc, char *argv[])
{
	char *dev = argv[1];

	printf("Device: %s\n", dev);
	return(0);
}