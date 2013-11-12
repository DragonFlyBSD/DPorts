# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: devel/p5-Devel-Cycle/Makefile 331933 2013-10-29 07:56:01Z vanilla $

PORTNAME=	Devel-Cycle
PORTVERSION=	1.11
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Find memory cycles in objects

BUILD_DEPENDS=	p5-Scalar-List-Utils>=0:${PORTSDIR}/lang/p5-Scalar-List-Utils
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
