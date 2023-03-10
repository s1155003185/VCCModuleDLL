#pragma once

#include "base_property.hpp"
#include "class_macro.hpp"

#include "file_constant.hpp"
#include "log_type.hpp"

namespace vcc
{
    class LogProperty : public BaseProperty
    {
        // General
        GETSET(bool, IsConsoleLog, true);
        GETSET(PATH, FilePath, "");
        // Command
        GETSET(bool, IsLogCommand, true);
        GETSET(bool, IsLogCommandResult, true);
        // Process
        GETSET(bool, IsLogProcess, true);
        GETSET(bool, IsLogProcessResult, true);
        // SQL
        GETSET(bool, IsLogSQL, true);
        GETSET(bool, IsLogSQLResult, true);
    public:
        LogProperty() {}
        ~LogProperty() {}
    };
}
