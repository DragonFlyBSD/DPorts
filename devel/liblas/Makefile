# New ports collection makefile for:	liblas
# Date created:				21 June 2008
# Whom:					Wen Heping <wenheping@gmail.com>
# $FreeBSD: ports/devel/liblas/Makefile,v 1.4 2012/11/17 05:55:55 svnexp Exp $

PORTNAME=	liblas
PORTVERSION=	1.2.1
CATEGORIES=	devel
MASTER_SITES=	http://trac.liblas.org/raw-attachment/wiki/${PORTVERSION}/
DISTNAME=	${PORTNAME}-src-${PORTVERSION}

MAINTAINER=	wenheping@gmail.com
COMMENT=	A Library For Reading And Writing LAS-Format Data

#USE_BZIP2=	yes
GNU_CONFIGURE=	yes
USE_GMAKE=	yes
USE_LDCONFIG=	yes

WRKSRC=		${WRKDIR}/liblas-src-${PORTVERSION}

.include <bsd.port.mk>
