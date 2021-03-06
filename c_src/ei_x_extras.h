/*
 * Copyright (c) 2016, Mark Jones <markalanj@gmail.com>.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *
 * Redistributions of source code must retain the above copyright
 * notice, this list of conditions and the following disclaimer.
 *
 * Redistributions in binary form must reproduce the above copyright
 * notice, this list of conditions and the following disclaimer in the
 * documentation and/or other materials provided with the distribution.
 *
 * The names of its contributors may not be used to endorse or promote
 * products derived from this software without specific prior written
 * permission.

 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef EI_X_EXTRAS_H_
#define EI_X_EXTRAS_H_

#include <ei.h>

ErlDrvBinary *ei_x_to_new_binary(const ei_x_buff *x);
int ei_x_decode_version(ei_x_buff *x, int *version);
int ei_x_decode_atom(ei_x_buff *x, char *atom);
int ei_x_decode_term(ei_x_buff *x, void *term);
int ei_x_decode_tuple_header(ei_x_buff *x, int *arity);
int ei_x_decode_long(ei_x_buff *x, long *n);
int ei_x_decode_longlong(ei_x_buff *x, long long *n);
int ei_x_decode_ulong(ei_x_buff *x, unsigned long *n);
int ei_x_decode_ulonglong(ei_x_buff *x, unsigned long long *n);

#endif

