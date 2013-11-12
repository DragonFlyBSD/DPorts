# Created by: George Hartzell <hartzell@alerce.com>
# $FreeBSD: www/p5-CGI-Application-Plugin-HTMLPrototype/Makefile 333070 2013-11-07 08:28:22Z vanilla $

PORTNAME=	CGI-Application-Plugin-HTMLPrototype
PORTVERSION=	0.20
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Access to the prototype JavaScript library using HTML::Prototype

BUILD_DEPENDS=	p5-CGI-Application>=0:${PORTSDIR}/www/p5-CGI-Application \
		p5-HTML-Prototype>=0:${PORTSDIR}/www/p5-HTML-Prototype
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
