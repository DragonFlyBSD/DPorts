# New ports collection makefile for:   ttftot42
# Date created:        22 April 2001
# Whom:                Yukihiro Nakai <nakai@FreeBSD.org>
#
# $FreeBSD: ports/print/ttftot42/Makefile,v 1.11 2012/11/17 06:00:55 svnexp Exp $
#

PORTNAME=	ttftot42
PORTVERSION=	0.3.1
PORTREVISION=	1
CATEGORIES=	print
MASTER_SITES=	http://www.nih.at/ttftot42/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	TrueType to Type42 font converter

USE_FREETYPE=	yes
GNU_CONFIGURE=	yes

PLIST_FILES=	bin/ttftot42

CPPFLAGS+=	-I${LOCALBASE}/include/freetype1/freetype \
		-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

.include <bsd.port.mk>
