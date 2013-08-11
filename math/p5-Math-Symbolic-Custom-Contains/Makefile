# Created by: Aaron Dalton <aaron@FreeBSD.org>
# $FreeBSD: math/p5-Math-Symbolic-Custom-Contains/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	Math-Symbolic-Custom-Contains
PORTVERSION=	1.01
CATEGORIES=	math perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Find subtrees in Math::Symbolic expressions

BUILD_DEPENDS=	p5-Math-Symbolic>=0:${PORTSDIR}/math/p5-Math-Symbolic
RUN_DEPENDS:=	${BUILD_DEPENDS}

MAN3=	Math::Symbolic::Custom::Contains.3

USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
