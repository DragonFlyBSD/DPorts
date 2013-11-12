# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: devel/p5-MooseX-Traits/Makefile 332120 2013-10-30 14:44:54Z vanilla $

PORTNAME=	MooseX-Traits
PORTVERSION=	0.11
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Moose eXtension to automatically apply roles at object creation time

BUILD_DEPENDS=	p5-Moose>=0.84:${PORTSDIR}/devel/p5-Moose \
		p5-namespace-autoclean>=0:${PORTSDIR}/devel/p5-namespace-autoclean \
		p5-Sub-Exporter>=0:${PORTSDIR}/devel/p5-Sub-Exporter
RUN_DEPENDS:=	${BUILD_DEPENDS}

TEST_DEPENDS=	p5-Test-Exception>=0:${PORTSDIR}/devel/p5-Test-Exception \
		p5-Test-use-ok>=0:${PORTSDIR}/devel/p5-Test-use-ok

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
