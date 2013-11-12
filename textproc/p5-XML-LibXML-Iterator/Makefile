# Created by: Oliver Eikemeier <eikemeier@fillmore-labs.com>
# $FreeBSD: textproc/p5-XML-LibXML-Iterator/Makefile 333056 2013-11-07 03:52:41Z vanilla $

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

.include <bsd.port.mk>
