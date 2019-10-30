// Ruby bindings for zstd library.
// Copyright (c) 2019 AUTHORS, MIT License.

#include "zstds_ext/buffer.h"

#include <zstd.h>

#include "ruby.h"

void zstds_ext_buffer_exports(VALUE root_module)
{
  VALUE module = rb_define_module_under(root_module, "Buffer");

  rb_define_const(module, "DEFAULT_SOURCE_BUFFER_LENGTH_FOR_COMPRESSOR", SIZET2NUM(ZSTD_CStreamInSize()));
  rb_define_const(module, "DEFAULT_DESTINATION_BUFFER_LENGTH_FOR_COMPRESSOR", SIZET2NUM(ZSTD_CStreamOutSize()));
  rb_define_const(module, "DEFAULT_SOURCE_BUFFER_LENGTH_FOR_DECOMPRESSOR", SIZET2NUM(ZSTD_DStreamInSize()));
  rb_define_const(module, "DEFAULT_DESTINATION_BUFFER_LENGTH_FOR_DECOMPRESSOR", SIZET2NUM(ZSTD_DStreamOutSize()));
}
