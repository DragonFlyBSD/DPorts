# Created by: Andrej Zverev <az@FreeBSD.org>
# $FreeBSD: www/p5-Catalyst-Plugin-Browser/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	Catalyst-Plugin-Browser
PORTVERSION=	0.08
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Browser Detection for Catalyst

BUILD_DEPENDS=	p5-Catalyst-Runtime>=0:${PORTSDIR}/www/p5-Catalyst-Runtime \
	p5-Catalyst-TraitFor-Request-BrowserDetect>=0:${PORTSDIR}/www/p5-Catalyst-TraitFor-Request-BrowserDetect
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=	Catalyst::Plugin::Browser.3

.include <bsd.port.mk>
