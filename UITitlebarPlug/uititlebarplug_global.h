#ifndef UITITLEBARPLUG_GLOBAL_H
#define UITITLEBARPLUG_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(UITITLEBARPLUG_LIBRARY)
#  define UITITLEBARPLUGSHARED_EXPORT Q_DECL_EXPORT
#else
#  define UITITLEBARPLUGSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // UITITLEBARPLUG_GLOBAL_H