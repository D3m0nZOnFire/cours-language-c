#ifndef CH07_EG05_VECTORS3D 
#define CH07_EG05_VECTORS3D 

//Déclaration du type Vec3D
typedef struct {
    double i;
    double j;
    double k;
} Vec3D;

// Déclaration
void printVec3D(Vec3D vec);
Vec3D add(Vec3D a, Vec3D b);
float norm(Vec3D v);
float dotProduct(Vec3D a, Vec3D b);
Vec3D normalize(Vec3D v);

#endif
