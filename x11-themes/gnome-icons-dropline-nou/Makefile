# New ports collection makefile for:	gnome-icons-dropline-nou
# Date created:		2008-09-29
# Whom:			Jimmy Olgeni <olgeni@FreeBSD.org>
#
# $FreeBSD: ports/x11-themes/gnome-icons-dropline-nou/Makefile,v 1.4 2012/11/17 06:03:31 svnexp Exp $
#

PORTNAME=	dropline-nou
PORTVERSION=	090208
CATEGORIES=	x11-themes gnome
MASTER_SITES=	http://www.silvestre.com.ar/icons/
DISTNAME=	Nou-${PORTVERSION}

MAINTAINER=	olgeni@FreeBSD.org
COMMENT=	Dropline Nou Icons for Gnome

USE_BZIP2=	yes
WRKSRC=		"${WRKDIR}/Nou"

post-extract:
	@${RM} ${WRKSRC}/.icon-theme.cache

.include "${.CURDIR}/../gnome-icons/bsd.gnome-icons.mk"
.include <bsd.port.mk>
