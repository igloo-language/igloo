
#include "nuitka/prelude.h"
#include "structseq.h"

// Sentinel PyObject to be used for all our call iterator endings. It will
// become a PyCObject pointing to NULL. It's address is unique, and that's
// enough for us to use it as sentinel value.
PyObject *_sentinel_value = NULL;

PyObject *Nuitka_dunder_compiled_value = NULL;

PyObject *const_int_0;
PyObject *const_str_dot;
PyObject *const_float_0_0;
PyObject *const_int_pos_1;
PyObject *const_str_empty;
PyObject *const_dict_empty;
PyObject *const_bytes_empty;
PyObject *const_tuple_empty;
PyObject *const_str_plain_rb;
PyObject *const_str_plain_end;
PyObject *const_str_plain_int;
PyObject *const_str_plain_len;
PyObject *const_str_plain_sum;
PyObject *const_str_plain_file;
PyObject *const_str_plain_iter;
PyObject *const_str_plain_name;
PyObject *const_str_plain_open;
PyObject *const_str_plain_read;
PyObject *const_str_plain_repr;
PyObject *const_str_plain_send;
PyObject *const_str_plain_site;
PyObject *const_str_plain_type;
PyObject *const_float_minus_0_0;
PyObject *const_str_plain_bytes;
PyObject *const_str_plain_close;
PyObject *const_str_plain_level;
PyObject *const_str_plain_print;
PyObject *const_str_plain_range;
PyObject *const_str_plain_throw;
PyObject *const_str_plain_types;
PyObject *const_str_plain_format;
PyObject *const_str_plain_locals;
PyObject *const_str_plain___all__;
PyObject *const_str_plain___cmp__;
PyObject *const_str_plain___doc__;
PyObject *const_str_plain_compile;
PyObject *const_str_plain_globals;
PyObject *const_str_plain_inspect;
PyObject *const_str_plain___dict__;
PyObject *const_str_plain___exit__;
PyObject *const_str_plain___file__;
PyObject *const_str_plain___iter__;
PyObject *const_str_plain___main__;
PyObject *const_str_plain___name__;
PyObject *const_str_plain___path__;
PyObject *const_str_plain___spec__;
PyObject *const_str_plain_fromlist;
PyObject *const_str_plain___class__;
PyObject *const_str_plain___enter__;
PyObject *const_str_plain_bytearray;
PyObject *const_str_plain___cached__;
PyObject *const_str_plain___import__;
PyObject *const_str_plain___loader__;
PyObject *const_str_plain___module__;
PyObject *const_str_plain___package__;
PyObject *const_str_plain_classmethod;
PyObject *const_str_plain___builtins__;
PyObject *const_str_plain___compiled__;
PyObject *const_str_plain_staticmethod;
PyObject *const_str_plain___metaclass__;
PyObject *const_str_plain__initializing;
PyObject *const_str_plain___class_getitem__;
PyObject *const_str_plain_submodule_search_locations;
PyObject *const_str_digest_a829f0abb6f699b24dd5cb5fb65a7128;
PyObject *const_str_digest_e39df84140765d21acb98c3411f053fe;

static void _createGlobalConstants( void )
{
    NUITKA_MAY_BE_UNUSED PyObject *exception_type, *exception_value;
    NUITKA_MAY_BE_UNUSED PyTracebackObject *exception_tb;

#ifdef _MSC_VER
    // Prevent unused warnings in case of simple programs, the attribute
    // NUITKA_MAY_BE_UNUSED doesn't work for MSVC.
    (void *)exception_type; (void *)exception_value; (void *)exception_tb;
#endif

    const_int_0 = PyLong_FromUnsignedLong( 0ul );
    const_str_dot = UNSTREAM_STRING_ASCII( &constant_bin[ 344 ], 1, 0 );
    const_float_0_0 = UNSTREAM_FLOAT( &constant_bin[ 385 ] );
    const_int_pos_1 = PyLong_FromUnsignedLong( 1ul );
    const_str_empty = UNSTREAM_STRING_ASCII( &constant_bin[ 0 ], 0, 0 );
    const_dict_empty = _PyDict_NewPresized( 0 );
    assert( PyDict_Size( const_dict_empty ) == 0 );
    const_bytes_empty = UNSTREAM_BYTES( &constant_bin[ 0 ], 0 );
    const_tuple_empty = PyTuple_New( 0 );
    const_str_plain_rb = UNSTREAM_STRING_ASCII( &constant_bin[ 52 ], 2, 1 );
    const_str_plain_end = UNSTREAM_STRING_ASCII( &constant_bin[ 393 ], 3, 1 );
    const_str_plain_int = UNSTREAM_STRING_ASCII( &constant_bin[ 145 ], 3, 1 );
    const_str_plain_len = UNSTREAM_STRING_ASCII( &constant_bin[ 38 ], 3, 1 );
    const_str_plain_sum = UNSTREAM_STRING_ASCII( &constant_bin[ 396 ], 3, 1 );
    const_str_plain_file = UNSTREAM_STRING_ASCII( &constant_bin[ 36 ], 4, 1 );
    const_str_plain_iter = UNSTREAM_STRING_ASCII( &constant_bin[ 399 ], 4, 1 );
    const_str_plain_name = UNSTREAM_STRING_ASCII( &constant_bin[ 40 ], 4, 1 );
    const_str_plain_open = UNSTREAM_STRING_ASCII( &constant_bin[ 403 ], 4, 1 );
    const_str_plain_read = UNSTREAM_STRING_ASCII( &constant_bin[ 130 ], 4, 1 );
    const_str_plain_repr = UNSTREAM_STRING_ASCII( &constant_bin[ 407 ], 4, 1 );
    const_str_plain_send = UNSTREAM_STRING_ASCII( &constant_bin[ 411 ], 4, 1 );
    const_str_plain_site = UNSTREAM_STRING_ASCII( &constant_bin[ 415 ], 4, 1 );
    const_str_plain_type = UNSTREAM_STRING_ASCII( &constant_bin[ 419 ], 4, 1 );
    const_float_minus_0_0 = UNSTREAM_FLOAT( &constant_bin[ 423 ] );
    const_str_plain_bytes = UNSTREAM_STRING_ASCII( &constant_bin[ 431 ], 5, 1 );
    const_str_plain_close = UNSTREAM_STRING_ASCII( &constant_bin[ 436 ], 5, 1 );
    const_str_plain_level = UNSTREAM_STRING_ASCII( &constant_bin[ 441 ], 5, 1 );
    const_str_plain_print = UNSTREAM_STRING_ASCII( &constant_bin[ 446 ], 5, 1 );
    const_str_plain_range = UNSTREAM_STRING_ASCII( &constant_bin[ 451 ], 5, 1 );
    const_str_plain_throw = UNSTREAM_STRING_ASCII( &constant_bin[ 456 ], 5, 1 );
    const_str_plain_types = UNSTREAM_STRING_ASCII( &constant_bin[ 461 ], 5, 1 );
    const_str_plain_format = UNSTREAM_STRING_ASCII( &constant_bin[ 466 ], 6, 1 );
    const_str_plain_locals = UNSTREAM_STRING_ASCII( &constant_bin[ 472 ], 6, 1 );
    const_str_plain___all__ = UNSTREAM_STRING_ASCII( &constant_bin[ 478 ], 7, 1 );
    const_str_plain___cmp__ = UNSTREAM_STRING_ASCII( &constant_bin[ 485 ], 7, 1 );
    const_str_plain___doc__ = UNSTREAM_STRING_ASCII( &constant_bin[ 492 ], 7, 1 );
    const_str_plain_compile = UNSTREAM_STRING_ASCII( &constant_bin[ 499 ], 7, 1 );
    const_str_plain_globals = UNSTREAM_STRING_ASCII( &constant_bin[ 506 ], 7, 1 );
    const_str_plain_inspect = UNSTREAM_STRING_ASCII( &constant_bin[ 513 ], 7, 1 );
    const_str_plain___dict__ = UNSTREAM_STRING_ASCII( &constant_bin[ 520 ], 8, 1 );
    const_str_plain___exit__ = UNSTREAM_STRING_ASCII( &constant_bin[ 528 ], 8, 1 );
    const_str_plain___file__ = UNSTREAM_STRING_ASCII( &constant_bin[ 536 ], 8, 1 );
    const_str_plain___iter__ = UNSTREAM_STRING_ASCII( &constant_bin[ 544 ], 8, 1 );
    const_str_plain___main__ = UNSTREAM_STRING_ASCII( &constant_bin[ 336 ], 8, 1 );
    const_str_plain___name__ = UNSTREAM_STRING_ASCII( &constant_bin[ 552 ], 8, 1 );
    const_str_plain___path__ = UNSTREAM_STRING_ASCII( &constant_bin[ 560 ], 8, 1 );
    const_str_plain___spec__ = UNSTREAM_STRING_ASCII( &constant_bin[ 568 ], 8, 1 );
    const_str_plain_fromlist = UNSTREAM_STRING_ASCII( &constant_bin[ 576 ], 8, 1 );
    const_str_plain___class__ = UNSTREAM_STRING_ASCII( &constant_bin[ 584 ], 9, 1 );
    const_str_plain___enter__ = UNSTREAM_STRING_ASCII( &constant_bin[ 593 ], 9, 1 );
    const_str_plain_bytearray = UNSTREAM_STRING_ASCII( &constant_bin[ 602 ], 9, 1 );
    const_str_plain___cached__ = UNSTREAM_STRING_ASCII( &constant_bin[ 611 ], 10, 1 );
    const_str_plain___import__ = UNSTREAM_STRING_ASCII( &constant_bin[ 621 ], 10, 1 );
    const_str_plain___loader__ = UNSTREAM_STRING_ASCII( &constant_bin[ 631 ], 10, 1 );
    const_str_plain___module__ = UNSTREAM_STRING_ASCII( &constant_bin[ 641 ], 10, 1 );
    const_str_plain___package__ = UNSTREAM_STRING_ASCII( &constant_bin[ 651 ], 11, 1 );
    const_str_plain_classmethod = UNSTREAM_STRING_ASCII( &constant_bin[ 662 ], 11, 1 );
    const_str_plain___builtins__ = UNSTREAM_STRING_ASCII( &constant_bin[ 673 ], 12, 1 );
    const_str_plain___compiled__ = UNSTREAM_STRING_ASCII( &constant_bin[ 685 ], 12, 1 );
    const_str_plain_staticmethod = UNSTREAM_STRING_ASCII( &constant_bin[ 697 ], 12, 1 );
    const_str_plain___metaclass__ = UNSTREAM_STRING_ASCII( &constant_bin[ 709 ], 13, 1 );
    const_str_plain__initializing = UNSTREAM_STRING_ASCII( &constant_bin[ 722 ], 13, 1 );
    const_str_plain___class_getitem__ = UNSTREAM_STRING_ASCII( &constant_bin[ 735 ], 17, 1 );
    const_str_plain_submodule_search_locations = UNSTREAM_STRING_ASCII( &constant_bin[ 752 ], 26, 1 );
    const_str_digest_a829f0abb6f699b24dd5cb5fb65a7128 = UNSTREAM_STRING_ASCII( &constant_bin[ 778 ], 49, 0 );
    const_str_digest_e39df84140765d21acb98c3411f053fe = UNSTREAM_STRING_ASCII( &constant_bin[ 827 ], 63, 0 );

#if _NUITKA_EXE
    /* Set the "sys.executable" path to the original CPython executable. */
    PySys_SetObject(
        (char *)"executable",
        const_str_digest_e39df84140765d21acb98c3411f053fe
    );

#ifndef _NUITKA_STANDALONE
    /* Set the "sys.prefix" path to the original one. */
    PySys_SetObject(
        (char *)"prefix",
        const_str_digest_a829f0abb6f699b24dd5cb5fb65a7128
    );

    /* Set the "sys.prefix" path to the original one. */
    PySys_SetObject(
        (char *)"exec_prefix",
        const_str_digest_a829f0abb6f699b24dd5cb5fb65a7128
    );


#if PYTHON_VERSION >= 300
    /* Set the "sys.base_prefix" path to the original one. */
    PySys_SetObject(
        (char *)"base_prefix",
        const_str_digest_a829f0abb6f699b24dd5cb5fb65a7128
    );

    /* Set the "sys.exec_base_prefix" path to the original one. */
    PySys_SetObject(
        (char *)"base_exec_prefix",
        const_str_digest_a829f0abb6f699b24dd5cb5fb65a7128
    );

#endif
#endif
#endif

    static PyTypeObject Nuitka_VersionInfoType;

    // Same fields as "sys.version_info" except no serial number.
    static PyStructSequence_Field Nuitka_VersionInfoFields[] = {
        {(char *)"major", (char *)"Major release number"},
        {(char *)"minor", (char *)"Minor release number"},
        {(char *)"micro", (char *)"Micro release number"},
        {(char *)"releaselevel", (char *)"'alpha', 'beta', 'candidate', or 'release'"},
        {0}
    };

    static PyStructSequence_Desc Nuitka_VersionInfoDesc = {
        (char *)"__nuitka_version__",                                    /* name */
        (char *)"__compiled__\n\nVersion information as a named tuple.", /* doc */
        Nuitka_VersionInfoFields,                                        /* fields */
        4
    };

    PyStructSequence_InitType(&Nuitka_VersionInfoType, &Nuitka_VersionInfoDesc);

    Nuitka_dunder_compiled_value = PyStructSequence_New(&Nuitka_VersionInfoType);
    assert(Nuitka_dunder_compiled_value != NULL);

    PyStructSequence_SET_ITEM(Nuitka_dunder_compiled_value, 0, PyInt_FromLong(0));
    PyStructSequence_SET_ITEM(Nuitka_dunder_compiled_value, 1, PyInt_FromLong(6));
    PyStructSequence_SET_ITEM(Nuitka_dunder_compiled_value, 2, PyInt_FromLong(5));

#if PYTHON_VERSION < 300
    PyStructSequence_SET_ITEM(Nuitka_dunder_compiled_value, 3, PyString_FromString("release"));
#else
    PyStructSequence_SET_ITEM(Nuitka_dunder_compiled_value, 3, PyUnicode_FromString("release"));
#endif
    // Prevent users from creating the Nuitka version type object.
    Nuitka_VersionInfoType.tp_init = NULL;
    Nuitka_VersionInfoType.tp_new = NULL;


}

// In debug mode we can check that the constants were not tampered with in any
// given moment. We typically do it at program exit, but we can add extra calls
// for sanity.
#ifndef __NUITKA_NO_ASSERT__
void checkGlobalConstants( void )
{

}
#endif

void createGlobalConstants( void )
{
    if ( _sentinel_value == NULL )
    {
#if PYTHON_VERSION < 300
        _sentinel_value = PyCObject_FromVoidPtr( NULL, NULL );
#else
        // The NULL value is not allowed for a capsule, so use something else.
        _sentinel_value = PyCapsule_New( (void *)27, "sentinel", NULL );
#endif
        assert( _sentinel_value );

        _createGlobalConstants();
    }
}
