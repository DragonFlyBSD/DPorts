# Created by: Roman Shterenzon <roman@xpert.com>
# $FreeBSD: sysutils/mksunbootcd/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	mksunbootcd
PORTVERSION=	1.0
PORTREVISION=	1
CATEGORIES=	sysutils
MASTER_SITES=	${MASTER_SITE_NETBSD}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Makes ISO images suitable to boot on sparc systems

PLIST_FILES=	bin/mksunbootcd man/man1/${PORTNAME}.1.gz

GNU_CONFIGURE=	yes

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/mksunbootcd ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/${PORTNAME}.1 ${STAGEDIR}${PREFIX}/man/man1

.include <bsd.port.mk>
