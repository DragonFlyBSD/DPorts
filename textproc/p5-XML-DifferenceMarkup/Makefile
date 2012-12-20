# New ports collection makefile for:	XML-DifferenceMarkup
# Date created:	   18 January 2004
# Whom:		   Sergey Skvortsov <skv@protey.ru>
#
# $FreeBSD: ports/textproc/p5-XML-DifferenceMarkup/Makefile,v 1.7 2012/11/17 06:02:12 svnexp Exp $
#

PORTNAME=	XML-DifferenceMarkup
PORTVERSION=	0.11
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	This module implements an XML diff producing XML output

BUILD_DEPENDS=	p5-XML-LibXML>=0:${PORTSDIR}/textproc/p5-XML-LibXML \
		p5-Algorithm-Diff>=0:${PORTSDIR}/devel/p5-Algorithm-Diff
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		XML::DifferenceMarkup.3

.include <bsd.port.mk>
