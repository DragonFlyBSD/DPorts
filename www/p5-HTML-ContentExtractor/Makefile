# Created by: Oleg Mamontov <oleg@mamontov.net>
# $FreeBSD: www/p5-HTML-ContentExtractor/Makefile 338763 2014-01-05 13:05:56Z az $

PORTNAME=	HTML-ContentExtractor
PORTVERSION=	0.03
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	oleg@mamontov.net
COMMENT=	Extract text contained within an HTML document

RUN_DEPENDS=	p5-HTML-Tree>=3.13:${PORTSDIR}/www/p5-HTML-Tree			\
		p5-HTML-TableExtract>=2.10:${PORTSDIR}/www/p5-HTML-TableExtract
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
