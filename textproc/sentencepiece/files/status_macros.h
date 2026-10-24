#ifndef ABSL_STATUS_STATUS_MACROS_H_
#define ABSL_STATUS_STATUS_MACROS_H_

#include "absl/status/status.h"

#define RETURN_IF_ERROR(expr)           \
  do {                                    \
    const absl::Status _status = (expr);  \
    if (!_status.ok()) return _status;    \
  } while (0)

#endif  // ABSL_STATUS_STATUS_MACROS_H_
