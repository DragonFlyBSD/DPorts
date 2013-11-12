# Created by: Cezary Morga <cm@therek.net>
# $FreeBSD: devel/p5-Devel-Dumpvar/Makefile 331933 2013-10-29 07:56:01Z vanilla $

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

.include <bsd.port.mk>
