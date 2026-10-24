#pragma once
#include <cstdint>
#include <string>

namespace docling {

extern const uint64_t kBytesPerGB;

/**
 * Get total physical system memory in GB
 */
uint64_t GetTotalSystemGB();

/**
 * Set the log level
 */
void set_loglevel(std::string level);

} // namespace docling
