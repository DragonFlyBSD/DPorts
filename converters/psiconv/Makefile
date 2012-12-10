# New ports collection makefile for:	libiconv
# Date created:				21 August 2001
# Whom:					Maxim Sobolev <sobomax@FreeBSD.org>
#
# $FreeBSD: ports/converters/psiconv/Makefile,v 1.20 2012/11/17 05:55:04 svnexp Exp $
#

PORTNAME=	psiconv
PORTVERSION=	0.9.8
PORTREVISION=	1
CATEGORIES=	converters devel
MASTER_SITES=	http://software.frodo.looijaard.name/psiconv/files/

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	A conversion utility to convert Psion 5(MX) files into other formats

USE_AUTOTOOLS=	libtool
USE_LDCONFIG=	yes
USE_GMAKE=	yes
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--with-imagemagick=no

MAN1=		psiconv.1 psiconv-config.1

.include <bsd.port.mk>
