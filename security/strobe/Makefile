# New ports collection makefile for:	strobe
# Date created:		23 Sep 1996
# Whom:			proff
#
# $FreeBSD: ports/security/strobe/Makefile,v 1.21 2012/11/17 06:01:21 svnexp Exp $
#

PORTNAME=	strobe
PORTVERSION=	1.06
PORTREVISION=	1
CATEGORIES=	security
MASTER_SITES=	http://ftp.ussg.iu.edu/security/tools/unix/scanners/strobe/ \
		http://ftp.cerias.purdue.edu/pub/tools/unix/scanners/strobe/ \
		http://ftp.surfnet.nl/security/coast/scanners/strobe/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Fast scatter/gather TCP port scanner

WRKSRC=		${WRKDIR}/strobe
ALL_TARGET=	strobe
MAN1=		strobe.1

PLIST_FILES=	bin/strobe lib/strobe.services

.include <bsd.port.mk>
