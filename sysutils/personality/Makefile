# Created by: Andreas Klemm <andreas@FreeBSD.org>
# $FreeBSD: sysutils/personality/Makefile 327772 2013-09-20 23:05:58Z bapt $

PORTNAME=	personality
PORTVERSION=	1.0
CATEGORIES=	sysutils
DISTFILES=	# none

MAINTAINER=	ports@FreeBSD.org
COMMENT=	System configuration management utility to alter system personality

WRKSRC=		${WRKDIR}/src
NO_BUILD=	YES

NO_STAGE=	yes
do-extract:
	@ ${RM} -rf ${WRKDIR}
	@ ${MKDIR} ${WRKDIR}
	@ ${CP} -RP ${.CURDIR}/src ${WRKDIR}

MAN8=		personality.8
PLIST_FILES=	sbin/personality

do-install:
	@ ${INSTALL_SCRIPT} ${WRKSRC}/personality ${PREFIX}/sbin
	@ ${INSTALL_DATA} ${WRKSRC}/personality.8 ${PREFIX}/man/man8

post-install:
	@ ${CAT} ${.CURDIR}/pkg-message

.include <bsd.port.mk>
