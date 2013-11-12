# Created by: Aaron Dalton <aaron@FreeBSD.org>
# $FreeBSD: math/p5-Math-SymbolicX-Inline/Makefile 332813 2013-11-05 06:56:18Z vanilla $

PORTNAME=	Math-SymbolicX-Inline
PORTVERSION=	1.11
CATEGORIES=	math perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Inlined Math::Symbolic functions

BUILD_DEPENDS=	p5-Math-Symbolic>=0:${PORTSDIR}/math/p5-Math-Symbolic \
		p5-Math-Symbolic-Custom-Contains>=0:${PORTSDIR}/math/p5-Math-Symbolic-Custom-Contains
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
