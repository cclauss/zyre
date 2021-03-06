################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
from __future__ import print_function
import os
import sys

import cffi
ffi = cffi.FFI()

try:
    # If LD_LIBRARY_PATH or your OSs equivalent is set, this is the only way to
    # load the library.  If we use find_library below, we get the wrong result.
    if os.name == 'posix':
        if sys.platform == 'darwin':
            libpath = 'libzyre.2.dylib'
        else:
            libpath = 'libzyre.so.2'
    elif os.name == 'nt':
        libpath = 'libzyre.dll'
    lib = ffi.dlopen(libpath)
except OSError:
    libpath = find_library("zyre")
    if not libpath:
        raise ImportError("Unable to find libzyre")
    lib = ffi.dlopen(libpath)

from zyre_cffi.cdefs import zyre_cdefs

for cdef in zyre_cdefs:
   ffi.cdef (cdef)
