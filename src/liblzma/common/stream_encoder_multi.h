///////////////////////////////////////////////////////////////////////////////
//
/// \file       stream_encoder_multi.h
/// \brief      Encodes Multi-Block .lzma files
//
//  Copyright (C) 2007 Lasse Collin
//
//  This library is free software; you can redistribute it and/or
//  modify it under the terms of the GNU Lesser General Public
//  License as published by the Free Software Foundation; either
//  version 2.1 of the License, or (at your option) any later version.
//
//  This library is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
//  Lesser General Public License for more details.
//
///////////////////////////////////////////////////////////////////////////////

#ifndef LZMA_STREAM_ENCODER_MULTI_H
#define LZMA_STREAM_ENCODER_MULTI_H

extern lzma_ret lzma_stream_encoder_multi_init(lzma_next_coder *next,
		lzma_allocator *allocator, const lzma_options_stream *options);

#endif
