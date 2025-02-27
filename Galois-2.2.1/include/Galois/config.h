#ifndef CONFIG_H
#define CONFIG_H

#define GALOIS_VERSION_MAJOR 2
#define GALOIS_VERSION_MINOR 2
#define GALOIS_VERSION_PATCH 1
#define GALOIS_COPYRIGHT_YEAR_STRING "2014"
#define GALOIS_VERSION_STRING "2.2.1"
#define HAVE_LE64TOH
#define HAVE_LE32TOH
#define HAVE_ENDIAN_H
/* #undef HAVE_BIG_ENDIAN */
#define HAVE_CXX11_UNIFORM_INT_DISTRIBUTION
#define HAVE_CXX11_UNIFORM_REAL_DISTRIBUTION
/* #undef HAVE_CXX11_CHRONO */
#define HAVE_CXX11_ALIGNOF
/* #undef GALOIS_USE_SVNVERSION */
#define GALOIS_USE_NUMA
/* #undef GALOIS_USE_NUMA_OLD */
/* #undef GALOIS_USE_VTUNE */
/* #undef GALOIS_USE_PAPI */
/* #undef GALOIS_USE_HTM */
/* #undef GALOIS_USE_SEQ_ONLY */
/* #undef GALOIS_USE_CXX11_COMPAT */
#define GALOIS_USE_LONGJMP

#ifdef GALOIS_USE_CXX11_COMPAT
#define GALOIS_CXX11_STD_HEADER(name) <Galois/c++11-compat/name.h>
#else
#define GALOIS_CXX11_STD_HEADER(name) <name>
#endif

#endif
