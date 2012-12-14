# New ports collection makefile for:	XML-TokeParser
# Date created:		10 April 2010
# Whom:			Mike Bristow <mike@urgle.com>
#
# $FreeBSD: ports/textproc/p5-XML-TokeParser/Makefile,v 1.4 2012/11/17 06:02:14 svnexp Exp $
#

PORTNAME=	XML-TokeParser
PORTVERSION=	0.05
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN/XML
PKGNAMEPREFIX=	p5-

MAINTAINER=	mike@urgle.com
COMMENT=	Simplified interface to XML::Parser

BUILD_DEPENDS=	p5-XML-Parser>=0:${PORTSDIR}/textproc/p5-XML-Parser
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		XML::TokeParser.3

.include <bsd.port.mk>
