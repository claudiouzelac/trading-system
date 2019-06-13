#pragma once

#include <string>

#include "quickfix_precompiled.h"

#include "engine_type.h"

namespace applications {
namespace exchanges {
namespace fix {

class Engine {
public:
    Engine() = default;
    void Activate(FIX::Application &app);
	void Deactivate();
};
}
}
}