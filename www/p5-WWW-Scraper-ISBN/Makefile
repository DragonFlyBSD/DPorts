# ex:ts=8
# Ports collection makefile for:	p5-WWW-Scraper-ISBN
# Created by: Ying-Chieh Liao <ijliao@csie.nctu.edu.tw>
# $FreeBSD: www/p5-WWW-Scraper-ISBN/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	WWW-Scraper-ISBN
PORTVERSION=	0.25
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Retrieving information about books by ISBN number

BUILD_DEPENDS=	p5-WWW-Scraper-ISBN-Record>=0:${PORTSDIR}/www/p5-WWW-Scraper-ISBN-Record
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=	WWW::Scraper::ISBN.3

.include <bsd.port.mk>
