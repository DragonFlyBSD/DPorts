# $FreeBSD: textproc/mythes/Makefile 316355 2013-04-23 14:20:25Z bapt $

PORTNAME=	mythes
PORTVERSION=	1.2.3
CATEGORIES=	textproc
MASTER_SITES=	SF/hunspell/MyThes/${PORTVERSION}/
DIST_SUBDIR=	${PORTNAME}

MAINTAINER=	office@FreeBSD.org
COMMENT=	Simple thesaurus library

LIB_DEPENDS=	hunspell-1.3:${PORTSDIR}/textproc/hunspell

USES=	pathfix pkgconfig
USE_LDCONFIG=	yes

GNU_CONFIGURE=	yes

.include <bsd.port.mk>
