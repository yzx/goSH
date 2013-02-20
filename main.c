#include "goSH.h"

#ifndef HPLAT
#error Host Platform must be defined
#endif

int main(
	int    argc,
	char * argv[  ]
) {
	int r= 0;

	r= yzxSetup(  );

	( r ) ?	yzxPRINTF( "Setup failed\n" )
	      : yzxPRINTF( "App begins\n" );

	yzxUtil(  );

	while( !r ) {
	    //
	    r= yzxLoop(  );
	}

	yzxPRINTF( "App concludes on %s\n", STR(HPLAT) );

	r= yzxShutdown(  );

	( r ) ?	yzxPRINTF( "Shutdown failed\n" )
	      : yzxPRINTF( "App done\n" );

	return( r );
}

