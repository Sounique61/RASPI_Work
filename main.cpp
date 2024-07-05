#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "version.h"
#include "BIMDefines.h"
#include "BIMTestModuls.h"
#include "BIMFileOperation.h"



int main() {
    using namespace AutoVersion;
    char *ptrStrVersion;
    int nReturnValue;

    ptrStrVersion = (char *) malloc (64);
	strcpy(ptrStrVersion,FULLVERSION_STRING);
	printf ("Test RaspBerry Pi 3 : Matrice calculations \n Version : %s Build %4d\n\n",ptrStrVersion,BUILDS_COUNT);
    nReturnValue = BIM_Test_Matrix();
    nReturnValue = BIMTest_RungeKutta4();
    if (nReturnValue == BIM_RETURN_OK){
        printf ("Fertig ohner Fehler\n");
    }
    else{
        printf ("Fehler\n");
    }
	return BIM_RETURN_OK;
}
