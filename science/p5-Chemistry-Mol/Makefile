# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: science/p5-Chemistry-Mol/Makefile 332938 2013-11-06 01:32:11Z vanilla $

PORTNAME=	Chemistry-Mol
PORTVERSION=	0.37
CATEGORIES=	science perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl toolkit to describe molecules

BUILD_DEPENDS=	p5-Math-VectorReal>=1.02:${PORTSDIR}/math/p5-Math-VectorReal
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
