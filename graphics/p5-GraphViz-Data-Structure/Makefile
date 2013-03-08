# Created by: ijliao
# $FreeBSD: ports/graphics/p5-GraphViz-Data-Structure/Makefile,v 1.26 2013/01/26 18:43:42 svnexp Exp $

PORTNAME=	GraphViz-Data-Structure
PORTVERSION=	0.19
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
