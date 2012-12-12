# New ports collection makefile for:	p5-Net-IPv6Addr
# Date created:				13 September 2001
# Whom:                			JJ Behrens <jj@nttmcl.com>
#
# $FreeBSD: ports/net-mgmt/p5-Net-IPv6Addr/Makefile,v 1.12 2012/11/17 06:00:36 svnexp Exp $
#

PORTNAME=	Net-IPv6Addr
PORTVERSION=	0.2
CATEGORIES=	net-mgmt perl5 ipv6
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Perl extension for manipulating IPv6 addresses

BUILD_DEPENDS=	p5-Net-IPv4Addr>=0:${PORTSDIR}/net-mgmt/p5-Net-IPv4Addr \
		p5-Math-Base85>=0:${PORTSDIR}/math/p5-Math-Base85
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Net::IPv6Addr.3

.include <bsd.port.mk>
