# Created by: Yukihiro Nakai <nakai@FreeBSD.org>
# $FreeBSD: emulators/gbe/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	gbe
PORTVERSION=	0.0.22
PORTREVISION=	3
CATEGORIES=	emulators
MASTER_SITES=	http://www.zophar.net/fileuploads/1/468dreaj/ \
		ftp://ftp.canadatux.org/videogames/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Nintendo GameBoy(tm) emulator with GNU source code

WRKSRC=		${WRKDIR}/${PORTNAME}

USE_XORG=	x11

PLIST_FILES=	bin/gbe

CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

NO_STAGE=	yes
do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/gbe ${PREFIX}/bin

.include <bsd.port.mk>
