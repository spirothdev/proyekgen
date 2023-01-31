#pragma once
#include "global.h"
#define LOG_INFO spdlog::info
#define LOG_ERR spdlog::error
#define LOG_WARN spdlog::warn
#define LOG_DEBUG spdlog::debug
#define LOG_CRITICAL(msg, code) \
{ \
	spdlog::critical(msg); \
	exit(code); \
}