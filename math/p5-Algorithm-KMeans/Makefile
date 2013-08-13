# Created by: Wen Heping <wen@FreeBSD.org>
# $FreeBSD: math/p5-Algorithm-KMeans/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	Algorithm-KMeans
PORTVERSION=	1.40
CATEGORIES=	math perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:AVIKAK
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Clustering multi-dimensional data with a pure-Perl implementation

BUILD_DEPENDS=	p5-Graphics-GnuplotIF>=1.4:${PORTSDIR}/graphics/p5-Graphics-GnuplotIF \
		p5-Math-GSL>=0.26:${PORTSDIR}/math/p5-Math-GSL \
		p5-Math-Random>=0.71:${PORTSDIR}/math/p5-Math-Random
RUN_DEPENDS=	p5-Graphics-GnuplotIF>=1.4:${PORTSDIR}/graphics/p5-Graphics-GnuplotIF \
		p5-Math-GSL>=0.26:${PORTSDIR}/math/p5-Math-GSL \
		p5-Math-Random>=0.71:${PORTSDIR}/math/p5-Math-Random

USES=		perl5
USE_PERL5=	configure

MAN3=		Algorithm::KMeans.3

.include <bsd.port.mk>
