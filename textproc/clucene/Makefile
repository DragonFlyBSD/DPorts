# New ports collection makefile for:	clucene
# Date created:		2006-08-09
# Whom:			Cheng-Lung Sung <clsung@FreeBSD.org>
#
# $FreeBSD: ports/textproc/clucene/Makefile,v 1.13 2012/11/17 06:01:53 svnexp Exp $
#

PORTNAME=	clucene
PORTVERSION=	0.9.21b
CATEGORIES=	textproc
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}-core-stable/${PORTVERSION}
DISTNAME=	${PORTNAME}-core-${PORTVERSION}

MAINTAINER=	clsung@FreeBSD.org
COMMENT=	CLucene is a C++ port of Lucene

GNU_CONFIGURE=	yes
USE_BZIP2=	yes
USE_LDCONFIG=	yes
USE_GMAKE=	yes
USE_AUTOTOOLS=	libtool

.include <bsd.port.pre.mk>

.if defined(WITH_ASCII_SUPPORT)
CONFIGURE_ARGS+=	--enable-ascii
.endif

.include <bsd.port.post.mk>
