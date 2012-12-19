# New ports collection makefile for:	p5-SOAP-Data-Builder
# Date created:			17 January 2004
# Whom:				kungfuftr <scott@surreytech.co.uk>
#
# $FreeBSD: ports/net/p5-SOAP-Data-Builder/Makefile,v 1.11 2012/11/17 06:00:13 svnexp Exp $
#

PORTNAME=	SOAP-Data-Builder
PORTVERSION=	0.9
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	A wrapper simplifying SOAP::Data and SOAP::Serialiser

BUILD_DEPENDS=	p5-SOAP-Lite>=0:${PORTSDIR}/net/p5-SOAP-Lite
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=	SOAP::Data::Builder.3 SOAP::Data::Builder::Element.3

.include <bsd.port.mk>
