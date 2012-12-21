# New ports collection makefile for:	p5-Net-LDAP-Express
# Date created:		2008-03-07
# Whom:			Zane C, Bowers <vvelox@vvelox.net>
#
# $FreeBSD: ports/net/p5-Net-LDAP-Express/Makefile,v 1.4 2012/11/17 06:00:11 svnexp Exp $
#

PORTNAME=	Net-LDAP-Express
PORTVERSION=	0.11
PORTREVISION=	1
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	vvelox@vvelox.net
COMMENT=	A module to simplify connecting up to a LDAP server

BUILD_DEPENDS=	p5-perl-ldap>=0.23:${PORTSDIR}/net/p5-perl-ldap
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Net::LDAP::Express.3

.include <bsd.port.mk>
