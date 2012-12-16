# New ports collection makefile for:	Encode::EUCJPMS
# Date created:		25 August 2006
# Whom:			Akinori MUSHA aka knu <knu@idaemons.org>
#
# $FreeBSD: ports/japanese/p5-Encode-EUCJPMS/Makefile,v 1.7 2012/11/17 05:58:38 svnexp Exp $
#

PORTNAME=	Encode-EUCJPMS
PORTVERSION=	0.07
PORTREVISION=	2
CATEGORIES=	japanese converters perl5
MASTER_SITES=	CPAN

MAINTAINER=	knu@FreeBSD.org
COMMENT=	A Perl5 module defining Microsoft compatible encodings for Japanese

PERL_CONFIGURE=	yes

post-install:
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.pre.mk>

PKGNAMEPREFIX:=	${PKGNAMEPREFIX}p5-

.include <bsd.port.post.mk>
