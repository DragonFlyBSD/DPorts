# New ports collection makefile for:	p5-XML-NodeFilter
# Date created:				11 Sep 2003
# Whom:					Oliver Eikemeier <eikemeier@fillmore-labs.com>
#
# $FreeBSD: ports/textproc/p5-XML-NodeFilter/Makefile,v 1.7 2012/11/17 06:02:13 svnexp Exp $
#

PORTNAME=	XML-NodeFilter
PORTVERSION=	0.01
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	A XML::NodeFilter is an object that know how to "filter out" nodes

BUILD_DEPENDS=	p5-XML-LibXML>=0:${PORTSDIR}/textproc/p5-XML-LibXML
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		XML::NodeFilter.3

.include <bsd.port.mk>
