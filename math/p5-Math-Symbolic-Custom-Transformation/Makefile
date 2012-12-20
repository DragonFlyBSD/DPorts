# New ports collection makefile for:	Math-Symbolic-Custom-Transformation
# Date created:				15 May 2006
# Whom:					Aaron Dalton <aaron@FreeBSD.org>
#
# $FreeBSD: ports/math/p5-Math-Symbolic-Custom-Transformation/Makefile,v 1.8 2012/11/17 05:59:27 svnexp Exp $
#

PORTNAME=	Math-Symbolic-Custom-Transformation
PORTVERSION=	2.01
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
