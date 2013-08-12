# Created by: Cezary Morga <cm@therek.net>
# $FreeBSD: devel/p5-Devel-Dumpvar/Makefile 324171 2013-08-02 18:21:05Z az $

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

USES=		perl5
USE_PERL5=	configure

MAN3=		Devel::Dumpvar.3

.include <bsd.port.mk>
