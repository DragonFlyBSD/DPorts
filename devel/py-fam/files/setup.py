# $FreeBSD: head/devel/py-fam/files/setup.py 340872 2014-01-24 00:14:07Z mat $
from distutils.core import setup, Extension
import os
LOCALBASE = os.environ.get('LOCALBASE', '/usr/local')
setup(name = "fam", ext_modules = [
	Extension("_fam", ["_fam.c"],
		include_dirs=[LOCALBASE + '/include'],
		libraries=['fam'], library_dirs=[LOCALBASE + '/lib'],
	)]
)
