# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: astro/p5-Astro-Hipparcos/Makefile 328612 2013-09-28 17:13:16Z sunpoet $

PORTNAME=	Astro-Hipparcos
PORTVERSION=	0.09
CATEGORIES=	astro perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension for reading the Hipparcos star catalog

BUILD_DEPENDS=	p5-ExtUtils-XSpp>=0.06:${PORTSDIR}/devel/p5-ExtUtils-XSpp \
		p5-ExtUtils-ParseXS>=2.22:${PORTSDIR}/devel/p5-ExtUtils-ParseXS

MAKE_ARGS+=	CC="${CXX}"
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
