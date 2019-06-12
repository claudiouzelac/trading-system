#pragma once

#include "quickfix/Application.h"
#include "quickfix/MessageCracker.h"
#include "quickfix/fix42/ExecutionReport.h"

class Server : public FIX::Application, public FIX::MessageCracker {

};