# New ports collection makefile for:	OpenCA-CRL
# Date created:	   02 June 2002
# Whom:		   Sergey Skvortsov <skv@protey.ru>
#
# $FreeBSD: ports/security/p5-OpenCA-CRL/Makefile,v 1.6 2012/11/17 06:01:13 svnexp Exp $
#

PORTNAME=	OpenCA-CRL
PORTVERSION=	0.9.17
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	CRL Management module

PERL_CONFIGURE=	yes

post-patch:
	@${MV} ${WRKSRC}/prova.pl  ${WRKSRC}/prova.pl.sample

.include <bsd.port.mk>
