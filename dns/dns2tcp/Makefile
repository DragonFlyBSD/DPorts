# New ports collection makefile for:	dns2tcp
# Date created:		2008-11-23
# Whom:			Martin Wilke <miwi@FreeBSD.org>
#
# $FreeBSD: ports/dns/dns2tcp/Makefile,v 1.6 2012/11/17 05:57:08 svnexp Exp $
#

PORTNAME=	dns2tcp
PORTVERSION=	0.5.2
CATEGORIES=	dns
MASTER_SITES=	http://www.hsc.fr/ressources/outils/${PORTNAME}/download/

MAINTAINER=	sbz@FreeBSD.org
COMMENT=	Dns2tcp is a tool for relaying TCP connections over DNS

GNU_CONFIGURE=	yes
MAKE_JOBS_SAFE=	yes

PLIST_FILES=	bin/dns2tcpc bin/dns2tcpd
MAN1=		dns2tcpc.1 dns2tcpd.1

.include <bsd.port.mk>
