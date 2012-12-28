# New ports collection makefile for:	p5-Encode-HanConvert
# Date created:		15 April 2003
# Whom:	      		Shen Chuan-Hsing <statue@freebsd.sinica.edu.tw>
#
# $FreeBSD: ports/chinese/p5-Encode-HanConvert/Makefile,v 1.18 2012/12/16 06:16:53 svnexp Exp $
#

PORTNAME=	Encode-HanConvert
PORTVERSION=	0.35
CATEGORIES=	chinese perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	rafan@FreeBSD.org
COMMENT=	Traditional and Simplified Chinese mappings

PERL_CONFIGURE=	yes

MAN1=		b2g.pl.1 g2b.pl.1

regression-test:
	cd ${WRKSRC} && ${MAKE} test

.include <bsd.port.mk>
