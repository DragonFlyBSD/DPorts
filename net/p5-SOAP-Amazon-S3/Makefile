# New ports collection makefile for:	p5-SOAP-Amazon-S3
# Date created:		2007-04-30
# Whom:			Gea-Suan Lin <gslin@gslin.org>
#
# $FreeBSD: ports/net/p5-SOAP-Amazon-S3/Makefile,v 1.7 2012/11/17 06:00:13 svnexp Exp $
#

PORTNAME=	SOAP-Amazon-S3
PORTVERSION=	0.040.1
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME}-${PORTVERSION:R}${PORTVERSION:E}

MAINTAINER=	perl@FreeBSD.org
COMMENT=	A module for interfacing with Amazon S3 through SOAP

RUN_DEPENDS=	p5-Time-Piece>=0:${PORTSDIR}/devel/p5-Time-Piece \
		p5-Digest-HMAC>=0:${PORTSDIR}/security/p5-Digest-HMAC \
		p5-SOAP-MySOAP>=0:${PORTSDIR}/net/p5-SOAP-MySOAP \
		p5-XML-MyXML>=0:${PORTSDIR}/textproc/p5-XML-MyXML
BUILD_DEPENDS:=	${RUN_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		SOAP::Amazon::S3.3

.include <bsd.port.mk>
