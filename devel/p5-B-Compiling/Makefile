# $FreeBSD: devel/p5-B-Compiling/Makefile 332381 2013-11-01 14:23:18Z kuriyama $

PORTNAME=	B-Compiling
PORTVERSION=	0.04
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl extension to expose PL_compiling to perl

RUN_DEPENDS=	\
	p5-Sub-Exporter>0:${PORTSDIR}/devel/p5-Sub-Exporter
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
