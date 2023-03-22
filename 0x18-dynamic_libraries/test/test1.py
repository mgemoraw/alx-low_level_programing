import ctypes

clibrary = ctypes.CDLL("./clib.so")

clibrary.main()
