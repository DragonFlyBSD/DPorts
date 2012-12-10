# New ports collection makefile for:	celt
# Date created:		2009-02-11
# Whom:			Edward Tomasz Napierala <trasz@FreeBSD.org>
#
# $FreeBSD: ports/audio/celt/Makefile,v 1.12 2012/11/17 05:54:29 svnexp Exp $
#

PORTNAME=	celt
PORTVERSION=	0.11.3
PORTREVISION=	1
CATEGORIES=	audio
MASTER_SITES=	http://downloads.us.xiph.org/releases/celt/

MAINTAINER=	multimedia@FreeBSD.org
COMMENT=	The CELT ultra-low delay audio codec

LICENSE=	BSD
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	ogg:${PORTSDIR}/audio/libogg

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--with-ogg=${LOCALBASE}
USE_GMAKE=	yes
USE_LDCONFIG=	yes
USE_GNOME=	gnomehack

.include <bsd.port.mk>
