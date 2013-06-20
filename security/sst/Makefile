# New ports collection makefile for:	sst
# Date created:		Nov 7, 2000
# Whom:			Mikhail Teterin <mi@aldan.algebra.com>
#
# $FreeBSD: ports/security/sst/Makefile,v 1.4 2012/11/17 06:01:21 svnexp Exp $
#

PORTNAME=	sst
PORTVERSION=	1.0
CATEGORIES=	security
MASTER_SITES=	http://utcc.utoronto.ca/~pkern/stuff/sst/
DISTNAME=	${PORTNAME}

MAINTAINER=	mi@aldan.algebra.com
COMMENT=	A simple SSL tunneling tool (uses netcat)

RUN_DEPENDS=	netcat:${PORTSDIR}/net/netcat

USE_OPENSSL=	YES
MAN1=		sst.1
MANCOMPRESSED=	maybe
PLIST_FILES=	sbin/sst

MAKEFILE=	${FILESDIR}/Makefile

.include <bsd.port.mk>
