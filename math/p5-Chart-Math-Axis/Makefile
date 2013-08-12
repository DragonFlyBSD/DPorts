# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: math/p5-Chart-Math-Axis/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	Chart-Math-Axis
PORTVERSION=	1.06
CATEGORIES=	math graphics perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Implements an algorithm to find good values for chart axis

BUILD_DEPENDS=	p5-Params-Util>=0.15:${PORTSDIR}/devel/p5-Params-Util
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		Chart::Math::Axis.3

.include <bsd.port.mk>
