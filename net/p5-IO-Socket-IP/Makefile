# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: ports/net/p5-IO-Socket-IP/Makefile,v 1.14 2012/12/05 02:37:23 svnexp Exp $

PORTNAME=	IO-Socket-IP
PORTVERSION=	0.18
CATEGORIES=	net ipv6 perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	A drop-in replacement for IO::Socket::INET supporting IPv4 and IPv6

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Socket>=1.97:${PORTSDIR}/net/p5-Socket
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-Test-Pod>=1:${PORTSDIR}/devel/p5-Test-Pod

PERL_CONFIGURE=	yes

MAN3=		IO::Socket::IP.3

.include <bsd.port.mk>
