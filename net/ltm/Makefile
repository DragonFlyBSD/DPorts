# New ports collection makefile for:   ltm
# Date created:        21 June 2006
# Whom:                Statseeker
#
# $FreeBSD: ports/net/ltm/Makefile,v 1.2 2012/11/17 06:00:05 svnexp Exp $
#

PORTNAME=	ltm
PORTVERSION=	3.0.0.608281003
CATEGORIES=	net
MASTER_SITES=	http://www.statseeker.com/downloads/

MAINTAINER=	ltm-support@statseeker.com
COMMENT=	Statseeker Real Time LAN Analyser

NO_BUILD=	yes

MAN1=		ltm.1 ltm-client.1 ltm-mkprotodb.1
MANCOMPRESSED=	yes

.include <bsd.port.pre.mk>

s: .IGNORE

do-install:
	@(tar -cf - -C ${WRKSRC} . | tar -xf - -C ${PREFIX})

.include <bsd.port.post.mk>
