# Created by: Ralf S. Engelschall
# $FreeBSD: devel/mm/Makefile 335493 2013-12-02 14:28:01Z sunpoet $

PORTNAME=	mm
PORTVERSION=	1.4.2
CATEGORIES=	devel
MASTER_SITES=	${MASTER_SITE_OSSP}
MASTER_SITE_SUBDIR=	lib/${PORTNAME}

MAINTAINER=	rodrigo@bebik.net
COMMENT=	Shared memory allocation library for pre-forked process models

LICENSE=	BSD

USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes

post-build:
	@${ECHO_MSG} "===>  Use 'make test' to run a quick test suite."

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/libmm.so

test:
	@cd ${WRKSRC} && ${MAKE} test

.include <bsd.port.mk>
