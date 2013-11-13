# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: devel/p5-Test-Unit/Makefile 332245 2013-10-31 14:31:30Z vanilla $

PORTNAME=	Test-Unit
PORTVERSION=	0.25
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	PerlUnit testing framework

BUILD_DEPENDS=	p5-Class-Inner>=0:${PORTSDIR}/devel/p5-Class-Inner \
		p5-Devel-Symdump>=0:${PORTSDIR}/devel/p5-Devel-Symdump \
		p5-Error>=0:${PORTSDIR}/lang/p5-Error
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
