# Created by: TERAMOTO Masahiro <markun@onohara.to>
# $FreeBSD: devel/p5-Devel-LeakGuard-Object/Makefile 326803 2013-09-09 11:55:30Z az $

PORTNAME=	Devel-LeakGuard-Object
PORTVERSION=	0.06
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	markun@onohara.to
COMMENT=	Scoped checks for object leaks

BUILD_DEPENDS=	p5-Test-Differences>=0:${PORTSDIR}/devel/p5-Test-Differences
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-latest>0:${PORTSDIR}/devel/p5-latest

USES=		perl5
USE_PERL5=	modbuild

MAN3=		Devel::LeakGuard::Object.3 \
		Devel::LeakGuard::Object::State.3

.include <bsd.port.mk>
