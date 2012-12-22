# ex:ts=8
# Ports collection makefile for:	p5-GraphViz-Data-Structure
# Date created:			Sep 6, 2002
# Whom:				ijliao
#
# $FreeBSD: ports/graphics/p5-GraphViz-Data-Structure/Makefile,v 1.25 2012/11/17 05:58:17 svnexp Exp $
#

PORTNAME=	GraphViz-Data-Structure
PORTVERSION=	0.17
PORTREVISION=	5
CATEGORIES=	graphics perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Visualise data structures

BUILD_DEPENDS=	p5-GraphViz>=0:${PORTSDIR}/graphics/p5-GraphViz \
		${LOCALBASE}/bin/dot:${PORTSDIR}/graphics/graphviz
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=	GraphViz::Data::Structure.3

.include <bsd.port.mk>
