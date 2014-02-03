# $FreeBSD: devel/p5-Devel-StackTrace-WithLexicals/Makefile 341710 2014-01-29 10:33:57Z az $

PORTNAME=	Devel-StackTrace-WithLexicals
PORTVERSION=	0.10
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl extension for Devel::StackTrace + PadWalker

RUN_DEPENDS=	\
	p5-Devel-StackTrace>=1.25:${PORTSDIR}/devel/p5-Devel-StackTrace \
	p5-PadWalker>=1.92:${PORTSDIR}/devel/p5-PadWalker
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
