# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: ports/math/p5-Math-MPFR/Makefile,v 1.12 2012/12/12 09:07:43 svnexp Exp $

PORTNAME=	Math-MPFR
PORTVERSION=	3.16
CATEGORIES=	math perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:SISYPHUS
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	A perl interface to MPFR Library

LIB_DEPENDS=	gmp:${PORTSDIR}/math/gmp \
		mpfr:${PORTSDIR}/math/mpfr
TEST_DEPENDS=	p5-Math-GMP>=0:${PORTSDIR}/math/p5-Math-GMP \
		p5-Math-GMPf>=0:${PORTSDIR}/math/p5-Math-GMPf \
		p5-Math-GMPq>=0:${PORTSDIR}/math/p5-Math-GMPq \
		p5-Math-GMPz>=0:${PORTSDIR}/math/p5-Math-GMPz

PERL_CONFIGURE=	yes
MAKE_ENV=	INC="-I${LOCALBASE}/include"

MAN3=		Math::MPFR.3

.include <bsd.port.mk>
