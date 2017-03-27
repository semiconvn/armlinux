

typedef struct 
{
	uint8_t msg_type;
	void*   data_ptr;
} itc_msg_t;

/*Interthread communication apis*/
int  itc_send_msg(itc_msg_t*  send_msg, uint32_t timeout);
int  itc_recv_msg(itc_msg_t*  recv_msg, uint32_t timeout);

int  util_keyToFreq(uint8_t inKeyVal);
 