# New ports collection makefile for:	Math-SymbolicX-NoSimplification
# Date created:				15 May 2006
# Whom:					Aaron Dalton <aaron@FreeBSD.org>
#
# $FreeBSD: ports/math/p5-Math-SymbolicX-NoSimplification/Makefile,v 1.8 2012/11/17 05:59:27 svnexp Exp $
#

PORTNAME=	Math-SymbolicX-NoSimplification
PORTVERSION=	1.01
CATEGORIES=	math perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Turn off Math::Symbolic simplification

BUILD_DEPENDS=	p5-Math-Symbolic>=0:${PORTSDIR}/math/p5-Math-Symbolic
RUN_DEPENDS:=	${BUILD_DEPENDS}

MAN3=	Math::SymbolicX::NoSimplification.3

PERL_CONFIGURE=	yes

.include <bsd.port.mk>
