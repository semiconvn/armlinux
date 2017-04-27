

int main()
{
	/* Start all driver*/
    drv_init();
	/* Reading configuration from config file*/
    cfg_parserConfigFile();
	/*Start all neccessary thread*/
	mainprocess_init();
	/*WHile loop*/
	mainprocess_run();

	mainprocess_destroy();
}