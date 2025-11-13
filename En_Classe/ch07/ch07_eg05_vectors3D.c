#include <stdio.h>
#include <math.h>
#include "ch07_eg05_vectors3D.h"

int main(void)
{
    // Déclaration et initialisation des deux vecteurs 3D
    Vec3D vecU = {3.9, -1.3, 4.5};
    Vec3D vecV = {0.2, 5.8, -3.0};
    
    printf("Ecris les vecteurs a l'ecran:\n");
    printVec3D(vecU);
    printVec3D(vecV);

    printf("\nAddition des vecteurs:\n");
    printVec3D(add(vecU, vecV));

    printf("\nNorme des vecteurs:\n");
    printf("vecU: %.2f\n", norm(vecU));
    printf("vecV: %.2f\n", norm(vecV));

    printf("\nProduit scalaire des vecteurs:\n");
    printf("%.2f\n", dotProduct(vecU, vecV));

    printf("\nVecteurs unitaires des vecteurs:\n");
    printVec3D(normalize(vecU));
    printVec3D(normalize(vecV));
     
    return 0;
}

void printVec3D(Vec3D vec)
{
    //Affichage des différentes composantes d'un vecteur vec
    printf("vec: <%.2f,%.2f,%.2f>\n", vec.i, vec.j, vec.k);
}

Vec3D add(Vec3D a, Vec3D b)
{
    // déclaration et initialisation d'un vecteur
    Vec3D additionResultVector = {0.0, 0.0, 0.0};

    // Addition des composantes correspondantes des deux vecteurs
    // $$ \vec{a} + \vec{b} = [a_i + b_i; a_j + b_j; a_k + b_k] $$
    additionResultVector.i = a.i + b.i;
    additionResultVector.j = a.j + b.j;
    additionResultVector.k = a.k + b.k;

    // retour du vecteur résultant
    return additionResultVector;
}

// Calule la norme d'un vecteur 3D
float norm(Vec3D v)
{
    // déclaration et initialisation d'une variable
    float normOfVector = 0.0f;

    // Faire la norme du vecteur : $$ \sqrt{i^2+j^2+k^2} $$
    normOfVector = sqrt(pow(v.i, 2.0) + pow(v.j, 2.0) + pow(v.k, 2.0));
    
    // retourner la norme du vecteur
    return normOfVector;
}

// Calule le produit scalaire entre deux vecteurs 3D
float dotProduct(Vec3D a, Vec3D b)
{
    // déclaration et initialisation d'une variable
    float dotProductOfVectors = 0.0f;

    // Faire le produit scalaire : $$ \vec{a} \cdot \vec{b} = a_i * b_i + a_j * b_j + a_k * b_k $$
    dotProductOfVectors = (a.i * b.i) + (a.j * b.j) + (a.k * b.k);
    
    // retourner le résultat du produit scalaire
    return dotProductOfVectors;
}

// Créer un vecteur unitaire à partir d'un vecteur 3D
Vec3D normalize(Vec3D v)
{
    // déclaration et initialisation d'un vecteur résultat
    Vec3D normalizeResultVector = {0.0, 0.0, 0.0};

    // Calcul de la norme du vecteur
    float normOfVector = norm(v);

    // $$ \vec{v} = \frac{\vec{v}}{||\vec{v}||} = [\frac{v_i}{||\vec{v}||}; \frac{v_j}{||\vec{v}||}; \frac{v_k}{||\vec{v}||}] $$

    normalizeResultVector.i = v.i/normOfVector;
    normalizeResultVector.j = v.j/normOfVector;
    normalizeResultVector.k = v.k/normOfVector;

    // retourner le vecteur unitaire
    return normalizeResultVector;
}
