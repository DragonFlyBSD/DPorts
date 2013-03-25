# Created by: will
# $FreeBSD: math/p5-Math-GMP/Makefile 314566 2013-03-18 14:40:29Z sunpoet $

PORTNAME=	Math-GMP
PORTVERSION=	2.06
PORTREVISION=	1
CATEGORIES=	math perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module that provides an interface to the GMP library

LICENSE=	LGPL20 LGPL21 LGPL3
LICENSE_COMB=	dual

LIB_DEPENDS=	gmp:${PORTSDIR}/math/gmp

CONFIGURE_ARGS=	INC=-I${LOCALBASE}/include LIBS="-L${LOCALBASE}/lib -lgmp"
PERL_CONFIGURE=	yes

MAN3=		Math::GMP.3

.include <bsd.port.mk>
