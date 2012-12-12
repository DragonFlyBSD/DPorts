# New ports collection makefile for:	libPropList
# Date Created:				6 December 1998
# Whom:					Glenn Johnson
#
# $FreeBSD: ports/devel/libPropList/Makefile,v 1.30 2012/11/17 05:55:52 svnexp Exp $
#

PORTNAME=	libproplist
PORTVERSION=	0.10.1
PORTREVISION=	1
CATEGORIES=	devel
MASTER_SITES=	${MASTER_SITE_TUCOWS}
MASTER_SITE_SUBDIR=	gnome/dev
DISTNAME=	libPropList-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Property library for gnome and Window Maker

USE_AUTOTOOLS=	libtool
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes

post-patch:
	${REINPLACE_CMD} -e "s,mkdir rmdir,mkdir mkstemp rmdir," \
		${WRKSRC}/configure

.include <bsd.port.mk>
