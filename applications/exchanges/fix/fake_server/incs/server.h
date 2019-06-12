#pragma once

#include "quickfix/Application.h"
#include "quickfix/MessageCracker.h"
#include "quickfix/Values.h"
#include "quickfix/Utility.h"
#include "quickfix/Mutex.h"

#include "fix40.h"
#include "fix41.h"
#include "fix42.h"
#include "fix43.h"
#include "fix44.h"
#include "fix50.h"

namespace applications {
    namespace exchanges {
        namespace fix {
            class Server : public FIX::Application,
                    public FIX::MessageCracker
            {
            public: 
                void onLogon( const FIX::SessionID& sessionID );
                void onLogout( const FIX::SessionID& sessionID );
            };
        }
    }
}
