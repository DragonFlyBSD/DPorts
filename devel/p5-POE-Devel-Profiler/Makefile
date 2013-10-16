# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: devel/p5-POE-Devel-Profiler/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	POE-Devel-Profiler
PORTVERSION=	0.02
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Profiles POE programs

BUILD_DEPENDS=	p5-POE>=0:${PORTSDIR}/devel/p5-POE
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN1=		poepp.1
MAN3=		POE::Devel::Profiler.3

NO_STAGE=	yes
.include <bsd.port.mk>
