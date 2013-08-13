# New ports collection makefile for:	p5-SNMP-Simple
# Date created:		2007-11-16
# Whom:			BluePex Security Solutions <freebsd-ports@bluepex.com>
#
# $FreeBSD: net-mgmt/p5-SNMP-Simple/Makefile 324171 2013-08-02 18:21:05Z az $
#

PORTNAME=	SNMP-Simple
PORTVERSION=	0.02
PORTREVISION=	2
CATEGORIES=	net-mgmt perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Shortcuts for when using p5-SNMP

RUN_DEPENDS=	net-snmp>=0:${PORTSDIR}/net-mgmt/net-snmp

USES=		perl5
USE_PERL5=	configure

MAN3=		SNMP::Simple.3

.include <bsd.port.mk>
