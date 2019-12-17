/* Generated code for Python module '__main__'
 * created by Nuitka version 0.6.5
 *
 * This code is in part copyright 2019 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "__helpers.h"

/* The "_module___main__" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module___main__;
PyDictObject *moduledict___main__;

/* The declarations of module constants used, if any. */
static PyObject *const_str_digest_f270171adad5f88991fbb7fb4754c699;
static PyObject *const_str_plain_ast;
static PyObject *const_str_plain_run;
static PyObject *const_str_plain_store_true;
static PyObject *const_tuple_str_plain_filename_tuple;
static PyObject *const_str_plain_action;
static PyObject *const_str_plain_verbose;
static PyObject *const_str_plain_filename;
static PyObject *const_str_plain_False;
static PyObject *const_str_plain_str;
static PyObject *const_str_plain_program;
static PyObject *const_dict_a25931111ca1f083bcf7743c0178861d;
static PyObject *const_str_plain_Program;
static PyObject *const_tuple_false_tuple;
static PyObject *const_tuple_6e0ce2585290961afef9353bf934255f_tuple;
static PyObject *const_str_plain_parse_args;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain_read_file;
static PyObject *const_str_plain_igloo_interpreter;
static PyObject *const_str_plain_args;
extern PyObject *const_str_plain___exit__;
static PyObject *const_str_plain_statements;
static PyObject *const_str_plain_path;
extern PyObject *const_int_0;
static PyObject *const_str_digest_68e779b074842129991baeb4e329e7d3;
static PyObject *const_str_plain_add_argument;
static PyObject *const_str_digest_8d9a7968bdcf97bf89ecd9cc70ce5a60;
extern PyObject *const_str_plain_site;
static PyObject *const_str_plain_abspath;
static PyObject *const_str_plain_text;
static PyObject *const_str_plain_ArgumentParser;
static PyObject *const_str_digest_1ec530d4327a660be1869799f059638f;
static PyObject *const_str_plain_os;
static PyObject *const_str_angle_module;
static PyObject *const_dict_855f35080a41ddb1e81e106853cad5fd;
static PyObject *const_str_plain_None;
extern PyObject *const_tuple_empty;
static PyObject *const_tuple_fdd4e6c8e6fc8e3da943ece0ca6e9475_tuple;
static PyObject *const_str_plain_argparse;
extern PyObject *const_str_plain___enter__;
static PyObject *const_str_plain_abs_path;
static PyObject *const_str_digest_a40c31ed59c7e8923348cb003daeaee4;
extern PyObject *const_str_plain___main__;
extern PyObject *const_str_plain_read;
extern PyObject *const_str_plain_type;
static PyObject *const_str_plain_r;
static PyObject *const_str_plain___annotations__;
static PyObject *const_str_plain_errors;
static PyObject *const_tuple_none_none_none_tuple;
static PyObject *const_str_plain_help;
static PyObject *const_dict_d7afdad43e65f99a3b06bd16efaf79e2;
static PyObject *const_str_digest_c09391c06c258dbac2a0d577ffcfae75;
extern PyObject *const_str_plain_file;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_plain_description;
static PyObject *const_str_plain_run_program;
static PyObject *const_str_plain_parser;
static PyObject *const_tuple_329bf9b332839e98f8f0feb2dc91a043_tuple;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_f270171adad5f88991fbb7fb4754c699 = UNSTREAM_STRING_ASCII( &constant_bin[ 0 ], 20, 0 );
    const_str_plain_ast = UNSTREAM_STRING_ASCII( &constant_bin[ 20 ], 3, 1 );
    const_str_plain_run = UNSTREAM_STRING_ASCII( &constant_bin[ 23 ], 3, 1 );
    const_str_plain_store_true = UNSTREAM_STRING_ASCII( &constant_bin[ 26 ], 10, 1 );
    const_tuple_str_plain_filename_tuple = PyTuple_New( 1 );
    const_str_plain_filename = UNSTREAM_STRING_ASCII( &constant_bin[ 36 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_filename_tuple, 0, const_str_plain_filename ); Py_INCREF( const_str_plain_filename );
    const_str_plain_action = UNSTREAM_STRING_ASCII( &constant_bin[ 44 ], 6, 1 );
    const_str_plain_verbose = UNSTREAM_STRING_ASCII( &constant_bin[ 50 ], 7, 1 );
    const_str_plain_False = UNSTREAM_STRING_ASCII( &constant_bin[ 57 ], 5, 1 );
    const_str_plain_str = UNSTREAM_STRING_ASCII( &constant_bin[ 21 ], 3, 1 );
    const_str_plain_program = UNSTREAM_STRING_ASCII( &constant_bin[ 62 ], 7, 1 );
    const_dict_a25931111ca1f083bcf7743c0178861d = _PyDict_NewPresized( 1 );
    const_str_plain_description = UNSTREAM_STRING_ASCII( &constant_bin[ 69 ], 11, 1 );
    const_str_digest_1ec530d4327a660be1869799f059638f = UNSTREAM_STRING_ASCII( &constant_bin[ 80 ], 22, 0 );
    PyDict_SetItem( const_dict_a25931111ca1f083bcf7743c0178861d, const_str_plain_description, const_str_digest_1ec530d4327a660be1869799f059638f );
    assert( PyDict_Size( const_dict_a25931111ca1f083bcf7743c0178861d ) == 1 );
    const_str_plain_Program = UNSTREAM_STRING_ASCII( &constant_bin[ 102 ], 7, 1 );
    const_tuple_false_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_false_tuple, 0, Py_False ); Py_INCREF( Py_False );
    const_tuple_6e0ce2585290961afef9353bf934255f_tuple = PyTuple_New( 2 );
    const_str_digest_68e779b074842129991baeb4e329e7d3 = UNSTREAM_STRING_ASCII( &constant_bin[ 109 ], 2, 0 );
    PyTuple_SET_ITEM( const_tuple_6e0ce2585290961afef9353bf934255f_tuple, 0, const_str_digest_68e779b074842129991baeb4e329e7d3 ); Py_INCREF( const_str_digest_68e779b074842129991baeb4e329e7d3 );
    const_str_digest_8d9a7968bdcf97bf89ecd9cc70ce5a60 = UNSTREAM_STRING_ASCII( &constant_bin[ 111 ], 9, 0 );
    PyTuple_SET_ITEM( const_tuple_6e0ce2585290961afef9353bf934255f_tuple, 1, const_str_digest_8d9a7968bdcf97bf89ecd9cc70ce5a60 ); Py_INCREF( const_str_digest_8d9a7968bdcf97bf89ecd9cc70ce5a60 );
    const_str_plain_parse_args = UNSTREAM_STRING_ASCII( &constant_bin[ 120 ], 10, 1 );
    const_str_plain_read_file = UNSTREAM_STRING_ASCII( &constant_bin[ 130 ], 9, 1 );
    const_str_plain_igloo_interpreter = UNSTREAM_STRING_ASCII( &constant_bin[ 139 ], 17, 1 );
    const_str_plain_args = UNSTREAM_STRING_ASCII( &constant_bin[ 126 ], 4, 1 );
    const_str_plain_statements = UNSTREAM_STRING_ASCII( &constant_bin[ 156 ], 10, 1 );
    const_str_plain_path = UNSTREAM_STRING_ASCII( &constant_bin[ 166 ], 4, 1 );
    const_str_plain_add_argument = UNSTREAM_STRING_ASCII( &constant_bin[ 170 ], 12, 1 );
    const_str_plain_abspath = UNSTREAM_STRING_ASCII( &constant_bin[ 182 ], 7, 1 );
    const_str_plain_text = UNSTREAM_STRING_ASCII( &constant_bin[ 189 ], 4, 1 );
    const_str_plain_ArgumentParser = UNSTREAM_STRING_ASCII( &constant_bin[ 193 ], 14, 1 );
    const_str_plain_os = UNSTREAM_STRING_ASCII( &constant_bin[ 54 ], 2, 1 );
    const_str_angle_module = UNSTREAM_STRING_ASCII( &constant_bin[ 207 ], 8, 0 );
    const_dict_855f35080a41ddb1e81e106853cad5fd = _PyDict_NewPresized( 2 );
    PyDict_SetItem( const_dict_855f35080a41ddb1e81e106853cad5fd, const_str_plain_type, (PyObject *)&PyUnicode_Type );
    const_str_plain_help = UNSTREAM_STRING_ASCII( &constant_bin[ 215 ], 4, 1 );
    const_str_digest_c09391c06c258dbac2a0d577ffcfae75 = UNSTREAM_STRING_ASCII( &constant_bin[ 219 ], 45, 0 );
    PyDict_SetItem( const_dict_855f35080a41ddb1e81e106853cad5fd, const_str_plain_help, const_str_digest_c09391c06c258dbac2a0d577ffcfae75 );
    assert( PyDict_Size( const_dict_855f35080a41ddb1e81e106853cad5fd ) == 2 );
    const_str_plain_None = UNSTREAM_STRING_ASCII( &constant_bin[ 264 ], 4, 1 );
    const_tuple_fdd4e6c8e6fc8e3da943ece0ca6e9475_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_fdd4e6c8e6fc8e3da943ece0ca6e9475_tuple, 0, const_str_plain_filename ); Py_INCREF( const_str_plain_filename );
    PyTuple_SET_ITEM( const_tuple_fdd4e6c8e6fc8e3da943ece0ca6e9475_tuple, 1, const_str_plain_verbose ); Py_INCREF( const_str_plain_verbose );
    const_str_plain_abs_path = UNSTREAM_STRING_ASCII( &constant_bin[ 268 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_fdd4e6c8e6fc8e3da943ece0ca6e9475_tuple, 2, const_str_plain_abs_path ); Py_INCREF( const_str_plain_abs_path );
    PyTuple_SET_ITEM( const_tuple_fdd4e6c8e6fc8e3da943ece0ca6e9475_tuple, 3, const_str_plain_file ); Py_INCREF( const_str_plain_file );
    PyTuple_SET_ITEM( const_tuple_fdd4e6c8e6fc8e3da943ece0ca6e9475_tuple, 4, const_str_plain_text ); Py_INCREF( const_str_plain_text );
    const_str_plain_argparse = UNSTREAM_STRING_ASCII( &constant_bin[ 276 ], 8, 1 );
    const_str_digest_a40c31ed59c7e8923348cb003daeaee4 = UNSTREAM_STRING_ASCII( &constant_bin[ 284 ], 63, 0 );
    const_str_plain_r = UNSTREAM_STRING_ASCII( &constant_bin[ 13 ], 1, 1 );
    const_str_plain___annotations__ = UNSTREAM_STRING_ASCII( &constant_bin[ 347 ], 15, 1 );
    const_str_plain_errors = UNSTREAM_STRING_ASCII( &constant_bin[ 362 ], 6, 1 );
    const_tuple_none_none_none_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_none_none_none_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_tuple, 2, Py_None ); Py_INCREF( Py_None );
    const_dict_d7afdad43e65f99a3b06bd16efaf79e2 = _PyDict_NewPresized( 2 );
    PyDict_SetItem( const_dict_d7afdad43e65f99a3b06bd16efaf79e2, const_str_plain_action, const_str_plain_store_true );
    PyDict_SetItem( const_dict_d7afdad43e65f99a3b06bd16efaf79e2, const_str_plain_help, const_str_digest_f270171adad5f88991fbb7fb4754c699 );
    assert( PyDict_Size( const_dict_d7afdad43e65f99a3b06bd16efaf79e2 ) == 2 );
    const_str_plain_run_program = UNSTREAM_STRING_ASCII( &constant_bin[ 368 ], 11, 1 );
    const_str_plain_parser = UNSTREAM_STRING_ASCII( &constant_bin[ 379 ], 6, 1 );
    const_tuple_329bf9b332839e98f8f0feb2dc91a043_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_329bf9b332839e98f8f0feb2dc91a043_tuple, 0, const_str_plain_filename ); Py_INCREF( const_str_plain_filename );
    PyTuple_SET_ITEM( const_tuple_329bf9b332839e98f8f0feb2dc91a043_tuple, 1, const_str_plain_text ); Py_INCREF( const_str_plain_text );
    PyTuple_SET_ITEM( const_tuple_329bf9b332839e98f8f0feb2dc91a043_tuple, 2, const_str_plain_verbose ); Py_INCREF( const_str_plain_verbose );
    PyTuple_SET_ITEM( const_tuple_329bf9b332839e98f8f0feb2dc91a043_tuple, 3, const_str_plain_program ); Py_INCREF( const_str_plain_program );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants___main__( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_9e0ffe7a6ce4a2cddce5eef8d9666b8f;
static PyCodeObject *codeobj_29e3fbee6b271410e869899f248ac15e;
static PyCodeObject *codeobj_a2d301603002469986dfba2863cef3bb;
/* For use in "MainProgram.c". */
PyCodeObject *codeobj_main = NULL;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_a40c31ed59c7e8923348cb003daeaee4;
    codeobj_9e0ffe7a6ce4a2cddce5eef8d9666b8f = MAKE_CODEOBJ( module_filename_obj, const_str_angle_module, 1, const_tuple_empty, 0, 0, 0, CO_NOFREE );
    codeobj_29e3fbee6b271410e869899f248ac15e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_read_file, 12, const_tuple_fdd4e6c8e6fc8e3da943ece0ca6e9475_tuple, 2, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a2d301603002469986dfba2863cef3bb = MAKE_CODEOBJ( module_filename_obj, const_str_plain_run_program, 7, const_tuple_329bf9b332839e98f8f0feb2dc91a043_tuple, 3, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION___main__$$$function_1_run_program( PyObject *defaults );


static PyObject *MAKE_FUNCTION___main__$$$function_2_read_file( PyObject *defaults );


// The module function definitions.
static PyObject *impl___main__$$$function_1_run_program( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_filename = python_pars[ 0 ];
    PyObject *par_text = python_pars[ 1 ];
    PyObject *par_verbose = python_pars[ 2 ];
    PyObject *var_program = NULL;
    struct Nuitka_FrameObject *frame_a2d301603002469986dfba2863cef3bb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_a2d301603002469986dfba2863cef3bb = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a2d301603002469986dfba2863cef3bb, codeobj_a2d301603002469986dfba2863cef3bb, module___main__, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_a2d301603002469986dfba2863cef3bb = cache_frame_a2d301603002469986dfba2863cef3bb;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a2d301603002469986dfba2863cef3bb );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a2d301603002469986dfba2863cef3bb ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_igloo_interpreter );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_igloo_interpreter );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "igloo_interpreter" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 8;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_Program );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_filename );
        tmp_tuple_element_1 = par_filename;
        tmp_args_name_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_text );
        tmp_tuple_element_1 = par_text;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_verbose;
        CHECK_OBJECT( par_verbose );
        tmp_dict_value_1 = par_verbose;
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_a2d301603002469986dfba2863cef3bb->m_frame.f_lineno = 8;
        tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_program == NULL );
        var_program = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_source_name_4;
        CHECK_OBJECT( var_program );
        tmp_source_name_2 = var_program;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_run );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_program );
        tmp_source_name_4 = var_program;
        tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_ast );
        if ( tmp_source_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 9;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_statements );
        Py_DECREF( tmp_source_name_3 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 9;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_a2d301603002469986dfba2863cef3bb->m_frame.f_lineno = 9;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a2d301603002469986dfba2863cef3bb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a2d301603002469986dfba2863cef3bb );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a2d301603002469986dfba2863cef3bb, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a2d301603002469986dfba2863cef3bb->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a2d301603002469986dfba2863cef3bb, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a2d301603002469986dfba2863cef3bb,
        type_description_1,
        par_filename,
        par_text,
        par_verbose,
        var_program
    );


    // Release cached frame.
    if ( frame_a2d301603002469986dfba2863cef3bb == cache_frame_a2d301603002469986dfba2863cef3bb )
    {
        Py_DECREF( frame_a2d301603002469986dfba2863cef3bb );
    }
    cache_frame_a2d301603002469986dfba2863cef3bb = NULL;

    assertFrameObject( frame_a2d301603002469986dfba2863cef3bb );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( __main__$$$function_1_run_program );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_filename );
    Py_DECREF( par_filename );
    par_filename = NULL;

    CHECK_OBJECT( (PyObject *)par_text );
    Py_DECREF( par_text );
    par_text = NULL;

    CHECK_OBJECT( (PyObject *)par_verbose );
    Py_DECREF( par_verbose );
    par_verbose = NULL;

    CHECK_OBJECT( (PyObject *)var_program );
    Py_DECREF( var_program );
    var_program = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_filename );
    Py_DECREF( par_filename );
    par_filename = NULL;

    CHECK_OBJECT( (PyObject *)par_text );
    Py_DECREF( par_text );
    par_text = NULL;

    CHECK_OBJECT( (PyObject *)par_verbose );
    Py_DECREF( par_verbose );
    par_verbose = NULL;

    Py_XDECREF( var_program );
    var_program = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( __main__$$$function_1_run_program );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl___main__$$$function_2_read_file( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_filename = python_pars[ 0 ];
    PyObject *par_verbose = python_pars[ 1 ];
    PyObject *var_abs_path = NULL;
    PyObject *var_file = NULL;
    PyObject *var_text = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    struct Nuitka_FrameObject *frame_29e3fbee6b271410e869899f248ac15e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_29e3fbee6b271410e869899f248ac15e = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_29e3fbee6b271410e869899f248ac15e, codeobj_29e3fbee6b271410e869899f248ac15e, module___main__, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_29e3fbee6b271410e869899f248ac15e = cache_frame_29e3fbee6b271410e869899f248ac15e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_29e3fbee6b271410e869899f248ac15e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_29e3fbee6b271410e869899f248ac15e ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_os );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 13;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_path );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_filename );
        tmp_args_element_name_1 = par_filename;
        frame_29e3fbee6b271410e869899f248ac15e->m_frame.f_lineno = 13;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_abspath, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert( var_abs_path == NULL );
        var_abs_path = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_open_filename_1;
        PyObject *tmp_open_mode_1;
        CHECK_OBJECT( var_abs_path );
        tmp_open_filename_1 = var_abs_path;
        tmp_open_mode_1 = const_str_plain_r;
        tmp_assign_source_2 = BUILTIN_OPEN( tmp_open_filename_1, tmp_open_mode_1, NULL, NULL, NULL, NULL, NULL, NULL );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        assert( tmp_with_1__source == NULL );
        tmp_with_1__source = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( tmp_with_1__source );
        tmp_source_name_2 = tmp_with_1__source;
        tmp_called_name_1 = LOOKUP_SPECIAL( tmp_source_name_2, const_str_plain___enter__ );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        frame_29e3fbee6b271410e869899f248ac15e->m_frame.f_lineno = 14;
        tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        assert( tmp_with_1__enter == NULL );
        tmp_with_1__enter = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( tmp_with_1__source );
        tmp_source_name_3 = tmp_with_1__source;
        tmp_assign_source_4 = LOOKUP_SPECIAL( tmp_source_name_3, const_str_plain___exit__ );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        assert( tmp_with_1__exit == NULL );
        tmp_with_1__exit = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_assign_source_5;
        tmp_assign_source_5 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( tmp_with_1__enter );
        tmp_assign_source_6 = tmp_with_1__enter;
        assert( var_file == NULL );
        Py_INCREF( tmp_assign_source_6 );
        var_file = tmp_assign_source_6;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT( var_file );
        tmp_called_instance_2 = var_file;
        frame_29e3fbee6b271410e869899f248ac15e->m_frame.f_lineno = 15;
        tmp_assign_source_7 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_read );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        assert( var_text == NULL );
        var_text = tmp_assign_source_7;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_29e3fbee6b271410e869899f248ac15e, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_29e3fbee6b271410e869899f248ac15e, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;
            type_description_1 = "ooooo";
            goto try_except_handler_5;
        }
        tmp_condition_result_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            nuitka_bool tmp_assign_source_8;
            tmp_assign_source_8 = NUITKA_BOOL_FALSE;
            tmp_with_1__indicator = tmp_assign_source_8;
        }
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_args_element_name_4;
            CHECK_OBJECT( tmp_with_1__exit );
            tmp_called_name_2 = tmp_with_1__exit;
            tmp_args_element_name_2 = EXC_TYPE(PyThreadState_GET());
            tmp_args_element_name_3 = EXC_VALUE(PyThreadState_GET());
            tmp_args_element_name_4 = EXC_TRACEBACK(PyThreadState_GET());
            frame_29e3fbee6b271410e869899f248ac15e->m_frame.f_lineno = 15;
            {
                PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
                tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
            }

            if ( tmp_operand_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 15;
                type_description_1 = "ooooo";
                goto try_except_handler_5;
            }
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            Py_DECREF( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 15;
                type_description_1 = "ooooo";
                goto try_except_handler_5;
            }
            tmp_condition_result_2 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_2;
            }
            else
            {
                goto branch_no_2;
            }
            branch_yes_2:;
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 15;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_29e3fbee6b271410e869899f248ac15e->m_frame) frame_29e3fbee6b271410e869899f248ac15e->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "ooooo";
            goto try_except_handler_5;
            branch_no_2:;
        }
        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 14;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_29e3fbee6b271410e869899f248ac15e->m_frame) frame_29e3fbee6b271410e869899f248ac15e->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
        branch_end_1:;
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    try_end_2:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( __main__$$$function_2_read_file );
    return NULL;
    // End of try:
    try_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        nuitka_bool tmp_condition_result_3;
        nuitka_bool tmp_compexpr_left_2;
        nuitka_bool tmp_compexpr_right_2;
        assert( tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_2 = tmp_with_1__indicator;
        tmp_compexpr_right_2 = NUITKA_BOOL_TRUE;
        tmp_condition_result_3 = ( tmp_compexpr_left_2 == tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_3;
        }
        else
        {
            goto branch_no_3;
        }
        branch_yes_3:;
        {
            PyObject *tmp_called_name_3;
            PyObject *tmp_call_result_1;
            CHECK_OBJECT( tmp_with_1__exit );
            tmp_called_name_3 = tmp_with_1__exit;
            frame_29e3fbee6b271410e869899f248ac15e->m_frame.f_lineno = 15;
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                Py_DECREF( exception_keeper_type_3 );
                Py_XDECREF( exception_keeper_value_3 );
                Py_XDECREF( exception_keeper_tb_3 );

                exception_lineno = 15;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_3:;
    }
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
    {
        nuitka_bool tmp_condition_result_4;
        nuitka_bool tmp_compexpr_left_3;
        nuitka_bool tmp_compexpr_right_3;
        assert( tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_3 = tmp_with_1__indicator;
        tmp_compexpr_right_3 = NUITKA_BOOL_TRUE;
        tmp_condition_result_4 = ( tmp_compexpr_left_3 == tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_4 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_4;
        }
        else
        {
            goto branch_no_4;
        }
        branch_yes_4:;
        {
            PyObject *tmp_called_name_4;
            PyObject *tmp_call_result_2;
            CHECK_OBJECT( tmp_with_1__exit );
            tmp_called_name_4 = tmp_with_1__exit;
            frame_29e3fbee6b271410e869899f248ac15e->m_frame.f_lineno = 15;
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 15;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        branch_no_4:;
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_with_1__source );
    tmp_with_1__source = NULL;

    Py_XDECREF( tmp_with_1__enter );
    tmp_with_1__enter = NULL;

    Py_XDECREF( tmp_with_1__exit );
    tmp_with_1__exit = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT( (PyObject *)tmp_with_1__source );
    Py_DECREF( tmp_with_1__source );
    tmp_with_1__source = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_1__enter );
    Py_DECREF( tmp_with_1__enter );
    tmp_with_1__enter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_1__exit );
    Py_DECREF( tmp_with_1__exit );
    tmp_with_1__exit = NULL;

    {
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_run_program );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_run_program );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "run_program" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 16;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_5 = tmp_mvar_value_2;
        CHECK_OBJECT( par_filename );
        tmp_tuple_element_1 = par_filename;
        tmp_args_name_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        if ( var_text == NULL )
        {
            Py_DECREF( tmp_args_name_1 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "text" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 16;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = var_text;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_verbose;
        CHECK_OBJECT( par_verbose );
        tmp_dict_value_1 = par_verbose;
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_29e3fbee6b271410e869899f248ac15e->m_frame.f_lineno = 16;
        tmp_call_result_3 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_call_result_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_3 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_29e3fbee6b271410e869899f248ac15e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_29e3fbee6b271410e869899f248ac15e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_29e3fbee6b271410e869899f248ac15e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_29e3fbee6b271410e869899f248ac15e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_29e3fbee6b271410e869899f248ac15e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_29e3fbee6b271410e869899f248ac15e,
        type_description_1,
        par_filename,
        par_verbose,
        var_abs_path,
        var_file,
        var_text
    );


    // Release cached frame.
    if ( frame_29e3fbee6b271410e869899f248ac15e == cache_frame_29e3fbee6b271410e869899f248ac15e )
    {
        Py_DECREF( frame_29e3fbee6b271410e869899f248ac15e );
    }
    cache_frame_29e3fbee6b271410e869899f248ac15e = NULL;

    assertFrameObject( frame_29e3fbee6b271410e869899f248ac15e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( __main__$$$function_2_read_file );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_filename );
    Py_DECREF( par_filename );
    par_filename = NULL;

    CHECK_OBJECT( (PyObject *)par_verbose );
    Py_DECREF( par_verbose );
    par_verbose = NULL;

    CHECK_OBJECT( (PyObject *)var_abs_path );
    Py_DECREF( var_abs_path );
    var_abs_path = NULL;

    CHECK_OBJECT( (PyObject *)var_file );
    Py_DECREF( var_file );
    var_file = NULL;

    Py_XDECREF( var_text );
    var_text = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_filename );
    Py_DECREF( par_filename );
    par_filename = NULL;

    CHECK_OBJECT( (PyObject *)par_verbose );
    Py_DECREF( par_verbose );
    par_verbose = NULL;

    Py_XDECREF( var_abs_path );
    var_abs_path = NULL;

    Py_XDECREF( var_file );
    var_file = NULL;

    Py_XDECREF( var_text );
    var_text = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( __main__$$$function_2_read_file );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION___main__$$$function_1_run_program( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___main__$$$function_1_run_program,
        const_str_plain_run_program,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a2d301603002469986dfba2863cef3bb,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module___main__,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION___main__$$$function_2_read_file( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___main__$$$function_2_read_file,
        const_str_plain_read_file,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_29e3fbee6b271410e869899f248ac15e,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module___main__,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef___main__ =
{
    PyModuleDef_HEAD_INIT,
    "__main__",
    NULL,                /* m_doc */
    -1,                  /* m_size */
    NULL,                /* m_methods */
    NULL,                /* m_reload */
    NULL,                /* m_traverse */
    NULL,                /* m_clear */
    NULL,                /* m_free */
  };
#endif

extern PyObject *const_str_plain___compiled__;

extern PyObject *const_str_plain___package__;

#if PYTHON_VERSION >= 300
extern PyObject *const_str_dot;
extern PyObject *const_str_plain___loader__;
#endif

#if PYTHON_VERSION >= 340
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain__initializing;
extern PyObject *const_str_plain_submodule_search_locations;
#endif

extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();
#if PYTHON_VERSION >= 350
extern void _initCompiledCoroutineTypes();
#endif
#if PYTHON_VERSION >= 360
extern void _initCompiledAsyncgenTypes();
#endif

extern PyTypeObject Nuitka_Loader_Type;

#if defined(_NUITKA_EXE) || !1
// For executables or non top level modules, we need not export anything.
MOD_ENTRY_DECL(__main__)
#else
// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL macro.
MOD_INIT_DECL(__main__)
#endif
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module___main__ );
    }
    else
    {
        _init_done = true;
    }
#endif

#ifdef _NUITKA_MODULE
    // In case of a stand alone extension module, need to call initialization
    // the init here because that's the first and only time we are going to get
    // called here.

    // May have to activate constants blob.
#if defined(_NUITKA_CONSTANTS_FROM_RESOURCE)
    loadConstantsResource();
#endif

    // Initialize the constant values used.
    _initBuiltinModule();
    createGlobalConstants();

    /* Initialize the compiled types of Nuitka. */
    _initCompiledCellType();
    _initCompiledGeneratorType();
    _initCompiledFunctionType();
    _initCompiledMethodType();
    _initCompiledFrameType();
#if PYTHON_VERSION >= 350
    _initCompiledCoroutineTypes();
#endif
#if PYTHON_VERSION >= 360
    _initCompiledAsyncgenTypes();
#endif

#if PYTHON_VERSION < 300
    _initSlotCompare();
#endif
#if PYTHON_VERSION >= 270
    _initSlotIternext();
#endif

    patchBuiltinModule();
    patchTypeComparison();

    // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
    puts("__main__: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("__main__: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("__main__: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in init__main__" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module___main__ = Py_InitModule4(
        "__main__",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module___main__ = PyModule_Create( &mdef___main__ );
#endif

    moduledict___main__ = MODULE_DICT( module___main__ );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict___main__,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict___main__,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict___main__,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict___main__,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module___main__ );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_plain___main__, module___main__ );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !1
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict___main__, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict___main__, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 1
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict___main__, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain___name__ ),
            (PyObject *)&Nuitka_Loader_Type
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );
        Py_DECREF( module_spec_class );

        // We can assume this to never fail, or else we are in trouble anyway.
        CHECK_OBJECT( spec_value );

// For packages set the submodule search locations as well, even if to empty
// list, so investigating code will consider it a package.
#if 0
        SET_ATTRIBUTE( spec_value, const_str_plain_submodule_search_locations, PyList_New(0) );
#endif

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE( spec_value, const_str_plain__initializing, Py_True );

        UPDATE_STRING_DICT1( moduledict___main__, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_9e0ffe7a6ce4a2cddce5eef8d9666b8f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;

    // Module code.
    // Frame without reuse.
    frame_9e0ffe7a6ce4a2cddce5eef8d9666b8f = MAKE_MODULE_FRAME( codeobj_9e0ffe7a6ce4a2cddce5eef8d9666b8f, module___main__ );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_9e0ffe7a6ce4a2cddce5eef8d9666b8f );
    assert( Py_REFCNT( frame_9e0ffe7a6ce4a2cddce5eef8d9666b8f ) == 2 );

    // Framed code:
    {
        PyObject *tmp_name_name_1;
        PyObject *tmp_level_name_1;
        PyObject *tmp_imported_value_1;
        tmp_name_name_1 = const_str_plain_site;
        tmp_level_name_1 = const_int_0;
        frame_9e0ffe7a6ce4a2cddce5eef8d9666b8f->m_frame.f_lineno = 1;
        tmp_imported_value_1 = IMPORT_MODULE_KW( tmp_name_name_1, NULL, NULL, NULL, tmp_level_name_1 );
        if ( tmp_imported_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_imported_value_1 );
    }
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0( moduledict___main__, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_a40c31ed59c7e8923348cb003daeaee4;
        UPDATE_STRING_DICT0( moduledict___main__, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0( moduledict___main__, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = PyDict_New();
        UPDATE_STRING_DICT1( moduledict___main__, (Nuitka_StringObject *)const_str_plain___annotations__, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_errors;
        tmp_globals_name_1 = (PyObject *)moduledict___main__;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_9e0ffe7a6ce4a2cddce5eef8d9666b8f->m_frame.f_lineno = 1;
        tmp_assign_source_5 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_2 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict___main__, (Nuitka_StringObject *)const_str_plain_errors, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_igloo_interpreter;
        tmp_globals_name_2 = (PyObject *)moduledict___main__;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_3 = const_int_0;
        frame_9e0ffe7a6ce4a2cddce5eef8d9666b8f->m_frame.f_lineno = 2;
        tmp_assign_source_6 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_3 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict___main__, (Nuitka_StringObject *)const_str_plain_igloo_interpreter, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_plain_os;
        tmp_globals_name_3 = (PyObject *)moduledict___main__;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        tmp_level_name_4 = const_int_0;
        frame_9e0ffe7a6ce4a2cddce5eef8d9666b8f->m_frame.f_lineno = 3;
        tmp_assign_source_7 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_4 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict___main__, (Nuitka_StringObject *)const_str_plain_os, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_plain_argparse;
        tmp_globals_name_4 = (PyObject *)moduledict___main__;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = Py_None;
        tmp_level_name_5 = const_int_0;
        frame_9e0ffe7a6ce4a2cddce5eef8d9666b8f->m_frame.f_lineno = 4;
        tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_5 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict___main__, (Nuitka_StringObject *)const_str_plain_argparse, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_false_tuple;
        Py_INCREF( tmp_defaults_1 );
        tmp_assign_source_9 = MAKE_FUNCTION___main__$$$function_1_run_program( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict___main__, (Nuitka_StringObject *)const_str_plain_run_program, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = const_tuple_false_tuple;
        Py_INCREF( tmp_defaults_2 );
        tmp_assign_source_10 = MAKE_FUNCTION___main__$$$function_2_read_file( tmp_defaults_2 );



        UPDATE_STRING_DICT1( moduledict___main__, (Nuitka_StringObject *)const_str_plain_read_file, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_argparse );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_argparse );
        }

        CHECK_OBJECT( tmp_mvar_value_1 );
        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ArgumentParser );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        tmp_kw_name_1 = PyDict_Copy( const_dict_a25931111ca1f083bcf7743c0178861d );
        frame_9e0ffe7a6ce4a2cddce5eef8d9666b8f->m_frame.f_lineno = 20;
        tmp_assign_source_11 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict___main__, (Nuitka_StringObject *)const_str_plain_parser, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_kw_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_parser );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_parser );
        }

        CHECK_OBJECT( tmp_mvar_value_2 );
        tmp_source_name_2 = tmp_mvar_value_2;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_add_argument );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = const_tuple_str_plain_filename_tuple;
        tmp_kw_name_2 = PyDict_Copy( const_dict_855f35080a41ddb1e81e106853cad5fd );
        frame_9e0ffe7a6ce4a2cddce5eef8d9666b8f->m_frame.f_lineno = 22;
        tmp_call_result_1 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_2 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_name_2;
        PyObject *tmp_kw_name_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_parser );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_parser );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "parser" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 26;

            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_3;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_add_argument );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        tmp_args_name_2 = const_tuple_6e0ce2585290961afef9353bf934255f_tuple;
        tmp_kw_name_3 = PyDict_Copy( const_dict_d7afdad43e65f99a3b06bd16efaf79e2 );
        frame_9e0ffe7a6ce4a2cddce5eef8d9666b8f->m_frame.f_lineno = 26;
        tmp_call_result_2 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_2, tmp_kw_name_3 );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_kw_name_3 );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_4;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_parser );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_parser );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "parser" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 29;

            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_4;
        frame_9e0ffe7a6ce4a2cddce5eef8d9666b8f->m_frame.f_lineno = 29;
        tmp_assign_source_12 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_parse_args );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict___main__, (Nuitka_StringObject *)const_str_plain_args, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_name_3;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_kw_name_4;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_7;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_read_file );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_read_file );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "read_file" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 31;

            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_5;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_args );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_args );
        }

        CHECK_OBJECT( tmp_mvar_value_6 );
        tmp_source_name_4 = tmp_mvar_value_6;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_filename );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        tmp_args_name_3 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_verbose;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_args );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_args );
        }

        if ( tmp_mvar_value_7 == NULL )
        {
            Py_DECREF( tmp_args_name_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "args" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 31;

            goto frame_exception_exit_1;
        }

        tmp_source_name_5 = tmp_mvar_value_7;
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_verbose );
        if ( tmp_dict_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_name_3 );

            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        tmp_kw_name_4 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_9e0ffe7a6ce4a2cddce5eef8d9666b8f->m_frame.f_lineno = 31;
        tmp_call_result_3 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_3, tmp_kw_name_4 );
        Py_DECREF( tmp_args_name_3 );
        Py_DECREF( tmp_kw_name_4 );
        if ( tmp_call_result_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_3 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9e0ffe7a6ce4a2cddce5eef8d9666b8f );
#endif
    popFrameStack();

    assertFrameObject( frame_9e0ffe7a6ce4a2cddce5eef8d9666b8f );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9e0ffe7a6ce4a2cddce5eef8d9666b8f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9e0ffe7a6ce4a2cddce5eef8d9666b8f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9e0ffe7a6ce4a2cddce5eef8d9666b8f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9e0ffe7a6ce4a2cddce5eef8d9666b8f, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

    return MOD_RETURN_VALUE( module___main__ );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
