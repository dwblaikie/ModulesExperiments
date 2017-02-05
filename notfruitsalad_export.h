
#ifndef NOTFRUITSALAD_EXPORT_H
#define NOTFRUITSALAD_EXPORT_H

#ifndef NOTFRUITSALAD_EXPORT
#  ifdef notfruitsalad_EXPORTS
      /* We are building this library */
#    define NOTFRUITSALAD_EXPORT __declspec(dllexport)
#  else
      /* We are using this library */
#    define NOTFRUITSALAD_EXPORT __declspec(dllimport)
#  endif
#endif

#endif
