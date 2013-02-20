#include "okAPI.h"

//! \brief COOL prototyping
#define _COOL(b, u, a, d) \
int u ( void ); \
int a ( void ); \
int d ( void );
#include "_cool.h"
_COOL("", yzxNoFun, yzxNoFun, yzxNoFun)
#undef _COOL

//! \brief COOL array definition
#define _COOL(b, u, a, d) { b, u, a, d },
const yzxCOOL_s all_cool[  ]= {
#include "_cool.h"
	_COOL(0, yzxNoFun, yzxNoFun, yzxNoFun)
};
#undef _COOL

int yzxSomeFun(
	void
) {
	return( 1 );
}

