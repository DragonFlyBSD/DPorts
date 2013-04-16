# Created by: Alexey Dokuchaev <danfe@regency.nsu.ru>
# $FreeBSD: misc/wmjulia/Makefile 315240 2013-03-25 18:44:20Z eadler $

PORTNAME=	wmjulia
PORTVERSION=	0.40
PORTREVISION=	5
CATEGORIES=	misc windowmaker afterstep
MASTER_SITES=	http://web.novalis.org/programs/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Dockapp that creates an animated Julia set

PLIST_FILES=	bin/wmjulia
WRKSRC=	${WRKDIR}/${PORTNAME}.app/${PORTNAME}
USE_GMAKE=	yes
USE_XORG=	xpm xext

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin

.include <bsd.port.mk>
