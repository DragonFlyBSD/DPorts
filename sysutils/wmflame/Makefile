# Created by: Alexey Dokuchaev <danfe@regency.nsu.ru>
# $FreeBSD: ports/sysutils/wmflame/Makefile,v 1.10 2012/11/17 06:01:50 svnexp Exp $

PORTNAME=	wmflame
PORTVERSION=	0.60
PORTREVISION=	3
CATEGORIES=	sysutils
MASTER_SITES=	AFTERSTEP/stable/rpms/misc-tarballs \
		http://web.novalis.org/programs/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Dockapp that shows the load average as a flame

LICENSE=	GPLv2

USE_GMAKE=	yes
USE_XORG=	x11 xpm

PLIST_FILES=	bin/wmflame

WRKSRC=		${WRKDIR}/wmflame.app/${PORTNAME}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/wmflame ${PREFIX}/bin

.include <bsd.port.mk>
