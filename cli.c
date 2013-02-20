#include "okAPI.h"

//! \brief CLI prototyping
#define _CLI(n, f, b, u) int f ( int argc, char *argv[  ] );
#include "_cli.h"
_CLI("", NoClif, "", "")
#undef _CLI

//! \brief CLI array definition
#define _CLI(n, f, b, u) { n, f, b, u },
const yzxCLI_t all_cli[  ]= {
#include "_cli.h"
	_CLI(0, 0, 0, 0)
};
#undef _CLI

