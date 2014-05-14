/*
    RawSpeed - RAW file decoder.

    Copyright (C) 2009 Klaus Post

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with this library; if not, write to the Free Software
    Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA

    http://www.klauspost.com
*/
#ifndef MRW_DECODER_H
#define MRW_DECODER_H

#include "RawDecoder.h"

namespace RawSpeed {

class MrwDecoder :
  public RawDecoder
{
public:
  MrwDecoder(uint32 data_offset, uint32 raw_width, uint32 raw_height, FileMap* file);
  virtual ~MrwDecoder(void);
  virtual RawImage decodeRawInternal();
  virtual void checkSupportInternal(CameraMetaData *meta);
  virtual void decodeMetaDataInternal(CameraMetaData *meta);
protected:
  ByteStream *in;
  uint32 raw_width, raw_height, data_offset;
  const uchar8 *data;
};

} // namespace RawSpeed

#endif
