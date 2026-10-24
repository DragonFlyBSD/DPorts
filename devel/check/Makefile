PORTNAME=	check
PORTVERSION=	0.15.2
PORTREVISION=	1
CATEGORIES=	devel
MASTER_SITES=	https://github.com/libcheck/check/releases/download/${PORTVERSION}/

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Unit test framework for C
WWW=		https://libcheck.github.io/check/

LICENSE=	LGPL21
LICENSE_FILE=	${WRKSRC}/COPYING.LESSER

USES=		libtool pkgconfig

CONFIGURE_ENV= ac_cv_path_AWK_PATH=${AWK} ac_cv_lib_rt_clock_gettime__timer_create__timer_settime__timer_delete=no
GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip
USE_LDCONFIG=	yes

INFO=		check

OPTIONS_DEFINE=	DOCS EXAMPLES

post-extract:
	@${REINPLACE_CMD} -e 's|timer_create|generic_timer_create|g' \
	    ${WRKSRC}/lib/libcompat.h \
	    ${WRKSRC}/lib/timer_create.c \
	    ${WRKSRC}/src/check_run.c \
	    ${WRKSRC}/src/check.c

.include <bsd.port.mk>
