
#ifndef BOWLS_EXPORT_H
#define BOWLS_EXPORT_H

#ifndef BOWLS_EXPORT
#  ifdef bowls_EXPORTS
      /* We are building this library */
#    define BOWLS_EXPORT __declspec(dllexport)
#  else
      /* We are using this library */
#    define BOWLS_EXPORT __declspec(dllimport)
#  endif
#endif

#endif
