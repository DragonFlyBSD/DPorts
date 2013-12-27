# Created by: Kurt Jaeger <fbsd-ports@opsec.eu>
# $FreeBSD: math/p5-Math-Int128/Makefile 331644 2013-10-26 00:52:33Z gerald $

PORTNAME=	Math-Int128
PORTVERSION=	0.13
PORTREVISION=	1
CATEGORIES=	math perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	fbsd-ports@opsec.eu
COMMENT=	Manipulate 128 bits integers in Perl

LICENSE=	ART10

BUILD_DEPENDS=	p5-Math-Int64>=0.28:${PORTSDIR}/math/p5-Math-Int64
RUN_DEPENDS=	p5-Math-Int64>=0.28:${PORTSDIR}/math/p5-Math-Int64

USES=		perl5
USE_PERL5=	configure

NOT_FOR_ARCHS=	i386

.include <bsd.port.pre.mk>

# need clang 3.2+ or GCC 4.4+
.if exists(/usr/bin/clang) && ${OSVERSION} > 901505
CC=	/usr/bin/clang
.else
USE_GCC=	yes
.endif

.include <bsd.port.post.mk>
