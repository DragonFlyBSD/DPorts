# Created by: Ralf S. Engelschall
# $FreeBSD: devel/str/Makefile 327726 2013-09-20 17:17:44Z bapt $

PORTNAME=	str
PORTVERSION=	0.9.12
CATEGORIES=	devel
MASTER_SITES=	${MASTER_SITE_OSSP}
MASTER_SITE_SUBDIR=	lib/${PORTNAME}

MAINTAINER=	vd@FreeBSD.org
COMMENT=	Generic String Library

GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes

MAN1=		str-config.1
MAN3=		str.3

NO_STAGE=	yes
post-build:
	@${ECHO_MSG} "===>  Use 'make check' to run a quick test suite."

check:	build
	@(cd ${WRKSRC} && ${SETENV} ${MAKE_ENV} ${MAKE} ${MAKE_FLAGS} ${MAKEFILE} ${MAKE_ARGS} test)

.include <bsd.port.mk>
