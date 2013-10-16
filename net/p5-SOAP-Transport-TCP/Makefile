# $FreeBSD: net/p5-SOAP-Transport-TCP/Makefile 327755 2013-09-20 22:10:23Z bapt $

PORTNAME=	SOAP-Transport-TCP
PORTVERSION=	0.717
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	TCP Transport Support for SOAP::Lite

RUN_DEPENDS=	p5-SOAP-Lite>=0.714:${PORTSDIR}/net/p5-SOAP-Lite
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=	SOAP::Transport::TCP.3

NO_STAGE=	yes
.include <bsd.port.mk>
