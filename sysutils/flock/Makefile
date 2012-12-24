# New ports collection makefile for:	flock
# Date created:				26 May 2011
# Whom:					Andrey Zonov <andrey@zonov.org>
#
# $FreeBSD: ports/sysutils/flock/Makefile,v 1.12 2012/12/11 11:34:13 svnexp Exp $
#

PORTNAME=	flock
PORTVERSION=	2.19
CATEGORIES=	sysutils
MASTER_SITES=	http://www.zonov.org/${PORTNAME}/

MAINTAINER=	zont@FreeBSD.org
COMMENT=	Manage locks from shell scripts

PLIST_FILES=	bin/${PORTNAME}
MAN1=		${PORTNAME}.1

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/${MAN1} ${MANPREFIX}/man/man1

.include <bsd.port.mk>
