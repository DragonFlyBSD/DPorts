# New ports collection makefile for:	9box
# Date created:		Fri Mar 21 10:10:48 EST 2003
# Whom:			Serge Gagnon <gagnon__s@videotron.ca>
#
# $FreeBSD: ports/x11/9box/Makefile,v 1.12 2012/11/17 06:03:14 svnexp Exp $
#

PORTNAME=	9box
PORTVERSION=	0.2.1
PORTREVISION=	3
CATEGORIES=	x11
MASTER_SITES=	${MASTER_SITE_LOCAL}
MASTER_SITE_SUBDIR=	thierry

MAINTAINER=	ports@FreeBSD.org
COMMENT=	9box can "pack" windows inside itself

PLIST_FILES=	bin/9box
USE_GMAKE=	yes
USE_XORG=	xbitmaps x11 xt

BUILD_WRKSRC=	${WRKSRC}/src

post-patch:
	@${REINPLACE_CMD} -e 's|%%LOCALBASE%%|${LOCALBASE}|g; \
		s|%%CC%%|${CC}|g' \
		${WRKSRC}/src/Makefile

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/src/9box ${PREFIX}/bin

.include <bsd.port.mk>
