
#ifndef FRUITSALAD_EXPORT_H
#define FRUITSALAD_EXPORT_H

#ifndef FRUITSALAD_EXPORT
#  ifdef fruitsalad_EXPORTS
      /* We are building this library */
#    define FRUITSALAD_EXPORT __declspec(dllexport)
#  else
      /* We are using this library */
#    define FRUITSALAD_EXPORT __declspec(dllimport)
#  endif
#endif

#endif
