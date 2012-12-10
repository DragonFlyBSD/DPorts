# New ports collection makefile for:	nsping
# Date created:		04 March 2000
# Whom:			Kris Kennaway <kris@FreeBSD.org>
#
# $FreeBSD: ports/dns/nsping/Makefile,v 1.13 2012/11/17 05:57:09 svnexp Exp $
#

PORTNAME=	nsping
PORTVERSION=	0.8
PORTREVISION=	2
CATEGORIES=	dns
MASTER_SITES=	${MASTER_SITE_LOCAL}
MASTER_SITE_SUBDIR=	roam
DISTFILES=	nsping.tar.gz

MAINTAINER=	ports@FreeBSD.org
COMMENT=	DNS "ping"

MAN8=		nsping.8
PLIST_FILES=	sbin/nsping

do-install:
		${INSTALL_PROGRAM} ${WRKSRC}/nsping ${PREFIX}/sbin
		${INSTALL_DATA} ${WRKSRC}/nsping.8 ${PREFIX}/man/man8

.include <bsd.port.mk>
