# New ports collection makefile for:	minivmac
# Date created:				9 November 2002
# Whom:					Marc Fonvieille <blackend@FreeBSD.org>
#
# $FreeBSD: ports/emulators/minivmac/Makefile,v 1.12 2012/11/17 05:57:21 svnexp Exp $
#

PORTNAME=	minivmac
PORTVERSION=	3.0.0
CATEGORIES=	emulators
MASTER_SITES=	SF
DISTFILES=	${PORTNAME}-${PORTVERSION}.src.tgz ${PORTNAME}-${PORTVERSION}.prj.tgz

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A miniature Macintosh emulator

WRKSRC=		${WRKDIR}/projects/bgclx86d

USE_XORG=	x11 xext
USE_GMAKE=	yes
CFLAGS+=	-I${LOCALBASE}/include
ALL_TARGET=	# nothing

PLIST_FILES=	bin/minivmac

post-patch:
	@${REINPLACE_CMD} -e 's|/usr/X11R6|${LOCALBASE}|' ${WRKSRC}/Makefile

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/minivmac ${PREFIX}/bin
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.mk>
