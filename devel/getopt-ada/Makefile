PORTNAME=	getopt-ada
DISTVERSIONPREFIX=	v
DISTVERSION=	2.0.0
CATEGORIES=	devel
MASTER_SITES=	https://git.sr.ht/~${_SRHT_ACCOUNT}/${_SRHT_PROJECT}/archive/${DISTVERSIONFULL}${EXTRACT_SUFX}?dummy=/

MAINTAINER=	ada@FreeBSD.org
COMMENT=	Ada POSIX getopt(3) library
WWW=		https://git.sr.ht/~nytpu/getopt-ada

LICENSE=	MPL20
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	gprbuild>0:devel/gprbuild

USES=		ada:run

MAKE_CMD=	gprbuild

EXAMPLESDIR=	${PREFIX}/share/examples/${_ADA_UNIT}

OPTIONS_DEFINE=	EXAMPLES

_ADA_UNIT=		${PORTNAME:S|-ada||}
_GPRBUILD_ARGS=		-j${MAKE_JOBS_NUMBER} -p -vh -vP2 \
			-XGETOPT_BUILD_MODE=${WITH_DEBUG:Uoptimize:Ddebug}
_GPRINSTALL_ARGS=	--prefix='${STAGEDIR}${PREFIX}' -p -v
_SRHT_ACCOUNT=		nytpu
_SRHT_PROJECT=		${PORTNAME}

do-build:
	(cd ${WRKSRC} && \
		${SETENV} ${MAKE_ENV} ${MAKE_CMD} ${_GPRBUILD_ARGS} -P \
		${_ADA_UNIT})

do-install:
	(cd ${WRKSRC} && \
		${SETENV} ${MAKE_ENV} gprinstall ${_GPRINSTALL_ARGS} -P \
		${_ADA_UNIT})

post-install-EXAMPLES-on:
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/${_ADA_UNIT}_example.gpr \
		${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/src/example/example.adb \
		${STAGEDIR}${EXAMPLESDIR}

.include <bsd.port.mk>
