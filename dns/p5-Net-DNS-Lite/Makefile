# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: dns/p5-Net-DNS-Lite/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	Net-DNS-Lite
PORTVERSION=	0.10
CATEGORIES=	dns perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Pure-Perl DNS resolver with support for timeout

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-List-MoreUtils>=0:${PORTSDIR}/lang/p5-List-MoreUtils
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-Cache-LRU>=0:${PORTSDIR}/devel/p5-Cache-LRU \
		p5-Test-Requires>=0:${PORTSDIR}/devel/p5-Test-Requires

USES=		perl5
USE_PERL5=	configure

MAN3=		Net::DNS::Lite.3

.include <bsd.port.mk>
