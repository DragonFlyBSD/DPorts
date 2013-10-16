# Created by: Garrett Wollman <wollman@lcs.mit.edu>
# $FreeBSD: graphics/p5-Chart-PNGgraph/Makefile 327733 2013-09-20 18:35:44Z bapt $

PORTNAME=	Chart-PNGgraph
PORTVERSION=	1.21
PORTREVISION=	7
CATEGORIES=	graphics perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A Perl module for generating presentation graphics (i.e., charts)

BUILD_DEPENDS=	p5-GD>=0:${PORTSDIR}/graphics/p5-GD \
		p5-GD-Graph>=0:${PORTSDIR}/graphics/p5-GD-Graph
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		Chart::PNGgraph.3

NO_STAGE=	yes
.include <bsd.port.mk>
