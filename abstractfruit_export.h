
#ifndef ABSTRACTFRUIT_EXPORT_H
#define ABSTRACTFRUIT_EXPORT_H

#ifndef ABSTRACTFRUIT_EXPORT
#  ifdef abstractfruit_EXPORTS
      /* We are building this library */
#    define ABSTRACTFRUIT_EXPORT __declspec(dllexport)
#  else
      /* We are using this library */
#    define ABSTRACTFRUIT_EXPORT __declspec(dllimport)
#  endif
#endif

#endif
