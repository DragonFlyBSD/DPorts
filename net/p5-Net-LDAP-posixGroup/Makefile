# New ports collection makefile for:	sysutils/p5-Net-LDAP-posixGroup
# Date created:		2009-10-31
# Whom:			Zane C, Bowers <vvelox@vvelox.net>
#
# $FreeBSD: net/p5-Net-LDAP-posixGroup/Makefile 326522 2013-09-06 16:11:30Z az $
#

PORTNAME=	Net-LDAP-posixGroup
PORTVERSION=	0.0.2
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:VVELOX
PKGNAMEPREFIX=	p5-

MAINTAINER=	vvelox@vvelox.net
COMMENT=	Creates new Net::LDAP::Entry objects for a posixGroup entry

RUN_DEPENDS=	p5-perl-ldap>=0:${PORTSDIR}/net/p5-perl-ldap

USES=		perl5
USE_PERL5=	configure

MAN3=		Net::LDAP::posixGroup.3

.include <bsd.port.mk>
