# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: security/p5-OpenCA-CRL/Makefile 324993 2013-08-19 13:48:21Z mat $

PORTNAME=	OpenCA-CRL
PORTVERSION=	0.9.6
PORTEPOCH=	1
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:MADWOLF
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	CRL Management module

USES=		perl5
USE_PERL5=	configure

P5MAN3=		OpenCA::CRL.3

post-patch:
	@${MV} ${WRKSRC}/prova.pl  ${WRKSRC}/prova.pl.sample

.include <bsd.port.mk>
