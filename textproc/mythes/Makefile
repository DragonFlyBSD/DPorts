# New ports collection makefile for:	mythes
# Date created:		2011-06-18
# Whom:			Baptiste Daroussin <bapt@FreeBSD.org>
#
# $FreeBSD: ports/textproc/mythes/Makefile,v 1.8 2012/11/17 06:02:03 svnexp Exp $
#

PORTNAME=	mythes
PORTVERSION=	1.2.3
CATEGORIES=	textproc
MASTER_SITES=	SF/hunspell/MyThes/${PORTVERSION}/
DIST_SUBDIR=	${PORTNAME}

MAINTAINER=	office@FreeBSD.org
COMMENT=	Simple thesaurus library

LIB_DEPENDS=	hunspell-1.3:${PORTSDIR}/textproc/hunspell

USE_GNOME=	gnomehack
USE_PKGCONFIG=	build
USE_LDCONFIG=	yes

GNU_CONFIGURE=	yes

.include <bsd.port.mk>
