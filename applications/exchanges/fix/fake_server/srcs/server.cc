// Copyright 2019 Stewart Henderson. All rights reserved.
#include "server.h"

void applications::exchanges::fix::Server::onLogon(
    const FIX::SessionID &sessionID) {}

void applications::exchanges::fix::Server::onLogout(
    const FIX::SessionID &sessionID) {}

void applications::exchanges::fix::Server::onCreate(const FIX::SessionID &) {}
void applications::exchanges::fix::Server::toAdmin(FIX::Message &,
                                                   const FIX::SessionID &) {}
void applications::exchanges::fix::Server::toApp(
    FIX::Message &, const FIX::SessionID &) throw(FIX::DoNotSend) {}
void applications::exchanges::fix::Server::fromAdmin(
    const FIX::Message &,
    const FIX::SessionID &) throw(FIX::FieldNotFound, FIX::IncorrectDataFormat,
                                  FIX::IncorrectTagValue, FIX::RejectLogon) {}
void applications::exchanges::fix::Server::fromApp(
    const FIX::Message &,
    const FIX::SessionID &) throw(FIX::FieldNotFound, FIX::IncorrectDataFormat,
                                  FIX::IncorrectTagValue,
                                  FIX::UnsupportedMessageType) {}