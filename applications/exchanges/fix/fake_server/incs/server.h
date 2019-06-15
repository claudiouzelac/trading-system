// Copyright 2019 Stewart Henderson. All rights reserved.
#pragma once

#include "quickfix_precompiled.h"

namespace applications {
namespace exchanges {
namespace fix {

class Server : public FIX::Application, public FIX::MessageCracker {
public:
  Server() = default;

  void onLogon(const FIX::SessionID &sessionID);
  void onLogout(const FIX::SessionID &sessionID);
  void onCreate(const FIX::SessionID &);
  void toAdmin(FIX::Message &, const FIX::SessionID &);
  void toApp(FIX::Message &, const FIX::SessionID &) throw(FIX::DoNotSend);
  void fromAdmin(const FIX::Message &,
                 const FIX::SessionID &) throw(FIX::FieldNotFound,
                                               FIX::IncorrectDataFormat,
                                               FIX::IncorrectTagValue,
                                               FIX::RejectLogon);
  void fromApp(const FIX::Message &,
               const FIX::SessionID &) throw(FIX::FieldNotFound,
                                             FIX::IncorrectDataFormat,
                                             FIX::IncorrectTagValue,
                                             FIX::UnsupportedMessageType);
};
}
}
}
