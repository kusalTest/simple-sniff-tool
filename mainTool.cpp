#include <stdio.h>
#include <pcap.h> /*use linux distribution install libpcap0.8-dev*/

int main(int argc, char *argv[])
{
	char *dev = argv[1]; /* The device to snif on */
	char *dev, errbuf[PCAP_ERRBUF_SIZE];	/* Error string */
	pcap_t *handle;		/* Session handle */

	//dev = pcap_lookupdev(errbuf);
	if (dev == NULL)
	{
		fprintf(stderr, "Couldn't find default device: %s\n", errbuf);
		return(2);
	}

	printf("Device: %s\n", dev);
	return(0);
}