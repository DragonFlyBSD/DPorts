# Created by: Aaron Dalton <aaron@FreeBSD.org>
# $FreeBSD: math/p5-Math-Algebra-Symbols/Makefile 327746 2013-09-20 20:55:04Z bapt $

PORTNAME=	Math-Algebra-Symbols
PORTVERSION=	1.21
CATEGORIES=	math perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Symbolic Algebra in Pure Perl

BUILD_DEPENDS=	p5-Scalar-List-Utils>=0:${PORTSDIR}/lang/p5-Scalar-List-Utils
RUN_DEPENDS:=	${BUILD_DEPENDS}

MAN3=	Math::Algebra::Symbols.3 \
	Math::Algebra::Symbols::Sum.3 \
	Math::Algebra::Symbols::Symbols.3 \
	Math::Algebra::Symbols::Term.3

USES=		perl5
USE_PERL5=	configure

NO_STAGE=	yes
.include <bsd.port.mk>
