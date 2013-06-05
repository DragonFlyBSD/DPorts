# $FreeBSD: converters/p5-Sereal/Makefile 319139 2013-05-26 22:19:56Z kuriyama $

PORTNAME=	Sereal
PORTVERSION=	0.360
CATEGORIES=	converters perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:YVES
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl extension for fast, compact, powerful binary (de-)serialization

RUN_DEPENDS=	\
	p5-Sereal-Decoder>=0.36:${PORTSDIR}/converters/p5-Sereal-Decoder \
	p5-Sereal-Encoder>=0.36:${PORTSDIR}/converters/p5-Sereal-Encoder
BUILD_DEPENDS=	${RUN_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=	Sereal.3

.include <bsd.port.mk>
