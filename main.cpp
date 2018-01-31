/*

At this point, this code only takes V.xyz files ordered from zinitial to zfinal. Later, when it is 3D, ideally we would have a small code to order as (000),(001),(010),(011),(100),(101),(110),(111).

The code recognizes automatically dz, zi, zf.

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
int nz,ic,icount,i,j;
double zi,zf,dz, pos, potential;
string line;

ifstream Vxyz;

Vxyz.open("V.xyz");

if (!Vxyz.is_open()) {
   cout<< "ERROR opening file";}
   else {
   Vxyz>> zi;
   icount=0; 
 	while (!Vxyz.eof()) {
		getline(Vxyz,line);
		icount++;
		cout << line << "\n";
	}}
 
 	icount--;
	double pot[icount][2];
	
	Vxyz.clear();
	Vxyz.seekg(0,ios::beg);
	
	for(i=0; i<icount; i++){
		for(j=0; j<2; j++){
		
		Vxyz >> pot[i][j];
		cout << pot[i][j] << "\n";
		}
	}
	
	
 
zf=pot[icount-1][0];
zi=pot[0][0];
dz=pot[1][0]-pot[0][0];



return 0;
 
}                                               //termina o main
