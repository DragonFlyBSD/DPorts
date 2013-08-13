# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: security/p5-OpenCA-CRL/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	OpenCA-CRL
PORTVERSION=	0.9.17
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	CRL Management module

USES=		perl5
USE_PERL5=	configure

post-patch:
	@${MV} ${WRKSRC}/prova.pl  ${WRKSRC}/prova.pl.sample

.include <bsd.port.mk>
