# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: www/p5-HTTP-Server-Simple-Authen/Makefile 325163 2013-08-21 17:42:57Z sunpoet $

PORTNAME=	HTTP-Server-Simple-Authen
PORTVERSION=	0.04
CATEGORIES=	www security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Authentication plugin for HTTP::Server::Simple

BUILD_DEPENDS=	p5-Authen-Simple>=0.4:${PORTSDIR}/security/p5-Authen-Simple \
		p5-HTTP-Server-Simple>=0.16:${PORTSDIR}/www/p5-HTTP-Server-Simple
RUN_DEPENDS:=	${BUILD_DEPENDS}

USE_PERL5=	configure
USES=		perl5

MAN3=		HTTP::Server::Simple::Authen.3

.include <bsd.port.mk>
