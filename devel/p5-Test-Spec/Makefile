# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: devel/p5-Test-Spec/Makefile 325134 2013-08-21 14:08:06Z sunpoet $

PORTNAME=	Test-Spec
PORTVERSION=	0.46
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Write tests in a declarative specification style

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Package-Stash>=0.23:${PORTSDIR}/devel/p5-Package-Stash \
		p5-Test-Deep>=0.103:${PORTSDIR}/devel/p5-Test-Deep \
		p5-Test-Trap>=0:${PORTSDIR}/devel/p5-Test-Trap \
		p5-Tie-IxHash>=0:${PORTSDIR}/devel/p5-Tie-IxHash
RUN_DEPENDS:=	${BUILD_DEPENDS}

USE_PERL5=	configure
USES=		perl5

MAN3=		Test::Spec.3 \
		Test::Spec::Mocks.3

.include <bsd.port.mk>
