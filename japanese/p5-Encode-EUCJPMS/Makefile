# Created by: Akinori MUSHA aka knu <knu@idaemons.org>
# $FreeBSD: japanese/p5-Encode-EUCJPMS/Makefile 327737 2013-09-20 18:47:54Z bapt $

PORTNAME=	Encode-EUCJPMS
PORTVERSION=	0.07
PORTREVISION=	2
CATEGORIES=	japanese converters perl5
MASTER_SITES=	CPAN

MAINTAINER=	knu@FreeBSD.org
COMMENT=	A Perl5 module defining Microsoft compatible encodings for Japanese

USES=		perl5
USE_PERL5=	configure

NO_STAGE=	yes
post-install:
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.pre.mk>

PKGNAMEPREFIX:=	${PKGNAMEPREFIX}p5-

.include <bsd.port.post.mk>
