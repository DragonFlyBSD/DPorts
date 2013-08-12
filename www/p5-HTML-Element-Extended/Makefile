# Created by: Garrett A. Wollman
# $FreeBSD: www/p5-HTML-Element-Extended/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	HTML-Element-Extended
PORTVERSION=	1.18
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Extended interface to HTML::Tree's HTML::Element class

BUILD_DEPENDS=	p5-HTML-Tree>=3.01:${PORTSDIR}/www/p5-HTML-Tree
RUN_DEPENDS=	p5-HTML-Tree>=3.01:${PORTSDIR}/www/p5-HTML-Tree

USES=		perl5
USE_PERL5=	configure

MAN3=		HTML::ElementRaw.3 HTML::ElementGlob.3 \
		HTML::ElementSuper.3 HTML::ElementTable.3

.include <bsd.port.mk>
