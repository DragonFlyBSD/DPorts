# Ports collection makefile for:	Astro-FITS-CFITSIO
# Date created:				Jan 6, 2010
# Whom:					Wen Heping <wen@FreeBSD.org>
#
# $FreeBSD: ports/astro/p5-Astro-FITS-CFITSIO/Makefile,v 1.7 2012/11/17 05:54:25 svnexp Exp $
#

PORTNAME=	Astro-FITS-CFITSIO
PORTVERSION=	1.09
CATEGORIES=	astro perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension for using the cfitsio library

LIB_DEPENDS=	cfitsio:${PORTSDIR}/astro/cfitsio

CONFIGURE_ENV=	CFITSIO=${LOCALBASE}
PERL_CONFIGURE=	yes

MAN3=		Astro::FITS::CFITSIO.3

.include <bsd.port.mk>
