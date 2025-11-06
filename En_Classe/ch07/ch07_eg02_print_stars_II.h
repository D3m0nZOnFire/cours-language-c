#ifndef CH07_EG02_PRINT_STARS_II 
#define CH07_EG02_PRINT_STARS_II 

struct starStruct {
    int x;
    int y;
};

void setStar(struct starStruct starTab[]);
void initSky(char skyTab[], struct starStruct starTab[]);
void showSky(char skyTab[]);

#endif