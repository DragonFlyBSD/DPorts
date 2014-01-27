# Created by: Garrett A. Wollman
# $FreeBSD: www/p5-HTML-Element-Extended/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	HTML-Element-Extended
PORTVERSION=	1.18
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Extended interface to HTML::Tree's HTML::Element class

BUILD_DEPENDS=	p5-HTML-Tree>=3.01:${PORTSDIR}/www/p5-HTML-Tree
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
