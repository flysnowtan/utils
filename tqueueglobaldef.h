#define SHM_KEY  0x123456781
#define SEM_KEY  0x876543211
#define SHM_SIZE 10240

enum ERR_CODE
{
	QUEUE_OPER_OK = 0,
	ERR_QUEUE_FULL = -1001,
	ERR_QUEUE_EMPTY = -1002,
};

