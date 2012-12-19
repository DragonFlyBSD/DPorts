# Created by: Cezary Morga <cm@therek.net>
# $FreeBSD: ports/devel/p5-Devel-Dumpvar/Makefile,v 1.8 2012/11/17 05:56:13 svnexp Exp $

PORTNAME=	Devel-Dumpvar
PORTVERSION=	1.06
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A pure-OO reimplementation of dumpvar.pl

BUILD_DEPENDS=	p5-Scalar-List-Utils>=0:${PORTSDIR}/lang/p5-Scalar-List-Utils
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	YES

MAN3=		Devel::Dumpvar.3

.include <bsd.port.mk>
