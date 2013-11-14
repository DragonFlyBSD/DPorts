# $FreeBSD: www/p5-Catalyst-View-RRDGraph/Makefile 333070 2013-11-07 08:28:22Z vanilla $

PORTNAME=	Catalyst-View-RRDGraph
PORTVERSION=	0.08
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	RRD graph view class for catalyst

BUILD_DEPENDS=	p5-Catalyst-Runtime>=5.7000:${PORTSDIR}/www/p5-Catalyst-Runtime \
		p5-Catalyst-Plugin-Static-Simple>=0.17:${PORTSDIR}/www/p5-Catalyst-Plugin-Static-Simple \
		rrdtool>=0:${PORTSDIR}/databases/rrdtool \
		p5-MRO-Compat>=0:${PORTSDIR}/devel/p5-MRO-Compat
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-Test-MockObject>=1.07:${PORTSDIR}/devel/p5-Test-MockObject

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
