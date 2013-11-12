# Created by: clsung
# $FreeBSD: net/p5-Net-Random/Makefile 332868 2013-11-05 16:42:55Z vanilla $

PORTNAME=	Net-Random
PORTVERSION=	2.3
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl5 module to get random data from online sources

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-JSON>=0:${PORTSDIR}/converters/p5-JSON \
		p5-libwww>=0:${PORTSDIR}/www/p5-libwww
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-Test-MockObject>=0:${PORTSDIR}/devel/p5-Test-MockObject

PORTSCOUT=	skipv:2.21,2.22

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
