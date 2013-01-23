# New ports collection makefile for:	misterproper
# Date created:				12 December 2000
# Whom:					Maxim Sobolev <sobomax@FreeBSD.org>
#
# $FreeBSD: ports/misc/misterproper/Makefile,v 1.24 2012/11/17 05:59:42 svnexp Exp $
#

PORTNAME=	misterproper
PORTVERSION=	0.4
PORTREVISION=	10
CATEGORIES=	misc gnome
MASTER_SITES=	SF
#ftp://misterproper.sourceforge.net/pub/misterproper/releases/ \

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A GNOME application designed to manage cyclic tasks

USE_GNOME=	gnomehack gnomelibs gnomeprefix
USE_GMAKE=	yes
GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

.include <bsd.port.mk>
