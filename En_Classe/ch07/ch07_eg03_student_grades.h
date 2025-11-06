#ifndef CH07_EG03_STUDENT_GRADES 
#define CH07_EG03_STUDENT_GRADES 

struct studentStruct 
{
    int ID;
    double notes[4];
    double moyenne;
};

void initStudents(struct studentStruct classRoom[]);
void addGradeByID(struct studentStruct myS[], int studentID, double grade);
void computeAverage(struct studentStruct myS[]);
void showClass(const struct studentStruct tab[], int n);
struct studentStruct findBest(const struct studentStruct tab[], int n);

#endif
