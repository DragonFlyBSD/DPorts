# Created by: Dmitry Sivachenko <demon@FreeBSD.org>
# $FreeBSD: devel/p5-Test-More-UTF8/Makefile 326810 2013-09-09 14:13:20Z az $

PORTNAME=	Test-More-UTF8
PORTVERSION=	0.04
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	demon@FreeBSD.org
COMMENT=	Enhancing Test::More for UTF-8-based projects

BUILD_DEPENDS=	p5-Test-Simple>=0:${PORTSDIR}/devel/p5-Test-Simple
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		Test::More::UTF8.3

.include <bsd.port.mk>
