# New ports collection makefile for:	p5-Net-SNMP
# Date created:				30 June 2000
# Whom:					Christopher N. Harrell <cnh@ivmg.net>
#
# $FreeBSD: ports/net-mgmt/p5-Net-SNMP/Makefile,v 1.26 2012/11/17 06:00:36 svnexp Exp $
#

PORTNAME=	Net-SNMP
PORTVERSION=	6.0.1
CATEGORIES=	net-mgmt perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:DTOWN
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME}-v${PORTVERSION}

MAINTAINER=	lth@FreeBSD.org
COMMENT=	Object oriented interface to SNMP

BUILD_DEPENDS=	p5-Crypt-DES>=0:${PORTSDIR}/security/p5-Crypt-DES \
		p5-Digest-SHA1>=0:${PORTSDIR}/security/p5-Digest-SHA1 \
		p5-Digest-HMAC>=0:${PORTSDIR}/security/p5-Digest-HMAC
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes
CONFLICTS=	p5-Net-SNMP3-[0-9]*

MAN1=		snmpkey.1
MAN3=		Net::SNMP.3

.include <bsd.port.mk>
