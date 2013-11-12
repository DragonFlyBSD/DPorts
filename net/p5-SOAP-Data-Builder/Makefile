# Created by: kungfuftr <scott@surreytech.co.uk>
# $FreeBSD: net/p5-SOAP-Data-Builder/Makefile 332868 2013-11-05 16:42:55Z vanilla $

PORTNAME=	SOAP-Data-Builder
PORTVERSION=	1
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Wrapper simplifying SOAP::Data and SOAP::Serialiser

BUILD_DEPENDS=	p5-SOAP-Lite>=0:${PORTSDIR}/net/p5-SOAP-Lite
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
