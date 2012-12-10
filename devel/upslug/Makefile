# New ports collection makefile for:	upslug
# Date created:		1 October 2008
# Whom:			Bruce M. Simpson <bms@FreeBSD.org>
#
# $FreeBSD: ports/devel/upslug/Makefile,v 1.4 2012/11/17 05:57:06 svnexp Exp $
#

PORTNAME=	upslug
PORTVERSION=	2.11
CATEGORIES=	devel
MASTER_SITES=	SF/nslu/UpSlug2/${PORTNAME}2-11
DISTNAME=	upslug2-11

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Firmware upload tool for Linksys NSLU2

USE_GMAKE=	yes
GNU_CONFIGURE=	yes

CONFIGURE_ARGS+=	--with-libpcap

NO_MAN=		defined

PLIST_FILES=	sbin/upslug2

.include <bsd.port.mk>
