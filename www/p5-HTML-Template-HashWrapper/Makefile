# Created by: Zach Thompson <hideo@lastamericanempire.com>
# $FreeBSD: www/p5-HTML-Template-HashWrapper/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	HTML-Template-HashWrapper
PORTVERSION=	1.3
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Easy way to use the associate option from HTML::Template

RUN_DEPENDS=	p5-HTML-Template>=0:${PORTSDIR}/www/p5-HTML-Template
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		HTML::Template::HashWrapper.3

.include <bsd.port.mk>
