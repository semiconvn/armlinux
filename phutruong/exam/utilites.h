

typedef struct 
{
	uint8_t msg_type;
	void*   data_ptr;
} itc_msg_t;

typedef enum 
{
	
} ITC_DEST_TARGET_NAME_T;
/*Interthread communication apis*/
int  itc_send_msg(ITC_DEST_TARGET_NAME_T dst, itc_msg_t*  send_msg, uint32_t timeout);
int  itc_recv_msg(ITC_DEST_TARGET_NAME_T dst, itc_msg_t*  recv_msg, uint32_t timeout);

int  util_keyToFreq(uint8_t inKeyVal);
 