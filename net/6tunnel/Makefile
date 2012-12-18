# New ports collection makefile for:	6tunnel
# Date created:		Sun Nov 19 12:51:37 CET 2000
# Whom:			Vassili Tchersky <vt@bsdjeunz.org>
#
# $FreeBSD: ports/net/6tunnel/Makefile,v 1.21 2012/11/17 05:59:55 svnexp Exp $
#

PORTNAME=	6tunnel
DISTVERSION=	0.11rc2
PORTREVISION=	2
CATEGORIES=	net ipv6
MASTER_SITES=	http://toxygen.net/6tunnel/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	TCP proxy for applications that don't speak IPv6

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION:R}rc2

GNU_CONFIGURE=	yes
USE_AUTOTOOLS=	autoconf
ALL_TARGET=	default

MAN1=		6tunnel.1
MANCOMPRESSED=	no
PLIST_FILES=	bin/6tunnel

.include <bsd.port.mk>
