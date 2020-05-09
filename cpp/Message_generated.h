// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_MESSAGE_COM_REACTIVEMARKETS_PAPI_H_
#define FLATBUFFERS_GENERATED_MESSAGE_COM_REACTIVEMARKETS_PAPI_H_

#include "flatbuffers/flatbuffers.h"

#include "Enum_generated.h"
#include "FeedRequest_generated.h"
#include "FeedRequestAck_generated.h"
#include "FeedRequestReject_generated.h"
#include "MDSnapshotL2_generated.h"
#include "PublicTrade_generated.h"
#include "SessionStatus_generated.h"

namespace com {
namespace reactivemarkets {
namespace papi {

struct Message;
struct MessageBuilder;

enum Body {
  Body_NONE = 0,
  Body_FeedRequest = 1,
  Body_FeedRequestAck = 2,
  Body_FeedRequestReject = 3,
  Body_MDSnapshotL2 = 4,
  Body_PublicTrade = 5,
  Body_SessionStatus = 6,
  Body_MIN = Body_NONE,
  Body_MAX = Body_SessionStatus
};

inline const Body (&EnumValuesBody())[7] {
  static const Body values[] = {
    Body_NONE,
    Body_FeedRequest,
    Body_FeedRequestAck,
    Body_FeedRequestReject,
    Body_MDSnapshotL2,
    Body_PublicTrade,
    Body_SessionStatus
  };
  return values;
}

inline const char * const *EnumNamesBody() {
  static const char * const names[8] = {
    "NONE",
    "FeedRequest",
    "FeedRequestAck",
    "FeedRequestReject",
    "MDSnapshotL2",
    "PublicTrade",
    "SessionStatus",
    nullptr
  };
  return names;
}

inline const char *EnumNameBody(Body e) {
  if (flatbuffers::IsOutRange(e, Body_NONE, Body_SessionStatus)) return "";
  const size_t index = static_cast<size_t>(e);
  return EnumNamesBody()[index];
}

template<typename T> struct BodyTraits {
  static const Body enum_value = Body_NONE;
};

template<> struct BodyTraits<com::reactivemarkets::papi::FeedRequest> {
  static const Body enum_value = Body_FeedRequest;
};

template<> struct BodyTraits<com::reactivemarkets::papi::FeedRequestAck> {
  static const Body enum_value = Body_FeedRequestAck;
};

template<> struct BodyTraits<com::reactivemarkets::papi::FeedRequestReject> {
  static const Body enum_value = Body_FeedRequestReject;
};

template<> struct BodyTraits<com::reactivemarkets::papi::MDSnapshotL2> {
  static const Body enum_value = Body_MDSnapshotL2;
};

template<> struct BodyTraits<com::reactivemarkets::papi::PublicTrade> {
  static const Body enum_value = Body_PublicTrade;
};

template<> struct BodyTraits<com::reactivemarkets::papi::SessionStatus> {
  static const Body enum_value = Body_SessionStatus;
};

bool VerifyBody(flatbuffers::Verifier &verifier, const void *obj, Body type);
bool VerifyBodyVector(flatbuffers::Verifier &verifier, const flatbuffers::Vector<flatbuffers::Offset<void>> *values, const flatbuffers::Vector<uint8_t> *types);

struct Message FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef MessageBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_TTS = 4,
    VT_BODY_TYPE = 6,
    VT_BODY = 8
  };
  int64_t tts() const {
    return GetField<int64_t>(VT_TTS, 0);
  }
  com::reactivemarkets::papi::Body body_type() const {
    return static_cast<com::reactivemarkets::papi::Body>(GetField<uint8_t>(VT_BODY_TYPE, 0));
  }
  const void *body() const {
    return GetPointer<const void *>(VT_BODY);
  }
  template<typename T> const T *body_as() const;
  const com::reactivemarkets::papi::FeedRequest *body_as_FeedRequest() const {
    return body_type() == com::reactivemarkets::papi::Body_FeedRequest ? static_cast<const com::reactivemarkets::papi::FeedRequest *>(body()) : nullptr;
  }
  const com::reactivemarkets::papi::FeedRequestAck *body_as_FeedRequestAck() const {
    return body_type() == com::reactivemarkets::papi::Body_FeedRequestAck ? static_cast<const com::reactivemarkets::papi::FeedRequestAck *>(body()) : nullptr;
  }
  const com::reactivemarkets::papi::FeedRequestReject *body_as_FeedRequestReject() const {
    return body_type() == com::reactivemarkets::papi::Body_FeedRequestReject ? static_cast<const com::reactivemarkets::papi::FeedRequestReject *>(body()) : nullptr;
  }
  const com::reactivemarkets::papi::MDSnapshotL2 *body_as_MDSnapshotL2() const {
    return body_type() == com::reactivemarkets::papi::Body_MDSnapshotL2 ? static_cast<const com::reactivemarkets::papi::MDSnapshotL2 *>(body()) : nullptr;
  }
  const com::reactivemarkets::papi::PublicTrade *body_as_PublicTrade() const {
    return body_type() == com::reactivemarkets::papi::Body_PublicTrade ? static_cast<const com::reactivemarkets::papi::PublicTrade *>(body()) : nullptr;
  }
  const com::reactivemarkets::papi::SessionStatus *body_as_SessionStatus() const {
    return body_type() == com::reactivemarkets::papi::Body_SessionStatus ? static_cast<const com::reactivemarkets::papi::SessionStatus *>(body()) : nullptr;
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int64_t>(verifier, VT_TTS) &&
           VerifyField<uint8_t>(verifier, VT_BODY_TYPE) &&
           VerifyOffset(verifier, VT_BODY) &&
           VerifyBody(verifier, body(), body_type()) &&
           verifier.EndTable();
  }
};

template<> inline const com::reactivemarkets::papi::FeedRequest *Message::body_as<com::reactivemarkets::papi::FeedRequest>() const {
  return body_as_FeedRequest();
}

template<> inline const com::reactivemarkets::papi::FeedRequestAck *Message::body_as<com::reactivemarkets::papi::FeedRequestAck>() const {
  return body_as_FeedRequestAck();
}

template<> inline const com::reactivemarkets::papi::FeedRequestReject *Message::body_as<com::reactivemarkets::papi::FeedRequestReject>() const {
  return body_as_FeedRequestReject();
}

template<> inline const com::reactivemarkets::papi::MDSnapshotL2 *Message::body_as<com::reactivemarkets::papi::MDSnapshotL2>() const {
  return body_as_MDSnapshotL2();
}

template<> inline const com::reactivemarkets::papi::PublicTrade *Message::body_as<com::reactivemarkets::papi::PublicTrade>() const {
  return body_as_PublicTrade();
}

template<> inline const com::reactivemarkets::papi::SessionStatus *Message::body_as<com::reactivemarkets::papi::SessionStatus>() const {
  return body_as_SessionStatus();
}

struct MessageBuilder {
  typedef Message Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_tts(int64_t tts) {
    fbb_.AddElement<int64_t>(Message::VT_TTS, tts, 0);
  }
  void add_body_type(com::reactivemarkets::papi::Body body_type) {
    fbb_.AddElement<uint8_t>(Message::VT_BODY_TYPE, static_cast<uint8_t>(body_type), 0);
  }
  void add_body(flatbuffers::Offset<void> body) {
    fbb_.AddOffset(Message::VT_BODY, body);
  }
  explicit MessageBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<Message> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Message>(end);
    return o;
  }
};

inline flatbuffers::Offset<Message> CreateMessage(
    flatbuffers::FlatBufferBuilder &_fbb,
    int64_t tts = 0,
    com::reactivemarkets::papi::Body body_type = com::reactivemarkets::papi::Body_NONE,
    flatbuffers::Offset<void> body = 0) {
  MessageBuilder builder_(_fbb);
  builder_.add_tts(tts);
  builder_.add_body(body);
  builder_.add_body_type(body_type);
  return builder_.Finish();
}

inline bool VerifyBody(flatbuffers::Verifier &verifier, const void *obj, Body type) {
  switch (type) {
    case Body_NONE: {
      return true;
    }
    case Body_FeedRequest: {
      auto ptr = reinterpret_cast<const com::reactivemarkets::papi::FeedRequest *>(obj);
      return verifier.VerifyTable(ptr);
    }
    case Body_FeedRequestAck: {
      auto ptr = reinterpret_cast<const com::reactivemarkets::papi::FeedRequestAck *>(obj);
      return verifier.VerifyTable(ptr);
    }
    case Body_FeedRequestReject: {
      auto ptr = reinterpret_cast<const com::reactivemarkets::papi::FeedRequestReject *>(obj);
      return verifier.VerifyTable(ptr);
    }
    case Body_MDSnapshotL2: {
      auto ptr = reinterpret_cast<const com::reactivemarkets::papi::MDSnapshotL2 *>(obj);
      return verifier.VerifyTable(ptr);
    }
    case Body_PublicTrade: {
      auto ptr = reinterpret_cast<const com::reactivemarkets::papi::PublicTrade *>(obj);
      return verifier.VerifyTable(ptr);
    }
    case Body_SessionStatus: {
      auto ptr = reinterpret_cast<const com::reactivemarkets::papi::SessionStatus *>(obj);
      return verifier.VerifyTable(ptr);
    }
    default: return true;
  }
}

inline bool VerifyBodyVector(flatbuffers::Verifier &verifier, const flatbuffers::Vector<flatbuffers::Offset<void>> *values, const flatbuffers::Vector<uint8_t> *types) {
  if (!values || !types) return !values && !types;
  if (values->size() != types->size()) return false;
  for (flatbuffers::uoffset_t i = 0; i < values->size(); ++i) {
    if (!VerifyBody(
        verifier,  values->Get(i), types->GetEnum<Body>(i))) {
      return false;
    }
  }
  return true;
}

inline const com::reactivemarkets::papi::Message *GetMessage(const void *buf) {
  return flatbuffers::GetRoot<com::reactivemarkets::papi::Message>(buf);
}

inline const com::reactivemarkets::papi::Message *GetSizePrefixedMessage(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<com::reactivemarkets::papi::Message>(buf);
}

inline const char *MessageIdentifier() {
  return "RMF1";
}

inline bool MessageBufferHasIdentifier(const void *buf) {
  return flatbuffers::BufferHasIdentifier(
      buf, MessageIdentifier());
}

inline bool VerifyMessageBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<com::reactivemarkets::papi::Message>(MessageIdentifier());
}

inline bool VerifySizePrefixedMessageBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<com::reactivemarkets::papi::Message>(MessageIdentifier());
}

inline const char *MessageExtension() {
  return "rmf";
}

inline void FinishMessageBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<com::reactivemarkets::papi::Message> root) {
  fbb.Finish(root, MessageIdentifier());
}

inline void FinishSizePrefixedMessageBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<com::reactivemarkets::papi::Message> root) {
  fbb.FinishSizePrefixed(root, MessageIdentifier());
}

}  // namespace papi
}  // namespace reactivemarkets
}  // namespace com

#endif  // FLATBUFFERS_GENERATED_MESSAGE_COM_REACTIVEMARKETS_PAPI_H_