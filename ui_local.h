// DyLua: SimpleGraphic
// (c) David Gowor, 2014
//
// UI Local Header
//

#include "common.h"
#include "system.h"
#include "render.h"
#include "core.h"

#include "ui.h"

#define SOL_ALL_SAFETIES_ON 1
#ifdef _WIN32
    #define SOL_USING_CXX_LUAJIT 1
#elif __linux__
    #define SOL_USING_CXX_LUAJIT 1
#endif
#include <sol/sol.hpp>

#include "ui_console.h"
#include "ui_debug.h"
#include "ui_subscript.h"

#include "ui_main.h"
