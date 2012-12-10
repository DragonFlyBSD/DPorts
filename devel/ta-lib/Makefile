# New ports collection makefile for:	ta-lib
# Date created:		Sun Jun 24 16:07:37 UTC 2007
# Whom:			Balwinder S "bsd" Dheeman <bsd@rubyforge.org>
#
# $FreeBSD: ports/devel/ta-lib/Makefile,v 1.8 2012/11/17 05:57:04 svnexp Exp $
#

PORTNAME=	ta-lib
PORTVERSION=	0.4.0
CATEGORIES=	devel finance
MASTER_SITES=	SF
DISTNAME=	${PORTNAME}-${DISTVERSION}-src

MAINTAINER=	bdheeman@gmail.com
COMMENT=	A UNIX, POSIX Library for Technical Analysis

WRKSRC=		${WRKDIR}/${PORTNAME}

USE_GMAKE=	yes
USE_AUTOTOOLS=	libtool
USE_LDCONFIG=	yes

post-patch:
	@${FIND} ${WRKSRC} -name "Makefile.in" | ${XARGS} ${REINPLACE_CMD} -e \
		's|^LIBTOOL[ ]*=.*|LIBTOOL=${LIBTOOL}|g'

.include <bsd.port.mk>
