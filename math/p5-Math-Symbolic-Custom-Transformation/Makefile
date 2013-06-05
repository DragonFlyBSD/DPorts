# Created by: Aaron Dalton <aaron@FreeBSD.org>
# $FreeBSD: math/p5-Math-Symbolic-Custom-Transformation/Makefile 319195 2013-05-27 09:33:08Z tobez $

PORTNAME=	Math-Symbolic-Custom-Transformation
PORTVERSION=	2.02
CATEGORIES=	math perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Transform Math::Symbolic trees

RUN_DEPENDS=	p5-Math-Symbolic>=0.507:${PORTSDIR}/math/p5-Math-Symbolic \
		p5-Math-Symbolic-Custom-Pattern>=1.20:${PORTSDIR}/math/p5-Math-Symbolic-Custom-Pattern

MAN3=	Math::Symbolic::Custom::Transformation.3 \
	Math::Symbolic::Custom::Transformation::Group.3

PERL_CONFIGURE=	yes

.include <bsd.port.mk>
