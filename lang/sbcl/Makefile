# Created by: Vasily Postnicov <shamaz.mazum@gmail.com>
# $DragonFlyBSD$

PORTNAME=	sbcl
PORTVERSION=	1.2.2
PORTEPOCH=	1
CATEGORIES=	lang lisp
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTVERSION}
DISTFILES=	${PORTNAME}-${PORTVERSION}-source${EXTRACT_SUFX}

MAINTAINER=	whoever@example.com
COMMENT=	Common Lisp development system derived from the CMU CL system

BUILD_DEPENDS=	${LOCALBASE}/bin/clisp:${PORTSDIR}/lang/clisp
LIB_DEPENDS=	libgmp.so:${PORTSDIR}/math/gmp \
		libmpfr.so:${PORTSDIR}/math/mpfr

USES=		gmake tar:bzip2

MAN1=		sbcl.1
ONLY_FOR_ARCHS=	i386 amd64
ONLY_FOR_ARCHS_REASON=	is a native code compiler, and has not been ported to\
this architecture yet
SBCL_HOME=	${PREFIX}/lib/sbcl

.include <bsd.port.options.mk>

.if ${ARCH} == "i386"
DYNAMIC_SPACE_SIZE?=	512
.else
DYNAMIC_SPACE_SIZE?=	1024
.endif

MAKE_SH_ARGS?=	--prefix=${PREFIX} --dynamic-space-size=${DYNAMIC_SPACE_SIZE} \
--with-sb-core-compression --with-sb-qshow --xc-host="clisp -on-error abort -ansi"
NM?=	/usr/bin/nm
NMFLAGS?=	-gp

pre-everything::
	@${ECHO_MSG}
	@${ECHO_MSG} "---------------------------------------------------------"
	@${ECHO_MSG} "You might need to adjust memory limits in order to"
	@${ECHO_MSG} "build SBCL."
	@${ECHO_MSG}
	@${ECHO_MSG} "You can use the DYNAMIC_SPACE_SIZE knob to change the size"
	@${ECHO_MSG} "of SBCL dynamically-allocated memory."
	@${ECHO_MSG} "---------------------------------------------------------"
	@${ECHO_MSG}

do-build:
	@${FIND} ${WRKSRC} \( -name '*.orig' -o -name '*.bak' \) -delete
	@(cd ${WRKSRC} && ${SETENV} CC="${CC}" ${SH} make.sh ${MAKE_SH_ARGS})
	@${RM} -rf ${WRKSRC}/contrib/sb-cover/test-output
	@${REINPLACE_CMD} -E -e \
		's|\$$Date\$$|'"`${SETENV} LANG=C /bin/date '+%B %d, %Y'`|g" \
		${WRKSRC}/doc/sbcl.1

do-install:
	@${MKDIR} ${STAGEDIR}${SBCL_HOME}/
	@${INSTALL_PROGRAM} ${WRKSRC}/src/runtime/sbcl ${STAGEDIR}${PREFIX}/bin/
	@${INSTALL_DATA} ${WRKSRC}/output/sbcl.core ${STAGEDIR}${SBCL_HOME}/
	@${MKDIR} ${STAGEDIR}${SBCL_HOME}/contrib
	@${INSTALL_DATA} ${WRKSRC}/obj/sbcl-home/contrib/*fasl ${STAGEDIR}${SBCL_HOME}/contrib/
	@${INSTALL_DATA} ${WRKSRC}/obj/sbcl-home/contrib/*.asd ${STAGEDIR}${SBCL_HOME}/contrib/
	@${INSTALL_MAN} ${WRKSRC}/doc/sbcl.1 ${STAGEDIR}${MAN1PREFIX}/man/man1
	@${MKDIR} ${STAGEDIR}${SBCL_HOME}/site-systems
	@${TOUCH} ${STAGEDIR}${SBCL_HOME}/site-systems/.keep_me

check regression-test test: build
	(cd ${WRKSRC}/tests && ${SH} run-tests.sh)

.include <bsd.port.mk>
