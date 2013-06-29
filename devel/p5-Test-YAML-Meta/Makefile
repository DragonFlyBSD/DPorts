# Created by: Felippe de Meirelles Motta <lippemail@gmail.com>
# $FreeBSD: devel/p5-Test-YAML-Meta/Makefile 321715 2013-06-24 20:25:23Z lippe $

PORTNAME=	Test-YAML-Meta
PORTVERSION=	0.20
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	lippe@FreeBSD.org
COMMENT=	Validation of the META.yml file in a distribution

BUILD_DEPENDS=	p5-Test-YAML-Valid>=0:${PORTSDIR}/devel/p5-Test-YAML-Valid \
		p5-Test-Pod>=0:${PORTSDIR}/devel/p5-Test-Pod \
		p5-Test-Pod-Coverage>=0:${PORTSDIR}/devel/p5-Test-Pod-Coverage \
		p5-Test-CPAN-Meta-YAML>=0.17:${PORTSDIR}/devel/p5-Test-CPAN-Meta-YAML
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Test::YAML::Meta.3

.include <bsd.port.mk>
