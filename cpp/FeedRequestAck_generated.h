// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_FEEDREQUESTACK_COM_REACTIVEMARKETS_PAPI_H_
#define FLATBUFFERS_GENERATED_FEEDREQUESTACK_COM_REACTIVEMARKETS_PAPI_H_

#include "flatbuffers/flatbuffers.h"

#include "Enum_generated.h"

namespace com {
namespace reactivemarkets {
namespace papi {

struct FeedRequestAck;
struct FeedRequestAckBuilder;

struct FeedRequestAck FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef FeedRequestAckBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_REQ_ID = 4,
    VT_FEED_ID = 6
  };
  const flatbuffers::String *req_id() const {
    return GetPointer<const flatbuffers::String *>(VT_REQ_ID);
  }
  int32_t feed_id() const {
    return GetField<int32_t>(VT_FEED_ID, 0);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_REQ_ID) &&
           verifier.VerifyString(req_id()) &&
           VerifyField<int32_t>(verifier, VT_FEED_ID) &&
           verifier.EndTable();
  }
};

struct FeedRequestAckBuilder {
  typedef FeedRequestAck Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_req_id(flatbuffers::Offset<flatbuffers::String> req_id) {
    fbb_.AddOffset(FeedRequestAck::VT_REQ_ID, req_id);
  }
  void add_feed_id(int32_t feed_id) {
    fbb_.AddElement<int32_t>(FeedRequestAck::VT_FEED_ID, feed_id, 0);
  }
  explicit FeedRequestAckBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<FeedRequestAck> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<FeedRequestAck>(end);
    return o;
  }
};

inline flatbuffers::Offset<FeedRequestAck> CreateFeedRequestAck(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> req_id = 0,
    int32_t feed_id = 0) {
  FeedRequestAckBuilder builder_(_fbb);
  builder_.add_feed_id(feed_id);
  builder_.add_req_id(req_id);
  return builder_.Finish();
}

inline flatbuffers::Offset<FeedRequestAck> CreateFeedRequestAckDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const char *req_id = nullptr,
    int32_t feed_id = 0) {
  auto req_id__ = req_id ? _fbb.CreateString(req_id) : 0;
  return com::reactivemarkets::papi::CreateFeedRequestAck(
      _fbb,
      req_id__,
      feed_id);
}

}  // namespace papi
}  // namespace reactivemarkets
}  // namespace com

#endif  // FLATBUFFERS_GENERATED_FEEDREQUESTACK_COM_REACTIVEMARKETS_PAPI_H_
