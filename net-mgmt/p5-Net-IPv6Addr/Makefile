# Created by: JJ Behrens <jj@nttmcl.com>
# $FreeBSD: net-mgmt/p5-Net-IPv6Addr/Makefile 327757 2013-09-20 22:24:43Z bapt $

PORTNAME=	Net-IPv6Addr
PORTVERSION=	0.2
CATEGORIES=	net-mgmt perl5 ipv6
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Perl extension for manipulating IPv6 addresses

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Net-IPv4Addr>=0:${PORTSDIR}/net-mgmt/p5-Net-IPv4Addr \
		p5-Math-Base85>=0:${PORTSDIR}/math/p5-Math-Base85
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		Net::IPv6Addr.3

NO_STAGE=	yes
.include <bsd.port.mk>
