# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

"""Lance Namespace error types.

This module defines the exception hierarchy for Lance Namespace operations.
Each exception has an associated error code for programmatic handling.

Error codes are globally unique across all Lance Namespace implementations.

Examples
--------
Raise an error:

    >>> raise TableNotFoundError("Table 'users' not found")

Chain with another exception:

    >>> raise TableNotFoundError("Table 'users' not found") from original_error

Access the error code:

    >>> try:
    ...     namespace.describe_table(...)
    ... except LanceNamespaceError as e:
    ...     print(e.code)  # ErrorCode.TABLE_NOT_FOUND
    ...     print(str(e))  # "Table 'users' not found"
"""

from enum import IntEnum
from typing import Type, Dict


class ErrorCode(IntEnum):
    """Lance Namespace error codes.

    These codes are globally unique across all Lance Namespace implementations.
    """

    UNSUPPORTED = 0
    NAMESPACE_NOT_FOUND = 1
    NAMESPACE_ALREADY_EXISTS = 2
    NAMESPACE_NOT_EMPTY = 3
    TABLE_NOT_FOUND = 4
    TABLE_ALREADY_EXISTS = 5
    TABLE_INDEX_NOT_FOUND = 6
    TABLE_INDEX_ALREADY_EXISTS = 7
    TABLE_TAG_NOT_FOUND = 8
    TABLE_TAG_ALREADY_EXISTS = 9
    TRANSACTION_NOT_FOUND = 10
    TABLE_VERSION_NOT_FOUND = 11
    TABLE_COLUMN_NOT_FOUND = 12
    INVALID_INPUT = 13
    CONCURRENT_MODIFICATION = 14
    PERMISSION_DENIED = 15
    UNAUTHENTICATED = 16
    SERVICE_UNAVAILABLE = 17
    INTERNAL = 18
    INVALID_TABLE_STATE = 19
    TABLE_SCHEMA_VALIDATION_ERROR = 20


class LanceNamespaceError(Exception):
    """Base exception for all Lance Namespace errors.

    Attributes
    ----------
    code : ErrorCode
        The error code identifying the error type.
    """

    code: ErrorCode = ErrorCode.INTERNAL

    def __init__(self, message: str):
        super().__init__(message)


class UnsupportedOperationError(LanceNamespaceError):
    """Raised when an operation is not supported by the backend."""

    code = ErrorCode.UNSUPPORTED


class NamespaceNotFoundError(LanceNamespaceError):
    """Raised when the specified namespace does not exist."""

    code = ErrorCode.NAMESPACE_NOT_FOUND


class NamespaceAlreadyExistsError(LanceNamespaceError):
    """Raised when a namespace with the specified name already exists."""

    code = ErrorCode.NAMESPACE_ALREADY_EXISTS


class NamespaceNotEmptyError(LanceNamespaceError):
    """Raised when trying to drop a namespace that contains children."""

    code = ErrorCode.NAMESPACE_NOT_EMPTY


class TableNotFoundError(LanceNamespaceError):
    """Raised when the specified table does not exist."""

    code = ErrorCode.TABLE_NOT_FOUND


class TableAlreadyExistsError(LanceNamespaceError):
    """Raised when a table with the specified name already exists."""

    code = ErrorCode.TABLE_ALREADY_EXISTS


class TableIndexNotFoundError(LanceNamespaceError):
    """Raised when the specified table index does not exist."""

    code = ErrorCode.TABLE_INDEX_NOT_FOUND


class TableIndexAlreadyExistsError(LanceNamespaceError):
    """Raised when a table index with the specified name already exists."""

    code = ErrorCode.TABLE_INDEX_ALREADY_EXISTS


class TableTagNotFoundError(LanceNamespaceError):
    """Raised when the specified table tag does not exist."""

    code = ErrorCode.TABLE_TAG_NOT_FOUND


class TableTagAlreadyExistsError(LanceNamespaceError):
    """Raised when a table tag with the specified name already exists."""

    code = ErrorCode.TABLE_TAG_ALREADY_EXISTS


class TransactionNotFoundError(LanceNamespaceError):
    """Raised when the specified transaction does not exist."""

    code = ErrorCode.TRANSACTION_NOT_FOUND


class TableVersionNotFoundError(LanceNamespaceError):
    """Raised when the specified table version does not exist."""

    code = ErrorCode.TABLE_VERSION_NOT_FOUND


class TableColumnNotFoundError(LanceNamespaceError):
    """Raised when the specified table column does not exist."""

    code = ErrorCode.TABLE_COLUMN_NOT_FOUND


class InvalidInputError(LanceNamespaceError):
    """Raised when the request contains invalid parameters."""

    code = ErrorCode.INVALID_INPUT


class ConcurrentModificationError(LanceNamespaceError):
    """Raised when an optimistic concurrency conflict occurs."""

    code = ErrorCode.CONCURRENT_MODIFICATION


class PermissionDeniedError(LanceNamespaceError):
    """Raised when the user lacks permission for the operation."""

    code = ErrorCode.PERMISSION_DENIED


class UnauthenticatedError(LanceNamespaceError):
    """Raised when authentication credentials are missing or invalid."""

    code = ErrorCode.UNAUTHENTICATED


class ServiceUnavailableError(LanceNamespaceError):
    """Raised when the service is temporarily unavailable."""

    code = ErrorCode.SERVICE_UNAVAILABLE


class InternalError(LanceNamespaceError):
    """Raised for unexpected internal errors."""

    code = ErrorCode.INTERNAL


class InvalidTableStateError(LanceNamespaceError):
    """Raised when the table is in an invalid state for the operation."""

    code = ErrorCode.INVALID_TABLE_STATE


class TableSchemaValidationError(LanceNamespaceError):
    """Raised when table schema validation fails."""

    code = ErrorCode.TABLE_SCHEMA_VALIDATION_ERROR


# Mapping from error code to exception class
_ERROR_CODE_TO_EXCEPTION: Dict[ErrorCode, Type[LanceNamespaceError]] = {
    ErrorCode.UNSUPPORTED: UnsupportedOperationError,
    ErrorCode.NAMESPACE_NOT_FOUND: NamespaceNotFoundError,
    ErrorCode.NAMESPACE_ALREADY_EXISTS: NamespaceAlreadyExistsError,
    ErrorCode.NAMESPACE_NOT_EMPTY: NamespaceNotEmptyError,
    ErrorCode.TABLE_NOT_FOUND: TableNotFoundError,
    ErrorCode.TABLE_ALREADY_EXISTS: TableAlreadyExistsError,
    ErrorCode.TABLE_INDEX_NOT_FOUND: TableIndexNotFoundError,
    ErrorCode.TABLE_INDEX_ALREADY_EXISTS: TableIndexAlreadyExistsError,
    ErrorCode.TABLE_TAG_NOT_FOUND: TableTagNotFoundError,
    ErrorCode.TABLE_TAG_ALREADY_EXISTS: TableTagAlreadyExistsError,
    ErrorCode.TRANSACTION_NOT_FOUND: TransactionNotFoundError,
    ErrorCode.TABLE_VERSION_NOT_FOUND: TableVersionNotFoundError,
    ErrorCode.TABLE_COLUMN_NOT_FOUND: TableColumnNotFoundError,
    ErrorCode.INVALID_INPUT: InvalidInputError,
    ErrorCode.CONCURRENT_MODIFICATION: ConcurrentModificationError,
    ErrorCode.PERMISSION_DENIED: PermissionDeniedError,
    ErrorCode.UNAUTHENTICATED: UnauthenticatedError,
    ErrorCode.SERVICE_UNAVAILABLE: ServiceUnavailableError,
    ErrorCode.INTERNAL: InternalError,
    ErrorCode.INVALID_TABLE_STATE: InvalidTableStateError,
    ErrorCode.TABLE_SCHEMA_VALIDATION_ERROR: TableSchemaValidationError,
}


def from_error_code(code: int, message: str) -> LanceNamespaceError:
    """Create an exception from an error code.

    Parameters
    ----------
    code : int
        The numeric error code.
    message : str
        The error message.

    Returns
    -------
    LanceNamespaceError
        The appropriate exception type for the error code.

    Examples
    --------
    >>> err = from_error_code(4, "Table not found")
    >>> isinstance(err, TableNotFoundError)
    True
    >>> err.code
    <ErrorCode.TABLE_NOT_FOUND: 4>
    """
    try:
        error_code = ErrorCode(code)
        exc_class = _ERROR_CODE_TO_EXCEPTION.get(error_code, InternalError)
    except ValueError:
        exc_class = InternalError
    return exc_class(message)
