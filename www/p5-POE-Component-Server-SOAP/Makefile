# Created by: Lars Thegler <lth@FreeBSD.org>
# $FreeBSD: www/p5-POE-Component-Server-SOAP/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	POE-Component-Server-SOAP
PORTVERSION=	1.14
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	lth@FreeBSD.org
COMMENT=	Publish POE event handlers via SOAP over HTTP

BUILD_DEPENDS=	p5-SOAP-Lite>=0.55:${PORTSDIR}/net/p5-SOAP-Lite \
		p5-POE-Component-Server-SimpleHTTP>=1.54:${PORTSDIR}/www/p5-POE-Component-Server-SimpleHTTP \
		p5-POE>=0:${PORTSDIR}/devel/p5-POE
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=	POE::Component::Server::SOAP.3 \
	POE::Component::Server::SOAP::Response.3

NO_STAGE=	yes
.include <bsd.port.mk>
