# Created by: Wen Heping <wen@FreeBSD.org>
# $FreeBSD: astro/p5-Astro-FITS-CFITSIO/Makefile 336154 2013-12-11 10:31:41Z bapt $

PORTNAME=	Astro-FITS-CFITSIO
PORTVERSION=	1.10
CATEGORIES=	astro perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension for using the cfitsio library

LIB_DEPENDS=	libcfitsio.so:${PORTSDIR}/astro/cfitsio

CONFIGURE_ENV=	CFITSIO=${LOCALBASE}
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
