# Created by: Oliver Eikemeier <eikemeier@fillmore-labs.com>
# $FreeBSD: textproc/p5-XML-LibXML-Iterator/Makefile 327773 2013-09-20 23:17:30Z bapt $

PORTNAME=	XML-LibXML-Iterator
PORTVERSION=	1.04
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	XML::LibXML::Iterator is an iterator for XML::LibXML parsed documents

BUILD_DEPENDS=	p5-XML-LibXML>=0:${PORTSDIR}/textproc/p5-XML-LibXML \
		p5-XML-NodeFilter>=0:${PORTSDIR}/textproc/p5-XML-NodeFilter
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		XML::LibXML::Iterator.3 XML::LibXML::NodeList::Iterator.3

NO_STAGE=	yes
.include <bsd.port.mk>
