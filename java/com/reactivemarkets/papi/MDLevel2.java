// automatically generated by the FlatBuffers compiler, do not modify

package com.reactivemarkets.papi;

import java.nio.*;
import java.lang.*;
import java.util.*;
import com.google.flatbuffers.*;

@SuppressWarnings("unused")
public final class MDLevel2 extends Struct {
  public void __init(int _i, ByteBuffer _bb) { __reset(_i, _bb); }
  public MDLevel2 __assign(int _i, ByteBuffer _bb) { __init(_i, _bb); return this; }

  public double qty() { return bb.getDouble(bb_pos + 0); }
  public double price() { return bb.getDouble(bb_pos + 8); }

  public static int createMDLevel2(FlatBufferBuilder builder, double qty, double price) {
    builder.prep(8, 16);
    builder.putDouble(price);
    builder.putDouble(qty);
    return builder.offset();
  }

  public static final class Vector extends BaseVector {
    public Vector __assign(int _vector, int _element_size, ByteBuffer _bb) { __reset(_vector, _element_size, _bb); return this; }

    public MDLevel2 get(int j) { return get(new MDLevel2(), j); }
    public MDLevel2 get(MDLevel2 obj, int j) {  return obj.__assign(__element(j), bb); }
  }
}
