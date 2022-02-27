# zrj

PORTNAME=	python
PYTHON_PORTVERSION=    2.7.18
PORTVERSION=	${PYTHON_PORTVERSION}
PORTREVISION=	1
CATEGORIES=	lang python
MASTER_SITES=	PYTHON/ftp/python/${PORTVERSION}
PKGNAMESUFFIX=	-legacy
DISTNAME=	Python-${PORTVERSION}
DIST_SUBDIR=	python

MAINTAINER=	zrj@ef.irc
COMMENT=	Interpreted object-oriented programming language (forever edition)

LICENSE=	PSFL

USES=		cpe ncurses pathfix pkgconfig readline shebangfix ssl tar:xz
PATHFIX_MAKEFILEIN=	Makefile.pre.in
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
python_CMD=	${PREFIX}/bin/python-legacy
SHEBANG_FILES=	Lib/lib2to3/pgen2/*.py Lib/lib2to3/tests/*.py Lib/lib2to3/tests/data/*.py \
		Lib/idlelib/*.py Lib/encodings/*.py Lib/test/*.py Lib/UserString.py \
		Lib/base64.py Lib/cProfile.py Lib/keyword.py Lib/mimify.py Lib/pdb.py \
		Lib/platform.py Lib/profile.py Lib/pydoc.py Lib/quopri.py Lib/smtpd.py \
		Lib/smtplib.py Lib/symbol.py Lib/tabnanny.py Lib/timeit.py Lib/trace.py \
		Lib/uu.py Lib/webbrowser.py

CONFIGURE_ARGS+=	--enable-shared
CONFIGURE_ENV+=		ac_cv_opt_olimit_ok=no OPT=""				# Null out OPT to respect user CFLAGS and remove optimizations

INSTALL_TARGET=		altinstall						# Don't want cloberring of unprefixed files

TEST_TARGET=		buildbottest
TEST_ARGS=		TESTOPTS=-j${MAKE_JOBS_NUMBER}

MAKE_ARGS+=		INSTALL_SHARED="${INSTALL_LIB}"				# Strip shared library

PLIST_SUB=		ABI=${ABIFLAGS} \
			PORTVERSION=${PORTVERSION} \
			OSMAJOR=${DFLYVERSION:C/([0-9]*)[0-9]{5}/\1/}		# For plat-freebsd* in pkg-plist. https://bugs.python.org/issue19554

OPTIONS_DEFINE=		DEBUG IPV6 LIBFFI NLS PYMALLOC THREADS
OPTIONS_DEFAULT=	LIBFFI PYMALLOC THREADS UCS4
OPTIONS_SINGLE=		UNICODE
OPTIONS_SINGLE_UNICODE=	UCS2 UCS4
OPTIONS_SUB=		yes
OPTIONS_DEFINE+=	EXPAT
OPTIONS_DEFAULT+=	EXPAT

LIBFFI_DESC=	Use libffi from ports instead of bundled version
NLS_DESC=	Enable gettext support for the locale module
UCS2_DESC=	Enable UCS2 Unicode Strings
UCS4_DESC=	Enable UCS4 Unicode Strings
PYMALLOC_DESC=	Enable specialized mallocs
EXPAT_DESC=	Use expat from ports instead of bundled version

EXPAT_CONFIGURE_ON=	--with-system-expat
DEBUG_CONFIGURE_WITH=	pydebug
IPV6_CONFIGURE_ENABLE=	ipv6
LIBFFI_CONFIGURE_ON=	--with-system-ffi
LIBFFI_LIB_DEPENDS=	libffi.so:devel/libffi
EXPAT_LIB_DEPENDS=	libexpat.so:textproc/expat2

CONFIGURE_ARGS+=	ac_cv_lib_intl_textdomain=no ac_cv_header_libintl_h=no

PYMALLOC_CONFIGURE_WITH=	pymalloc

THREADS_CONFIGURE_WITH=	threads
THREADS_LDFLAGS=	-lpthread

UCS2_CONFIGURE_ON=	--enable-unicode=ucs2
UCS4_CONFIGURE_ON=	--enable-unicode=ucs4

.include <bsd.port.options.mk>

post-patch:
	${REINPLACE_CMD} -e 's|/usr/local/bin/python|${python_CMD}|' \
		${WRKSRC}/Lib/cgi.py
	${REINPLACE_CMD} -e \
		's,/usr/doc/python-docs-,${PREFIX}/share/doc/python,g' \
		${PATCH_WRKSRC}/Lib/pydoc.py
	${REINPLACE_CMD} -e 's/disabled_module_list =[^]]*/&, "nis"/' \
		${WRKSRC}/setup.py
	${REINPLACE_CMD} -e 's|`uname -r`|"${_OSRELEASE}"|g' \
		${WRKSRC}/configure
	${REINPLACE_CMD} -e "s@/usr/bin/env python2@${python_CMD}@g" \
		${WRKSRC}/Lib/ensurepip/__init__.py \
		${WRKSRC}/Tools/scripts/checkpip.py
	${REINPLACE_CMD} -e "s@PACKAGE_VERSION='2.7'@PACKAGE_VERSION='-legacy'@g" \
			 -e "s@PACKAGE_STRING='python 2.7'@PACKAGE_STRING='python legacy'@g" \
			 -e "s@VERSION=2.7@VERSION=-legacy@g" \
			 -e "s@2\.7@legacy@g" \
			 -e 's@lpython$$(VERSION)@lpython-legacy@g' \
		${WRKSRC}/configure \
		${WRKSRC}/configure.ac \
		${WRKSRC}/Demo/embed/Makefile
	${REINPLACE_CMD} -e "s@fullversion = @& '-legacy' #@g" \
		${WRKSRC}/setup.py
	${REINPLACE_CMD} -e "s@pyver = @& '-legacy' #@g" \
			 -e "s@'-lpython' + pyver@'-lpython-legacy'@g" \
		${WRKSRC}/Misc/python-config.in
	${REINPLACE_CMD} -e 's@"-q"@""@g' \
			 -e 's@libpython$$(VERSION)@libpython-legacy@g' \
		${WRKSRC}/Makefile.pre.in
	${REINPLACE_CMD} -e "s,@VERSION@,-legacy,g" \
		${WRKSRC}/Misc/python.pc.in
	${REINPLACE_CMD} -e "s@ext.libraries \+ \[pythonlib\]@ext.libraries + ['python-legacy']@g" \
		${WRKSRC}/Lib/distutils/command/build_ext.py
	${REINPLACE_CMD} -e 's@$$py_version_short@-legacy@g' \
		${WRKSRC}/Lib/distutils/command/install.py
	${REINPLACE_CMD} -e 's@python2.7@python-legacy@g' \
		${WRKSRC}/Lib/test/test_xpickle.py \
		${WRKSRC}/Lib/platform.py
	${REINPLACE_CMD} -e "s@_PY_VERSION_SHORT =@& '-legacy' #@g" \
			 -e "s@_PY_VERSION_SHORT_NO_DOT =@& '-legacy' #@g" \
			 -e "s@= _PY_VERSION_SHORT@= '-legacy' #@g" \
			 -e "s@return _PY_VERSION_SHORT@return '-legacy'@g" \
			 -e "s@{py_version_short}@-legacy@g" \
		${WRKSRC}/Lib/sysconfig.py
	${REINPLACE_CMD} -e "s@return sys.version@return '-legacy' #&@g" \
		${WRKSRC}/Lib/distutils/sysconfig.py
	${REINPLACE_CMD} -e 's@sys.version\[:3\]@"-legacy"@g' \
		${WRKSRC}/Lib/site.py

post-install:
	for i in ${STAGEDIR}${PREFIX}/lib/python-legacy/lib-dynload/*.so; do \
		${STRIP_CMD} $$i; done						# Strip shared extensions

.include <bsd.port.mk>
