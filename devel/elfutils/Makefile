PORTNAME=	elfutils
DISTVERSION=	0.187
PORTREVISION=	3
CATEGORIES=	devel
MASTER_SITES=	https://sourceware.org/elfutils/ftp/${PORTVERSION}/

MAINTAINER=	cem@FreeBSD.org
COMMENT=	Library for manipulating ELF files and partial implementation of binutils
WWW=		https://sourceware.org/elfutils/

LICENSE=	LGPL3 GPLv2+ GPLv3+
LICENSE_COMB=	multi
LICENSE_FILE_GPLv3+ =	${WRKSRC}/COPYING
LICENSE_FILE_GPLv2+ =	${WRKSRC}/COPYING-GPLV2
LICENSE_FILE_LGPL3=	${WRKSRC}/COPYING-LGPLV3

BROKEN_armv6=		fails to build: fails to compile i386_disasm.c

LIB_DEPENDS=	libargp.so:devel/argp-standalone \
		libcurl.so:ftp/curl
BUILD_DEPENDS= gnulib>=0:devel/gnulib gnustat:sysutils/coreutils bash>0:shells/bash

PLIST_SUB=	VERSION=${PORTVERSION}

# Although the following line is synonymous to USES=localbase
# it breaks the build
CFLAGS+=	-I${LOCALBASE}/include \
		-I${LOCALBASE}/share/gnulib/lib \
		-DFREEBSD_HAS_MEMPCPY
LDFLAGS+=	${LOCALBASE}/lib/libargp.so \
		${LOCALBASE}/lib/libintl.so

OPTIONS_DEFINE=	MANPAGES NLS
OPTIONS_DEFAULT=	MANPAGES
OPTIONS_SUB=	yes

NLS_USES=	gettext
NLS_USES_OFF=	gettext  # used anyway
NLS_CONFIGURE_ENABLE=	nls

USES=		autoreconf cpe gmake libtool pkgconfig tar:bzip2
CPE_VENDOR=	${PORTNAME}_project
GNU_CONFIGURE=	yes
GNU_CONFIGURE_MANPREFIX=${PREFIX}/share
USE_LDCONFIG=	yes

CFLAGS+=	-Wno-error -Wno-format-nonliteral
CFLAGS+=	-Wno-null-dereference -Wno-unused-value

# Avoid conflict with binutils / elftoolchain programs with the same names:
CONFIGURE_ARGS+=	--program-prefix=eu-
# Disable debuginfod until option support can be added:
CONFIGURE_ARGS+=	--disable-debuginfod

CFLAGS+= -Wno-error=cast-function-type -O1
CFLAGS+= -std=gnu17
LDFLAGS+= -Wl,-rpath,${LOCALBASE}/lib/elfutils
DPMSG= ${WRKDIR}/dports-message
PKGMESSAGE= ${DPMSG}
pre-configure:
	@${CP} -a \
	    ${LOCALBASE}/share/gnulib/lib/obstack.c \
	    ${LOCALBASE}/share/gnulib/lib/obstack_printf.c \
	    ${LOCALBASE}/share/gnulib/lib/libc-config.h \
	    ${LOCALBASE}/share/gnulib/lib/cdefs.h \
	    ${LOCALBASE}/share/gnulib/lib/exitfail.h \
	    ${LOCALBASE}/share/gnulib/lib/exitfail.c \
	    ${LOCALBASE}/share/gnulib/lib/gettext.h \
	    ${WRKSRC}/lib
	@${SED} -e 's|_GL_ATTRIBUTE_PURE|__attribute__ ((__pure__))|g' \
	    ${LOCALBASE}/share/gnulib/lib/obstack.in.h > \
	    ${WRKSRC}/lib/obstack.h
	if ! echo '#include <stdckdint.h>' | ${CC} -E - >/dev/null 2>&1; then \
	  ${PRINTF} '#ifndef _GL_STDCKDINT_H\n#define _GL_STDCKDINT_H\n/* DragonFly shim for C23 <stdckdint.h> via compiler builtins. */\n#include <stddef.h>\n#define ckd_add(_R,_A,_B) __builtin_add_overflow((_A),(_B),(_R))\n#define ckd_sub(_R,_A,_B) __builtin_sub_overflow((_A),(_B),(_R))\n#define ckd_mul(_R,_A,_B) __builtin_mul_overflow((_A),(_B),(_R))\n#endif\n' > ${WRKSRC}/lib/stdckdint.h; \
	fi

post-configure: # remove -Werror since it causes build failures
	@${FIND} ${WRKSRC} -name Makefile | ${XARGS} ${REINPLACE_CMD} -e 's| -Werror| |; s|-Werror ||'

dfly-patch:
	@${ECHO} "[" > ${DPMSG}
	@${ECHO} "{ type: install" >> ${DPMSG}
	@${ECHO} "  message: <<EOM" >> ${DPMSG}
	@${ECHO} "To use this port add:" >> ${DPMSG}
	@${ECHO} "  CFLAGS+= -I${LOCALBASE}/include/elfutils" >> ${DPMSG}
	@${ECHO} "           -I${LOCALBASE}/include" >> ${DPMSG}
	@${ECHO} "  LDFLAGS+= -L${LOCALBASE}/lib/elfutils" >> ${DPMSG}
	@${ECHO} "            -Wl,-rpath,${LOCALBASE}/lib/elfutils" >> ${DPMSG}
	@${ECHO} "EOM" >> ${DPMSG}
	@${ECHO} "}" >> ${DPMSG}
	@${ECHO} "]" >> ${DPMSG}
	${REINPLACE_CMD} -e "s@Libs: @&-L${LOCALBASE}/lib/elfutils -Wl,-rpath,${LOCALBASE}/lib/elfutils @g" \
			 -e "s@Cflags: @&-I${LOCALBASE}/include/elfutils @g" \
			 -e '/Requires: libelf =/d' \
		${WRKSRC}/config/libelf.pc.in ${WRKSRC}/config/libdw.pc.in
	${REINPLACE_CMD} -e 's@dwarfcfi_LDADD =@& $$(libeu) @g' \
			 -e 's@next_cfi_LDADD =@& $$(libeu) @g' \
		${WRKSRC}/tests/Makefile.am
	${REINPLACE_CMD} -e 's@wc --lines@wc -l@g' \
		${WRKSRC}/tests/run-strip-test.sh
	${REINPLACE_CMD} -e 's@ /bin/sh@/usr/local/bin/bash@g' \
			 -e 's@ /bin/bash@/usr/local/bin/bash@g' \
			 -e 's@stat -c@gnustat -c@g' \
		${WRKSRC}/tests/*.sh

dfly-install:
	${MV} -v ${STAGEDIR}${PREFIX}/include/*.h \
		${STAGEDIR}${PREFIX}/include/elfutils/
	${MKDIR} ${STAGEDIR}${PREFIX}/lib/elfutils
	${MV} -v ${STAGEDIR}${PREFIX}/lib/lib* \
		${STAGEDIR}${PREFIX}/lib/elfutils/
	${MV} -v ${STAGEDIR}${PREFIX}/libdata/pkgconfig/libelf.pc \
		${STAGEDIR}${PREFIX}/libdata/pkgconfig/elfutils.pc

.include <bsd.port.mk>
