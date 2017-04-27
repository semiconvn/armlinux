/*
TODO: parsing configuration info from the text file
format: KEY=VALUE
*/

int cfg_parserConfigFile(const char* cfgFilePath, struct kbCfgStruct* config)
{	
	char buff[40] = {0};
	int rc = -1;
	/*Open configuration file*/
	int fd = open(cfgFilePath, O_RD);
	if(fd < 0)
	{
		printf("cannot open file\n");
		goto exit;
	}
	/* Parsing parameters from each line*/
	fget(fd, buff, sizeof(buff))
	
exit:
	return rc;	
}