# New ports collection makefile for:	p5-GD-Graph
# Date created:				10 April 2000
# Whom:	      				Dmitry Sivachenko <dima@Chg.RU>
#
# $FreeBSD: ports/graphics/p5-GD-Graph3d/Makefile,v 1.21 2012/11/17 05:58:16 svnexp Exp $
#

PORTNAME=	GD-Graph3d
PORTVERSION=	0.63
PORTREVISION=	5
CATEGORIES=	graphics perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Creates 3D charts with GD::Graph and GD

BUILD_DEPENDS=	p5-GD-Graph>=0:${PORTSDIR}/graphics/p5-GD-Graph
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		GD::Graph3d.3

post-patch:
# pod2man doesn't work without this
	${PERL} -pi -e 's/\r//' ${WRKSRC}/lib/GD/Graph3d.pm

.include <bsd.port.mk>
