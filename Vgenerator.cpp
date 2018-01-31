/*

Generates the potential V(z) in a V.xyz output file.

*/



#include <string.h>
#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
#include <fstream>

using namespace std;


int main()
{
int nz=100,i,j;
double zi=-5.0,zf=5.0,z, dz;

dz=(zf-zi)/nz;

ofstream Vxyz;

Vxyz.open("V.xyz");

if (!Vxyz.is_open()) {
   cout<< "ERROR opening file";}
   else {
   for(i=0;i<nz;i++){
   z=zi+i*dz;
   Vxyz<<z<<"\t"<<3*z*z<<"\n";
   }}
return 0;
 
}                                               //termina o main
