#pragma once

#include <QtCore/qglobal.h>

#ifndef BUILD_STATIC
# if defined(QTDEMO_LIB)
#  define QTDEMO_EXPORT Q_DECL_EXPORT
# else
#  define QTDEMO_EXPORT Q_DECL_IMPORT
# endif
#else
# define QTDEMO_EXPORT
#endif
