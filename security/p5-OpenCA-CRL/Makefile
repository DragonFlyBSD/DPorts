# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: security/p5-OpenCA-CRL/Makefile 332949 2013-11-06 07:39:31Z vanilla $

PORTNAME=	OpenCA-CRL
PORTVERSION=	0.9.6
PORTEPOCH=	1
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:MADWOLF
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	CRL Management module

PORTSCOUT=	skipv:0.9.17

USES=		perl5
USE_PERL5=	configure

post-patch:
	@${MV} ${WRKSRC}/prova.pl ${WRKSRC}/prova.pl.sample

.include <bsd.port.mk>
