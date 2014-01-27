# Created by: Oliver Eikemeier <eikemeier@fillmore-labs.com>
# $FreeBSD: textproc/p5-XML-NodeFilter/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	XML-NodeFilter
PORTVERSION=	0.01
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	XML::NodeFilter is an object that know how to "filter out" nodes

BUILD_DEPENDS=	p5-XML-LibXML>=0:${PORTSDIR}/textproc/p5-XML-LibXML
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
