#include "goSH.h"

int main(
	int    argc,
	char * argv[  ]
) {
	int r= 0;

	r= yzxSetup(  );

	( r ) ?	printf( "Setup failed\n" )
	      : printf( "App begins\n" );

	while( !r ) {
	    //
	    r= yzxLoop(  );
	}

	printf( "App concludes\n" );

	r= yzxShutdown(  );

	( r ) ?	printf( "Shutdown failed\n" )
	      : printf( "App done\n" );

	return( r );
}

