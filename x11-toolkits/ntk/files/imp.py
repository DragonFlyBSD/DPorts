"""Compatibility shim for the 'imp' module removed in Python 3.12.

The bundled waf waflib still imports imp; on Python 3.12 we provide the
few attributes that waflib uses (new_module, get_tag, load_source).
On older versions we re-export the real built-in imp module.
"""

import importlib.util
import sys
import types


def _provide_shim():
    def new_module(name):
        return types.ModuleType(name)

    def get_tag():
        return sys.implementation.cache_tag

    def load_source(name, pathname):
        spec = importlib.util.spec_from_file_location(name, pathname)
        if spec is None or spec.loader is None:
            raise ImportError("cannot load %r from %r" % (name, pathname))
        mod = importlib.util.module_from_spec(spec)
        spec.loader.exec_module(mod)
        return mod

    globals().update({
        'new_module': new_module,
        'get_tag': get_tag,
        'load_source': load_source,
    })


if sys.version_info < (3, 12):
    # Re-export the real built-in imp module instead of shadowing it.
    _shim = sys.modules['imp']
    del sys.modules['imp']
    try:
        import imp as _real_imp
    except Exception:
        _provide_shim()
        sys.modules['imp'] = sys.modules.get('imp', _shim)
    else:
        globals().update(_real_imp.__dict__)
        sys.modules['imp'] = _real_imp
else:
    _provide_shim()
