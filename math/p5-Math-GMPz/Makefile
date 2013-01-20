# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: ports/math/p5-Math-GMPz/Makefile,v 1.3 2012/12/23 18:40:59 svnexp Exp $

PORTNAME=	Math-GMPz
PORTVERSION=	0.36
CATEGORIES=	math perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:SISYPHUS
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Perl interface to the GMP library integer (mpz) functions

LIB_DEPENDS=	gmp:${PORTSDIR}/math/gmp
TEST_DEPENDS=	p5-Math-GMP>=0:${PORTSDIR}/math/p5-Math-GMP \
		p5-Test-Pod>=1:${PORTSDIR}/devel/p5-Test-Pod

CONFIGURE_ARGS=	INC=-I${LOCALBASE}/include LIBS="-L${LOCALBASE}/lib -lgmp"
PERL_CONFIGURE=	yes

MAN3=		Math::GMPz.3

.include <bsd.port.mk>
