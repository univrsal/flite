target_sources(flite PRIVATE
    cst_alloc.c
    cst_args.c
    cst_endian.c
    cst_error.c
    cst_features.c
    cst_file_stdio.c
    cst_string.c
    cst_wchar.c
    cst_tokenstream.c
    cst_val.c
    cst_features.c 
    cst_endian.c
    cst_socket.c
    cst_val_const.c
    cst_val_user.c
    cst_args.c
    cst_url.c)

if (MSVC)
    target_sources(flite PRIVATE
        cst_mmap_win32.c)
else()
    target_sources(flite PRIVATE
        cst_mmap_posix.c)
endif()