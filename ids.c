#include <stdio.h>
#include <pcap.h>

/* Steps to using a pcap sniffer
1. choose interface
2. initialize pcap
3. (optional) compile filter ruleset
4. enter execution lopo
5. close and complete */
int main(int argc, char *argv[])
{
	char *dev, errbuf[PCAP_ERRBUF_SIZE]; 
	//Step 1
	if(argc == 2) 
		dev = argv[1];
	else
		dev = pcap_lookupdev(errbuf);
	if (dev == NULL) {
		fprintf(stderr, "Couldn't find default device: %s\n", errbuf);
		return(2);
	}
	printf("Device: %s\n", dev);
	return 0;
}
	
		
