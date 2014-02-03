# Created by: Aaron Dalton <aaron@FreeBSD.org>
# $FreeBSD: math/p5-Number-WithError/Makefile 341829 2014-01-30 10:27:43Z az $

PORTNAME=	Number-WithError
PORTVERSION=	1.01
CATEGORIES=	math perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	culot@FreeBSD.org
COMMENT=	Numbers with error propagation and scientific rounding

BUILD_DEPENDS=	p5-Params-Util>=0:${PORTSDIR}/devel/p5-Params-Util \
		p5-prefork>=0:${PORTSDIR}/devel/p5-prefork
RUN_DEPENDS:=	${BUILD_DEPENDS}

TEST_DEPENDS=	p5-Test-LectroTest>=0:${PORTSDIR}/devel/p5-Test-LectroTest

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
