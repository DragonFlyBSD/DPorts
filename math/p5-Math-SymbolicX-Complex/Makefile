# Created by: Aaron Dalton <aaron@FreeBSD.org>
# $FreeBSD: math/p5-Math-SymbolicX-Complex/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	Math-SymbolicX-Complex
PORTVERSION=	1.01
CATEGORIES=	math perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Complex number support for the Math::Symbolic parser

BUILD_DEPENDS=	p5-Math-Symbolic>=0:${PORTSDIR}/math/p5-Math-Symbolic \
		p5-Math-SymbolicX-ParserExtensionFactory>=0:${PORTSDIR}/math/p5-Math-SymbolicX-ParserExtensionFactory
RUN_DEPENDS:=	${BUILD_DEPENDS}

MAN3=	Math::SymbolicX::Complex.3

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
