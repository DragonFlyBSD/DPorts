# ex:ts=8
# New ports collection makefile for:	ipcalc
# Date created:			May 21, 2001
# Whom:				ijliao
#
# $FreeBSD: ports/net-mgmt/ipcalc/Makefile,v 1.18 2012/11/17 06:00:33 svnexp Exp $

PORTNAME=	ipcalc
PORTVERSION=	0.41
PORTREVISION=	2
CATEGORIES=	net-mgmt
MASTER_SITES=	http://jodies.de/ipcalc-archive/

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	IP Calculator

PLIST_FILES=	bin/ipcalc
NO_BUILD=	yes
USE_PERL5=	yes

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin/${PORTNAME}

.include <bsd.port.mk>
