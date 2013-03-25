# New ports collection makefile for:	mythes
# Date created:		2011-06-18
# Whom:			Baptiste Daroussin <bapt@FreeBSD.org>
#
# $FreeBSD: textproc/mythes/Makefile 314640 2013-03-19 13:04:30Z eadler $
#

PORTNAME=	mythes
PORTVERSION=	1.2.3
CATEGORIES=	textproc
MASTER_SITES=	SF/hunspell/MyThes/${PORTVERSION}/
DIST_SUBDIR=	${PORTNAME}

MAINTAINER=	office@FreeBSD.org
COMMENT=	Simple thesaurus library

LIB_DEPENDS=	hunspell-1.3:${PORTSDIR}/textproc/hunspell

USES=	pathfix
USE_PKGCONFIG=	build
USE_LDCONFIG=	yes

GNU_CONFIGURE=	yes

.include <bsd.port.mk>
