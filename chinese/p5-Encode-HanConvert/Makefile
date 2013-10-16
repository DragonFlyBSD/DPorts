# Created by: Shen Chuan-Hsing <statue@freebsd.sinica.edu.tw>
# $FreeBSD: chinese/p5-Encode-HanConvert/Makefile 328366 2013-09-26 14:35:04Z vanilla $

PORTNAME=	Encode-HanConvert
PORTVERSION=	0.35
CATEGORIES=	chinese perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	rafan@FreeBSD.org
COMMENT=	Traditional and Simplified Chinese mappings

USES=		perl5
USE_PERL5=	configure

regression-test:
	cd ${WRKSRC} && ${MAKE} test

.include <bsd.port.mk>
