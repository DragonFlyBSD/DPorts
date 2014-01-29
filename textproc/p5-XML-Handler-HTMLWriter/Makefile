# Created by: clsung@dragon2.net
# $FreeBSD: textproc/p5-XML-Handler-HTMLWriter/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	XML-Handler-HTMLWriter
PORTVERSION=	2.01
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	PerlSAX handlers for outputting HTML

BUILD_DEPENDS=	p5-XML-SAX-Writer>=0:${PORTSDIR}/textproc/p5-XML-SAX-Writer \
		p5-HTML-Parser>=0:${PORTSDIR}/www/p5-HTML-Parser
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
