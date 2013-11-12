# Created by: Steve Wills <swills@FreeBSD.org>
# $FreeBSD: devel/p5-Test-Lazy/Makefile 332245 2013-10-31 14:31:30Z vanilla $

PORTNAME=	Test-Lazy
PORTVERSION=	0.061
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Quick and easy way to compose and run tests with useful output

BUILD_DEPENDS=	p5-Class-Accessor>=0:${PORTSDIR}/devel/p5-Class-Accessor \
		p5-Test-Deep>0:${PORTSDIR}/devel/p5-Test-Deep
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
