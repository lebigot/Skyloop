/*struct skyloop_input                            // the input of skyloop
{
        float *eTD[NIFO];
        short *ml[NIFO];
		short *mm;								// Lsky
        size_t *V, *V4;
        float *T_En, *T_Es;
		int *le;		
};*/
#define MaxPixel 10
struct skyloop_output                           // the output of skyloop
{
	float *output;				// pointer of rNRG.data	V4max and aa
};
struct other                                    //the variable that not use in GPU
{
	float *eTD;
	short *ml_mm;
	float T_En, T_Es, TH;	// same
	int le, lag;	// le, lag same
	int stream;	// indicate which stream
	size_t id[MaxPixel]; // nIFO same
	size_t k[MaxPixel];
	size_t V[MaxPixel];
	size_t V4[MaxPixel];
	size_t tsize[MaxPixel];
	size_t count;			// result of each stream
};
struct pre_data
{
    struct other other_data;
};
struct post_data
{
        struct skyloop_output output;
        struct other other_data;
};