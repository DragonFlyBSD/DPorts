# Created by: Ed Schouten <ed@FreeBSD.org>
# $FreeBSD: sysutils/hidesvn/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	hidesvn
PORTVERSION=	1.2
CATEGORIES=	sysutils
MASTER_SITES=	http://80386.nl/projects/${PORTNAME}/distfiles/

MAINTAINER=	ed@FreeBSD.org
COMMENT=	Utility that uses LD_PRELOAD to hide .svn directories

MAKEFILE=	BSDmakefile

PLIST_FILES=	bin/${PORTNAME} lib/lib${PORTNAME}.so
MAN1=		${PORTNAME}.1

USE_LDCONFIG=	yes
USE_XZ=		yes

NO_STAGE=	yes
post-patch:
	${REINPLACE_CMD} 's|/usr/local|${PREFIX}|' ${WRKSRC}/${PORTNAME}.sh

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/${PORTNAME}.sh ${PREFIX}/bin/${PORTNAME}
	${INSTALL_DATA} ${WRKSRC}/lib${PORTNAME}.so ${PREFIX}/lib
	${INSTALL_DATA} ${WRKSRC}/${PORTNAME}.1 ${PREFIX}/man/man1

.include <bsd.port.mk>
